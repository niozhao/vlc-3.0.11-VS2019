@echo off
echo delete the specified folder and extension folder
set folderName=%1%
set fileExeT=%2%
echo bat will delete folder named: %folderName% and files have extension: %fileExeT%
pause 

pushd %~dp0
rem /d 表示遍历文件夹，/r 表示深度遍历
for /d /r %%f in (*) do ( 
	for /f "delims= eol=" %%j in ('echo %%f^|findstr %folderName%') do (
	if not "%%j" == "" (
		echo delete %%f
		rd /s /Q %%f
	)
     )
)
popd

pushd %~dp0
del %~dp0*.%fileExeT% /f /s /q
popd