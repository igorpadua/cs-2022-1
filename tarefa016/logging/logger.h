// To turn on logging macros for logging to console
// copy one of the following LOG_LEVEL defines to your
// program before including "Debug.h". Best set at project level
// in IDE.
//#define LOG_LEVEL 0     // Fatal only
#define LOG_LEVEL 1     // Fatal or Error
//#define LOG_LEVEL 2     // Fatal, Error or Warning
//#define LOG_LEVEL 3     // Fatal, Error, Warning or Info
//#define LOG_LEVEL 4     // Fatal, Error, Warning, Info or Debug

#define LOG_PRINTF(b, level, args...) { if (b) { \
        std::cout << __FILE_NAME__ << "(" << __LINE__ << "):" << level << ":"; \
        std::fprintf(stdout, args); \
        std::cout << std::endl; \
    }}

#if LOG_LEVEL >= 0
#define LOG_FATAL(b, args...) LOG_PRINTF((b), "FATAL", args){if (b) throw std::exception();}
#else
#define LOG_FATAL(b, ...)
#endif

#if LOG_LEVEL >= 1
#define LOG_ERROR(b, args...) LOG_PRINTF((b), "ERROR", args)
#else
#define LOG_ERROR(b, ...)
#endif

#if LOG_LEVEL >= 2
#define LOG_WARN(b, args...) LOG_PRINTF((b), "WARNING", args)
#else
#define LOG_WARN(b, ...)
#endif

#if LOG_LEVEL >= 3
#define LOG_INFO(b, args...) LOG_PRINTF((b), "INFO", args)
#else
#define LOG_INFO(b, ...)
#endif

#if LOG_LEVEL >= 4
#define LOG_DEBUG(b, args...) LOG_PRINTF((b), "DEBUG", args)
#else
#define LOG_DEBUG(b, ...)
#endif
