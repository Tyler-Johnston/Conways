#include "LifeSimulator.hpp"
#include "rlutil.h"

#include <chrono>
#include <thread>

class Renderer
{
  public:
    virtual void render(const LifeSimulator& simulation) = 0;
};
