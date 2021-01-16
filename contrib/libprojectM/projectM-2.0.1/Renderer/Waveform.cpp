/*
 * Waveform.hpp
 *
 *  Created on: Jun 25, 2008
 *      Author: pete
 */

#ifdef LINUX
#include <GL/gl.h>
#endif
#ifdef WIN32
#include "glew.h"
#endif
#ifdef __APPLE__
#include <GL/gl.h>
#endif

#include "Waveform.hpp"
#include <algorithm>
#include "BeatDetect.hpp"
#include <functional>

Waveform::Waveform(int samples)
: RenderItem(),samples(samples), points(samples), pointContext(samples)
{

	spectrum = false; /* spectrum data or pcm data */
	dots = false; /* draw wave as dots or lines */
	thick = false; /* draw thicker lines */
	additive = false; /* add color values together */

	scaling= 1; /* scale factor of waveform */
	smoothing = 0; /* smooth factor of waveform */
	sep = 0;

}
void Waveform::Draw(RenderContext &context)
   {

		//if (samples > 2048) samples = 2048;


			if (additive)  glBlendFunc(GL_SRC_ALPHA, GL_ONE);
			else glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

			if (thick)
			{
			  glLineWidth(context.texsize <= 512 ? 2 : 2*context.texsize/512);
			  glPointSize(context.texsize <= 512 ? 2 : 2*context.texsize/512);

			}
			else glPointSize(context.texsize <= 512 ? 1 : context.texsize/512);

			float* value1 = (float*)malloc(sizeof(float) * samples);
			float* value2 = (float*)malloc(sizeof(float) * samples);

			context.beatDetect->pcm->getPCM( value1, samples, 0, spectrum, smoothing, 0);
			context.beatDetect->pcm->getPCM( value2, samples, 1, spectrum, smoothing, 0);
			// printf("%f\n",pcmL[0]);


			float mult= scaling*( spectrum ? 0.015f :1.0f);


				std::transform(&value1[0],&value1[samples],&value1[0],std::bind2nd(std::multiplies<float>(),mult));
				std::transform(&value2[0],&value2[samples],&value2[0],std::bind2nd(std::multiplies<float>(),mult));

			WaveformContext waveContext(samples, context.beatDetect);

			for(int x=0;x< samples;x++)
			{
				waveContext.sample = x/(float)(samples - 1);
				waveContext.sample_int = x;
				waveContext.left = value1[x];
				waveContext.right = value2[x];

				points[x] = PerPoint(points[x],waveContext);
			}

			//float colors[samples][4];
			//float p[samples][2];
			float* colors = (float*)malloc(sizeof(float) * 4 * samples);
			float* p = (float*)malloc(sizeof(float) * 2 * samples);

			for(int x=0;x< samples;x++)
			{
			  colors[x * 4 + 0] = points[x].r;
			  colors[x * 4 + 1] = points[x].g;
			  colors[x * 4 + 2] = points[x].b;
			  colors[x * 4 + 3] = points[x].a * masterAlpha;

			  p[x * 2 + 0] = points[x].x;
			  p[x * 2 + 1] = -(points[x].y-1);

			}

			glEnableClientState(GL_VERTEX_ARRAY);
			glEnableClientState(GL_COLOR_ARRAY);
			glDisableClientState(GL_TEXTURE_COORD_ARRAY);

			glVertexPointer(2,GL_FLOAT,0,p);
			glColorPointer(4,GL_FLOAT,0,colors);

			if (dots)	glDrawArrays(GL_POINTS,0,samples);
			else  	glDrawArrays(GL_LINE_STRIP,0,samples);

			glPointSize(context.texsize < 512 ? 1 : context.texsize/512);
			glLineWidth(context.texsize < 512 ? 1 : context.texsize/512);
#ifndef USE_GLES1
			glDisable(GL_LINE_STIPPLE);
#endif
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
			//  glPopMatrix();
			free(colors);
			free(p);
			free(value1);
			free(value2);
   }



