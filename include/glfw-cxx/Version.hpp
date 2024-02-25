#ifndef _GLFW_CXX_VERSION_H_
#define _GLFW_CXX_VERSION_H_

#pragma once
#include <GLFW/glfw3.h>
#include <string>

namespace glfw
{
    /*!\brief The namespace for GLFW version info
     */
    namespace VersionInfo
    {
        int major;
        int minor;
        int rev;
        void Get();
        std::string GetString();
    }
}

#endif // _GLFW_CXX_VERSION_H_
