#include "Renderer.hpp"

class RendererConsole : public Renderer
{
  public:
    RendererConsole();

    virtual void render(const LifeSimulator& simulation);
};
