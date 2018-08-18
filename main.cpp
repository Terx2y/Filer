#include <iostream>
#include <map>
#include <string>

#include "core/Filer.hpp"

int main(int argc, char* argv[], char* env[])
{
    if(argv[1] != NULL)
    {
      // Create Filer class copy
      Filer project;

      std::map <std::string, int> language; // Type of a language in project that we init

      language["-c"] = 1; // C Language
      language["-php"] = 2; // PHP language
      language["-cpp"] = 3; // C++ language
      language["-html"] = 4; // HTML markup

      if(argv[2] == NULL)
      {
          std::cout << "Error.. \n Project type not mentioned!\n\nSyntax:\t filer FolderName -language type\n\ntypes: -html\t-c\t-cpp\t-php\n";
          exit(-1);
      }

      // Here we moved index position for 1 step to the right, to truncate " - " before extention
      // langType = language type (html, c, c++, php)
      char* langType = argv[2] + 1;

      switch(language[argv[2]])
      {
          case 1:
              if(project.addFolder(argv[1], langType, "cLangs"))
              {
                  std::cout << "Project: " << argv[1] << " ready to use\n";
              }
          break;

          case 3:
              if(project.addFolder(argv[1], langType, "cLangs"))
              {
                  std::cout << "Project: " << argv[1] << " ready to use\n";
              }
          break;

          case 2:
              if(project.addFolder(argv[1], langType, "web"))
              {
                  std::cout << "Project: " << argv[1] << " ready to use\n";
              }
          break;

          case 4:
              if(project.addFolder(argv[1], langType, "web"))
              {
                  std::cout << "Project: " << argv[1] << " ready to use\n";
              }
          break;

          default:
              std::cout << "Unknown argument:  " << argv[2] << "\n";
          break;
      }
    }
    else{
        std::cout << "Argument can't be empty!\n";
    }
	return 0;
}
