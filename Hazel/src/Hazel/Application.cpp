
#include "HzPch.h"
#include "Application.h"
#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Hazel
{
    Application::Application()
    { }

    Application::~Application()
    { }

    void Application::Run()
    {
        WindowResizeEvent event(100, 1000);
        HZ_TRACE(event);

        while (true);
    }
}
