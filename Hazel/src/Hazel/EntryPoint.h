#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main()
{
    Hazel::Log::Init();

    HZ_CORE_WARN("Initialized");

    const int a = 100;
    HZ_INFO("Hello, Var = {0}", a);

    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
}

#endif
