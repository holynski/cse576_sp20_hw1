# Instructions for Windows

1. Start Visual Studio 2017
2. Click File New Project from Existinng Code
3. On Welcome Screen make sure Visual C++ is selected
4. Click Next
5. On the next screen
6. Add Path to src folder in "Project File Location"
7. E.g. D:\Projects\MySandBox\UW_CS576\HW1\src
8. Give a name in Project Name (e.g.UW_CS576_HW1)
9. Check "Add files to the project from these folders"
10. Check "Add Subfolders"
11. Check "Show all files in Solution Explorer"
12. Click Next
13. In specify Project Settings
14. Check Use Visual Studio
15. In Project Type Select Console Application Project
16. Click Next
17. In Specify Debug Configurations Click Next
18. In Specify Release Configurations Check Same as Debug Configuration
19. Click Finish

You should see all the Source and Header files in the Solution Explorer
Double click on test.c to see the Source in the sourcfe window
test0.cpp has the main() function
Choose Debug X64/x86 in the Config boxes in the top Menu

In the Solution Explorer Window on the right
Right Click on the <Project Name> and Click Build
Your project should build without errors

Build Output window should show:
```
1>UW_CS576_HW1.vcxproj -> D:\Projects\MySandBox\UW_CS576\HW1\src\x64\Debug\UW_CS576_HW1.exe
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========

You can Build the Release Version also by choosing 
Release   X64/x86
Right Click on the <Project Name> and Click Build
Your project should build without errors

1>UW_CS576_HW1.vcxproj -> D:\Projects\MySandBox\UW_CS576\HW1\src\x64\Release\UW_CS576_HW1.exe
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```
