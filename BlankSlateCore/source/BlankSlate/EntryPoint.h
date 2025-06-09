#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#ifdef BLANKSLATE_PLATFORM_WINDOWS

extern BlankSlate::Application* BlankSlate::CreateApplication();

int main(int argc, char **argv) {

    auto application = BlankSlate::CreateApplication();
    application->Run();
    delete application;
}

#endif

#endif //ENTRYPOINT_H
