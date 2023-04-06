#include "LifeSimulator.hpp"
#include "PatternAcorn.hpp"
#include "PatternBlinker.hpp"
#include "PatternBlock.hpp"
#include "PatternGlider.hpp"
#include "PatternGosperGliderGun.hpp"
#include "RendererConsole.hpp"

int main()
{

    LifeSimulator simulationGliderAndBlock(232, 232);
    LifeSimulator simulationBlinker(232, 232);
    LifeSimulator simulationAcorn(232, 232);
    LifeSimulator simulationGosperGliderGun(232, 232);

    PatternGlider glider;
    PatternBlock block;
    PatternBlinker blinker;
    PatternAcorn acorn;
    PatternGosperGliderGun gosperGliderGun;

    RendererConsole renderConsole;

    for (int i = 0; i < 75; i++)
    {
        if (i == 0)
        {
            simulationGliderAndBlock.insertPattern(block, 20, 25);
            simulationGliderAndBlock.insertPattern(block, 25, 25);
            simulationGliderAndBlock.insertPattern(glider, 0, 3);
            simulationGliderAndBlock.insertPattern(glider, 5, 6);
            simulationGliderAndBlock.insertPattern(glider, 10, 9);
            simulationGliderAndBlock.insertPattern(glider, 0, 9);
            simulationGliderAndBlock.insertPattern(glider, 5, 12);
        }
        renderConsole.render(simulationGliderAndBlock);
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        simulationGliderAndBlock.update();
    }

    for (int i = 0; i < 75; i++)
    {
        if (i == 0)
        {
            simulationBlinker.insertPattern(blinker, 5, 5);
            simulationBlinker.insertPattern(blinker, 5, 20);
            simulationBlinker.insertPattern(blinker, 20, 5);
            simulationBlinker.insertPattern(blinker, 20, 20);
        }
        renderConsole.render(simulationBlinker);
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        simulationBlinker.update();
    }

    for (int i = 0; i < 125; i++)
    {
        if (i == 0)
        {
            simulationAcorn.insertPattern(acorn, 15, 15);
        }
        renderConsole.render(simulationAcorn);
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        simulationAcorn.update();
    }

    for (int i = 0; i < 200; i++)
    {
        if (i == 0)
        {
            simulationGosperGliderGun.insertPattern(gosperGliderGun, 5, 3);
        }
        renderConsole.render(simulationGosperGliderGun);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        simulationGosperGliderGun.update();
    }

    return 0;
}
