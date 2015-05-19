#pragma once

#include "common/common.h"
#include "windowsystem/windowsystem.h"
#include "scenegraph/scenegraph.h"

namespace rengine {

class System
{
public:
    static System *get();

    virtual void run() = 0;
    virtual void processEvents() = 0;
    virtual Surface *createSurface() = 0;
    virtual Renderer *createRenderer() = 0;
    virtual OpenGLContext *createOpenGLContext() = 0;
};

}