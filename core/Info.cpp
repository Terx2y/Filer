#include "Info.hpp"
#include <iostream>

    void info::help::usage()
    {
        std::cout << "\n\n";
        std::cout << KRED <<"\t_______________________________________\n";
        std::cout << KRED <<"\t___  ____/___  _/__  /___  ____/__  __ \'\n";
        std::cout << KRED <<"\t__  /_    __  / __  / __  __/  __  /_/ /\n";
        std::cout << KRED <<"\t_  __/   __/ /  _  /___  /___  _  _, _/\n";
        std::cout << KRED <<"\t/_/      /___/  /_____/_____/  /_/ |_|\n";
        std::cout << KRED <<"\t______              ________                  ______\n";
        std::cout << KRED <<"\t___  /______  __    ___  __/_______________  ___|__ \'____  __\n";
        std::cout << KRED <<"\t__  __ \'_  / / /    __  /  _  _ \'_  ___/_  |/_/___/ /_  / / /\n";
        std::cout << KRED <<"\t_  /_/ /  /_/ /     _  /   /  __/  /   __>  < _  __/_  /_/ /\n";
        std::cout << KRED <<"\t/_.___/_\'__, /      /_/    \'___//_/    /_/|_| /____/_\'__, /\n";
        std::cout << KRED <<"\t       /____/                                       /____/\n\n\n" << KNRM;


        std::cout << "\tUsage:\t filer FolderName -language type\n\n\ttypes: -html\t-c\t-cpp\t-php\n\n\n" ;

        return;
    }
