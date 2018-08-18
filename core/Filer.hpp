#ifndef _FILER_H
#define _FILER_H
    #include <string>

    /*
        **  Filer class creates our work directory
        **
        **  dirName = название директории;
        **  langType = тип (или название) языка (-html; -php; -c; -cpp)
        **  projectType = тип проекта. В зависимости от типа проекта будет создаваться определённая структура файлов (web; cLangs)
    */
    class Filer
    {
        public:
            bool addFolder(char* dirName, char* langType, std::string projectType);
    };

#endif
