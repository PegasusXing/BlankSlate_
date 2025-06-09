#include "BlankSlate.h"

class SandboxApplication : public BlankSlate::Application {
public:
    SandboxApplication() {
    }

    ~SandboxApplication() {
    }
};

BlankSlate::Application *BlankSlate::CreateApplication() {
    return new SandboxApplication();
}
