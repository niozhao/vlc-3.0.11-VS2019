# Install script for directory: /home/struktured/workspace/projectm_trunk/src/libprojectM

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "0")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "/usr/local/share/projectM/presets" TYPE FILE FILES
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Solarized Space (Space DNA Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Phat_Zylot_Eo.S._Krash I_hope_someone_will_see_this_triping_v2b.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Crystal Ball (Magical Reaction Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Telek - Altars of Madness (Rolling Oceans Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Rocke - Sugar Spun Sister.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Altars Of Madness 4 (Spirit Of Twisted Madness Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Idiot & Zylot - Unhealthy Love (Idiot's STDs Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash & Rovastar - Altars of Madness (Mad Ocean Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - The Shroomery.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Unchained - Centre Of Gravity.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Magic Carpet.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Beat Demo 2.3.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Feedback 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Torrid Tales.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Blasto.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Fractopia (Fractal Havok Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Beat Demo 2.0.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Idiot24-7 - Ascending to heaven 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic & Unchained - So Much Love.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/shifter - snow.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Swirlie 4.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - Digital Flame.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Space.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzor & Che - Inside The House Of Nil.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Multiverse Starfield 3.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Phat_Eo.S._Algorithm.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Kalideostars (Round  Round Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Dynamic Swirls 3 (Broken Destiny Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Octoplasm.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - Windowframe To Mega Swirl 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Harlequin's Fractal Encounter.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Crystal Storm.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Krash - Flowing Synergy.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzor & Rovastar - Oozing Resistance (Waveform Mod).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Hyperspace.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - For The Seagull.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Swirlie 5.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Cosmic Echoes 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - Luckless.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Telek - Cosmic Fireworks.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Octotrip (MultiTrip Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.S.+Phat Cool Bug_arm.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Illusion - Logic Morph.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Ice Planet.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Bitterfeld (Crystal Border Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Beat Demo 1.0.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Dark Matter (Converse Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Phat_Eo.S_shoot_em_up.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - The Inner Workings of my New Computer.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic & Unchained - Remembering How You Were (Perceived Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Kalideostars.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/CrystalHigh - mad ravetriping.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Telek - Slow Shift Matrix (bb4.5).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Swirlie 1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.S. - skylight a3 [trip colors flux2]_phat_Multi_shaped2_zoe_colours5.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic & Unchained - Wrenched Fate.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Subjective Experience Of The Manifold.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Oldskool Mellowstyle.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - 3D Shapes Demo 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - 3D Shapes Demo.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Causeway Of Dreams (Nightmare Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/fiShbRaiN - crazy diamond.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Che - Terracarbon Stream.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/shifter - feathers (angel wings)_phat_remix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Circlefacade.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Floater Society.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Dynamic Swirls 3 (Voyage Of Twisted Souls Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Idiot - Texture Boxes (Remix 2).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Fractopia (Upspoken Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Illusion & Unchained - Invade My Mind.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - A Blur.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Eggs.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Cartoon Factory.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Telek - Flicker.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/shifter - pulsar.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Omnipresence Resurrection.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Cruzin'.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Frozen Rapture .milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Inner Thoughts (Dark Secret Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Quicksand.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Bmelgren & Krash - Rainbow Orb Peacock (Lonely Signal Gone .milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Antidote.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - A Matter Of Taste (Remix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/bmelgren - Take this highway.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Fractopia (Fantic Dancing Lights Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Zoom Effects With A Twist 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Sunflower Passion (Enlightment Mix)_Phat_edit.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/nil - Cid and Lucy.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Arise! (Padded Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Bellanova (New Wave Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Causeway Of Dreams (REMix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Sunflower Passion.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - Interwoven (Nightmare Weft Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - In Memory Of Peg.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Bow To Gravity.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.S.+Phat Fractical_dancer - pulsate box_mix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Shaping The Grid.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Illusion & Che - The Piper.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Surface (Vectrip Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Anchorpulse (Verified Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - ReAwoke.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic & Unchained - Minor Alteration.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.s and PieturP - Starfield.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Airs.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - High Dynamic Range.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Painful Plasma (Multi-Wave Mirrored Rage) -- Rozzor triangle tweak.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/nil - Can't Stop the Cramming.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Brakefreak.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Present For Saddam.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & StudioMusic - More Cherished Desires.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Digiscape Advanced Processor.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Inner Thoughts (Distant Memories Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Sunflower Passion (Simple Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Block Of Sound (Abstract Architecture Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/EMPR - Random - Changing Polyevolution.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Ether Storm.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Fractopia (Focused Childhood Mix ).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash and Rovastar - Rainbow Orb 2 Peacock (Bmelgren's Comp.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Studio Music and Unchained - Rapid Alteration.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/nil - Can't Stop the Blithering.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Goo Kung Fu.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzor & Aderrasi - Canon.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Zoom Effects With A Twist 3.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Chromatic Abyss (The Other Side).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Candy Avian.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Hyperspace (Frozen Rapture Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Downward Spiral.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/CatalystTheElder - Electric Rosebud_Phat_texture_edit.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - Triptionary.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/fiShbRaiN - brainstem activation.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - Wormhole Pillars (Hall of Shadows mi.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Aimless (Spirogravity Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Zylot - Crystal Ball (Cerimonial Decor).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Causeway Of Dreams.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Mstress & Juppy - Dancers In The Dark.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Lifesavor Anyone.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.S.+Phat Fractical_dancer - pulsate B.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Chapel Of Ghouls.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Jess - Trying To Trap A Twister.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/EvilJim - Follow the ball.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Altars Of Madness (Surealist Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - simple.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.S.+Phat Fractical_dancer_Peacock.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - El Cubismo.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Anomalous Material Science (Pure Splinter Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Rocke - Headspin.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - Wormhole Pillars.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/fiShbRaiN - cthulhus asshole (bad breakfast remix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Dynamic Swirls 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Window Reflection 6.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Inner Thoughts (Clouded Judgement Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Deeper Logic.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Elastoid.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Octopus.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Dynamic Swirls 3 (Mysticial Awakening Mi.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss and Rovastar - The Chaos Of Colours (sprouting dimentia mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzer & Neuro - Starover (Semicolon Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - The Chaos Of Colours (Drifting Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - The Awakening.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Inner Thoughts (Frantic Thoughts Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Airs (Windy Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Phat_Eo.S. - our own personal demon.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Antidote (Aqualung Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss & Rovastar - Notions Of Tonality 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Bmelgren - Pentultimate Nerual Slipstream (Tweak 2).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Octotrip.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/shifter - pinwheel.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Nautilus.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - Framed Geometry.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Sea Shells.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Multiverse Starfield 1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Inside The Planar Portal.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Ribald Ballad.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/EvilJim - Ice Drops.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Aderrasi - Clockwork Organism.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Flowing Form.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash & Illusion - Spiral Movement.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Altars Of Harlequin's Madness (Dark Disorder Mix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzor & Zylot - Rainbow River.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Beat Demo 2.2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Antidote (Side Effects Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Fvese - Stranger Minds (Astral Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash & Rovastar - Cerebral Demons - Phat + Eo.S. Killer Death Bunny Remix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic - Numerosity.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/fiShbRaiN - plasma temptation.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Decreasing Dreams (Increasing Memory Mix) .milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - Dynamic Borders 1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Inner Thoughts (Strange Cargo Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Notions Of Tonality.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Illusion - Figure Eight.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Future Speakers.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Solarized Space.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Dynamic Swirls 1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Parallel Universe.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Illusion & Che - Return Of The King.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Altars Of Madness (Duel Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic & Unchained - Entity.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Making Time (Swamp Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Octopus Ever Changing.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzor & Shreyas - Deeper Aesthetics.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Dynamic Swirls 3 (Poltergiest Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Mstress & Juppy - Dancer.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rozzer & Zylot - Force Field Generator (Slowtime Tweak).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/phat_CloseIncouneters.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Eddies 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Dark Wisps.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Negative Sun III.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Illusion & Unchained - Frozen Eye 1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss & Rovastar - Tokamak (Naked Intrusion Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash - War Machine (Shifting Complexity Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - Slow Solstice.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Idiot - Texture Boxes (Remix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic - It's Only Make Believe.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Swirlie 3.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - A Million Miles from Earth.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Hallucinogenic Pyramids (Beat Time Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Visionarie.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Block Of Sound (Fractal Construction Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Ashes Of Air (Remix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash and Rovastar - Rainbow Orb.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - The Fatty Lumpkin Sunkle Tweaker.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - The Tunnel (Final Stage Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Krash & TEcHNO - Rhythmic Mantas.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Mstress & Darius - Pursuing The Sunset.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Azirphaeli's Mirror.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Cosmic Echoes 1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Contortion.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - 0 To 60.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - Tangent Universe (Collapsed With Artifact Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Explosive Minds.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained & Rovastar - Xen Traffic.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Eye On Reality (Mega 3 Mix)_phat_edit.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - The Chaos Of Colours.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Morat's Final Voyage.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Fvese - Stranger Minds.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Phat_Rovastar - What_does_your_soul_look_like.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Contortion (Xenomorph Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Space (Twisted Dimension Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Fvese - Deadly Flower.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Hurricane Nightmare.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Cosmic Mosaic (Active Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Reenen - phoenix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Perverted Dialect.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Illusion & Rovastar - Clouded Bottle.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Krash - Interwoven (Contra Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Jaded Emotion.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/phat_CloseIncounetersV2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - New meetings.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Zylot - light of the path.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Beat Demo 2.1.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Kalideostars (Altars Of Madness MIx).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - A Million Miles from Earth (Pathfinder Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & StudioMusic - Twisted Spider Web.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Antique Abyss.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Cosmic Dust 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Che - Escape.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Reenen Geiss - Triple Feedback.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Harlequin's Dynamic Fractal (Crazed Spiral Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Idiot - MOTIVATION!.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Decreasing Dreams (Extended Movement Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Pithlit & Illusion - Symetric pattern.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Zylot - Sea Of Zigrot.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Stand Still!.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Swirlie 2.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Working the Grid.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/StudioMusic & Unchained - State Of Discretion.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss - Octopus Gold.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar and Unchained - Braindance Visions.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Phat_Rovastar_Eo.S. spiral_faces.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Eo.S.+Phat Cool Bug_arm_textured.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Airhandler (Menagerie Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Idiot & Rovastar - Altars Of Madness 2 (X.42 Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Attacking Freedom.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Goofy Beat Detection.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Multiviola.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Forgotten Moon.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Altars Of Madness.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Idiot24-7 - Balk Acid.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Blender.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Reenen Geiss - Triple Feedback_phat+eos_edit.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Bmelgren & Krash - Rainbow Orb Peacock (Centred Journey Mix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/bmelgren - Godhead.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Pandora's Volcano.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/shifter - flashburn.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar and Krash - Hallucinogenic Pyramids (Extra Beat Ti.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Aimless (Gravity Directive Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Fvese - Zoom Effects (Remix 2).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Geiss - Dynamic Swirls 3 (Twisted Truth Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Zylot - Narell's Fever.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Altars Of Madness (A Million Miles From Earth Mi.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/fiShbRaiN - quark matrix.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/fiShbRaiN - cthulhus asshole.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Timeless Voyage.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Agitator.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Unchained - Cranked On Failure.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Aderrasi - Anchorpulse (Pulse Of A Ghast II Mix).milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar - Twilight Tunnel.milk"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Rovastar & Sperl - Tuxflower.prjm"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss & Sperl - Feedback (projectM idle HDR mix).prjm"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Geiss & Sperl - Cruzin' (Moody).prjm"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/M.tga"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/headphones.tga"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/project.tga"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/presets/Tux.tga"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "/usr/local/share/projectM/fonts" TYPE FILE FILES
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/fonts/Vera.ttf"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/fonts/VeraMono.ttf"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "/usr/local/share/projectM/shaders" TYPE FILE FILES
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/Renderer/projectM.cg"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/Renderer/blur.cg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "/usr/local/lib/pkgconfig" TYPE FILE FILES "/home/struktured/workspace/projectm_trunk/src/libprojectM/libprojectM.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "/usr/local/share/projectM" TYPE FILE FILES "/home/struktured/workspace/projectm_trunk/src/libprojectM/config.inp")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libprojectM" TYPE FILE FILES
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/projectM.hpp"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/event.h"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/dlldefs.h"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/fatal.h"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/PCM.hpp"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/Common.hpp"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprojectM.so.2.00")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprojectM.so.2.00"
         RPATH "")
  ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprojectM.so.2.00")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/libprojectM.so.2.00"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/libprojectM.so.2"
    "/home/struktured/workspace/projectm_trunk/src/libprojectM/libprojectM.so"
    )
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprojectM.so.2.00")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprojectM.so.2.00")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libprojectM.so.2.00")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/struktured/workspace/projectm_trunk/src/libprojectM/NativePresetFactory/cmake_install.cmake")
  INCLUDE("/home/struktured/workspace/projectm_trunk/src/libprojectM/MilkdropPresetFactory/cmake_install.cmake")
  INCLUDE("/home/struktured/workspace/projectm_trunk/src/libprojectM/Renderer/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/struktured/workspace/projectm_trunk/src/libprojectM/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/struktured/workspace/projectm_trunk/src/libprojectM/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
