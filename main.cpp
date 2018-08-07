#include <iostream>
#include "core/Filer.hpp"

using namespace std;

int main(int argc, char* argv[], char* env[])
{
    // Create Filer class copy
    Filer project;

    if(argv[1] == NULL)
    {
        cout << "Argument can not be empty!\n";
    }
    else{
        map <string, int> language; // Type of a language in project that we init

        language["-c"] = 1; // C Language
        language["-php"] = 2; // PHP language
        language["-cpp"] = 3; // C++ language
        language["-html"] = 4; // HTML markdown

        if(argv[2] == NULL)
        {
            cout << "Error.. \n Project type not mentioned!\n\nSyntax: filer FolderName -language type\n\ntypes: -html\t-c\t-cpp\t-php\n";
            exit(-1);
        }

        // Here we moved index position for 1 step to the right, to truncate " - " before extention
        // langType = language type (html, c, c++, php)
        char* langType = argv[2] + 1; 
        
        switch(language[argv[2]])
        {            
            case 1:                
                if(project.addFolder(argv[1], langType, 'cLangs'))
                {
                    cout << "Project: " << argv[1] << " added successful\n";
                }
            break;

            default:
                cout << "Unknown argument:  " << argv[2] << "\n";
            break;
        }    
    
	return 0;
}