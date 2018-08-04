#ifndef _FILER_H
#define _FILER_H

    #include "dirent.h"  // mkdir and chdir here ..

    /*
    **  dirName = название директории; 
    **  langType = тип (или название) языка (-html; -php; -c; -cpp)
    **  projectType = тип проекта. В зависимости от типа проекта будет создаваться определённая структура файлов (web; cLangs)
    */
    class Filer
    {
        public: 
            bool addFolder(char* dirName, char* langType, char* projectType);
    };

#endif