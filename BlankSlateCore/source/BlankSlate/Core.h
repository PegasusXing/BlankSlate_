
#ifndef CORE_H
#define CORE_H

#ifdef BLANKSLATE_PLATFORM_WINDOWS
    #ifdef BLANKSLATE_BUILD_DLL
        #define BLANKSLATE_API __declspec(dllexport)
    #else
        #define BLANKSLATE_API __declspec(dllimport)
    #endif
#else
    #error BlankSlate_ only supports Windows...
#endif


#endif //CORE_H
