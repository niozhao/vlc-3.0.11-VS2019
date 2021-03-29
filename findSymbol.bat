@echo off
echo please use VS native tools command prompt to run
set folderPath=%1%
set symbol=%2%
echo symbol=%symbol%
echo searchFolder=%folderPath%
pushd %~dp0
cd %folderPath%
rem scan all .lib .dll in the folder
for %%f in (*.a *.lib *.dll *.obj) do (
     rem get the whole string of the result of "dumpbin and findstr"
     for /f "delims= eol=" %%j in ('dumpbin /SYMBOLS %%f^|findstr %symbol%') do (
	if not "%%j" == "" (
		echo %%j in %folderPath%\%%f
	)
     )

     for /f "delims= eol=" %%j in ('dumpbin /LINKERMEMBER %%f^|findstr %symbol%') do (
	if not "%%j" == "" (
		echo %%j in %folderPath%\%%f
	)
     )
   )
popd