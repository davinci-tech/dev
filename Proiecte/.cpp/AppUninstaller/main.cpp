#include "const.h"
#include <iostream>
#include <fstream>

std::ifstream fin(__UNINSTALL_FILE_PATH__);

int main()
{
    std::string word;
    std::string adbPath = __ADB_PATH__;

    fin >> word;
    if (word == "path:")
        fin >> adbPath;

    std::cout << "--------------- App Uninstaller ---------------\n"
              << "Task identifiers:\n"
              << "U   uninstall\n"
              << "R   reinstall\n"
              << "D   disable\n"
              << "E   enable\n"
              << "#   It does nothing at all, really!\n"
              << "\n\n"
              << "~~ uninstall.info structure ~~\n"
              << "path: <the-path-to-adb-the-default-is-the-current-location>\n"
              << "<task-identifier> <app-name>\n"
              << "\n\n"
              << "~~ Example ~~\n"
              << "path: .\n"
              << "U com.google.android.youtube\n";

    while (fin >> word)
    {
        std::string command = "cd " + adbPath + " && adb shell ";
        if (word == "U")
        {
            fin >> word;
            command += "pm uninstall -k --user 0 " + word;
            
            std::cout << "\nExecuting: " << command << '\n';
            system(command.c_str());
        }
        else if (word == "R")
        {
            fin >> word;
            command += "cmd package install-existing " + word;
            
            std::cout << "\nExecuting: " << command << '\n';
            system(command.c_str());
        }
        else if (word == "D")
        {
            fin >> word;
            command += "pm disable-user --user 0 " + word;
            
            std::cout << "\nExecuting: " << command << '\n';
            system(command.c_str());
        }
        else if (word == "E")
        {
            fin >> word;
            command += "pm enable " + word;
            
            std::cout << "\nExecuting: " << command << '\n';
            system(command.c_str());
        }
        else if (word == "#")
        {
            while (fin.peek() != '\n')
                fin >> word;
        }
    }

    std::cout << "\n-----------------------------------------------";

    return 0;
}

// adb shell pm list packages           lists packages
// adb shell pm list packages | grep <search-term>
// # how to remove apps now
// pm uninstall -k --user 0 com.my.demo.app
// # to undo the changes:
// adb shell cmd package install-existing com.my.demo.app