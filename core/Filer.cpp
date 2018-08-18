#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <cstdlib>
#include <map>
#include <fstream>
#include <string>
#include <sstream>

#include "dirent.h"  // mkdir and chdir here ..
#include "Filer.hpp"

bool Filer::addFolder(char* dirName, char* langType, std::string projectType)
{
  int status = mkdir( dirName, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH );

  if(status == -1)
  {
      std::cout << "Can't create folder " << &dirName << "\n";
      return false;
  }
  else
  {
      int result = chdir(dirName);

      if(result != 0)
      {
          std::cout << "Can't go to " << &dirName << " directory\n";
          return false;
      }
      else
      {
        if (projectType == "cLangs") {
          int innerStatus = mkdir( "core", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH );

          if(innerStatus == -1)
          {
              std::cout << "Can't create 'core' folder\n";
              return false;
          }
          else
          {
              std::string ProgrammText;

              if((int)langType[0] == 99 && (int)langType[1] == 112 && (int)langType[2] == 112) // ascii cpp = 99 112 112, here we check it
              {
                  ProgrammText = "#include <iostream>\n\nusing namespace std;\n\nint main(int argc, char* argv[], char* env[])\n{\n\tcout << \"Hello World!\";\n\n\treturn 0;\n}";
              }
              else
              {
                  ProgrammText = "#include <stdio.h>\n\nint main()\n{\n\tprintf(\"Hello World\");\n\n\treturn 0;\n}";
              }

              std::ofstream cProgrammFile;
              std::string fileName = "main.";
              cProgrammFile.open (fileName.append(langType));
              cProgrammFile << ProgrammText;
              cProgrammFile.close();
              return true;
          }
        }
        else // or we need to create web directory
        {
          const char *folders[] = {"images", "css", "js", "fonts"};
          int length = 3;

          while (length > -1)
          {
              int innerStatus = mkdir( folders[length], S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH );

              if(innerStatus == -1)
              {
                  std::cout << "Can't create folder\n";
                  return false;
              }
              else
              {
                  length--;
              }
          }

              std::string ProgrammText;
              std::ostringstream oss;

              if((int)langType[0] == 112) // ascii code of "p" is 112
              {
                  ProgrammText = "<?php\n\t\n?>";
              }
              else
              {
                  oss <<"<!DOCTYPE html>\n<html lang=\"en\">\n<head>\n\t<meta charset=\"UTF-8\">\n\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n\t<meta http-equiv=\"X-UA-Compatible\" content=\"ie=edge\">\n\t<title>" << dirName <<"</title>\n</head>\n<body>\n\n</body>\n</html>";
                  ProgrammText = oss.str();
              }

              std::ofstream cProgrammFile;
              std::string fileName = "index.";
              cProgrammFile.open (fileName.append(langType));
              cProgrammFile << ProgrammText;
              cProgrammFile.close();
              return true;
        }
      }
  }
}
