#ifndef PLATFORM_H
#define PLATFORM_H

#include <stddef.h>     // size_t

#ifdef _WIN32
    // Windows: define ssize_t manually
    #include <BaseTsd.h>
    typedef SSIZE_T ssize_t;
#else
    // POSIX systems (Linux, macOS, etc.) already have ssize_t
    #include <sys/types.h>
#endif

#endif