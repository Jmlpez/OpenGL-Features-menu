#ifndef UTILS_H
#define UTILS_H

#include <GLEW/glew.h>

#include "./debugbreak.h"
#include <memory> // to handle smart pointers

// Force the program to stop if ASSERT fails
#define ASSERT(x) \
    if (!(x))     \
        debug_break();

#define LOG_LINE() \
    debugLine(__LINE__, __FILE__);

#define GLCall(x)   \
    GLClearError(); \
    x;              \
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
void debugLine(int line, const char *file);
bool GLLogCall(const char *function, const char *file, int line);

// template <typename T>
// using Ref = std::shared_ptr<T>;

#endif
