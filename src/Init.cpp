#include <GLFW/glfw3.h>
#include "glfw-cxx/Init.hpp"
#include <cstdlib>

namespace glfw
{
    bool DebugForceX11 = (glfwInitHint(GLFW_PLATFORM, GLFW_PLATFORM_X11), true);
    bool IsActive = glfwInit();
    bool WillTerminateOnExit = atexit(glfwTerminate);

    bool GetInit()
    {
        return IsActive;
    }

    bool GetWillTerminateOnExit()
    {
        return WillTerminateOnExit;
    }
}
