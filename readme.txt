build help:

need install VS2019£º
1£ºinstall  Visual Studio 2019 version 16.8 Preview 3
2£ºDownload the "Insider Preview Windows 10 SDK" and install to support C11/C17 feature¡£(now isWindows SDK Version to 10.0.20206.0, reference https://devblogs.microsoft.com/cppblog/c11-and-c17-standard-support-arriving-in-msvc/ )

build step:
1: go to libs\x64, unpack libs_part_1.rar libs_part_2.rar to current folder
2: open winvlc.sln with VS2019
3: select Debug && x64
4: build contrib first, those are 3rd libs.
5: build winvlc project, it will auto build libcompat¡¢libvlc¡¢libvlccore project.
6: build all plugins.
7: the output runable vlc is in  vlc-3.0.11-VS2019\x64\Debug\vlc





email:  niozhao@qq.com