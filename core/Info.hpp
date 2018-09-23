#ifndef INFO_HPP_
#define INFO_HPP_

// Font color set for console
    #define KNRM  "\x1B[0m"
    #define KRED  "\x1B[31m"
    #define KGRN  "\x1B[32m"
    #define KYEL  "\x1B[33m"
    #define KBLU  "\x1B[34m"
    #define KMAG  "\x1B[35m"
    #define KCYN  "\x1B[36m"
    #define KWHT  "\x1B[37m"
// Font color set for console

    namespace info{
        
        class help{
            public:
                void static usage(); // prints some info about usage utility
        };

    }

#endif