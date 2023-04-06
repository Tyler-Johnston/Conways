#include "RendererConsole.hpp"

RendererConsole::RendererConsole()
{
}

void RendererConsole::render(const LifeSimulator& simulation)
{
    rlutil::cls();
    rlutil::hidecursor();
    for (uint8_t i = 0; i < simulation.getSizeX(); i++)
    {
        for (uint8_t j = 0; j < simulation.getSizeY(); j++)
        {
            if (simulation.getCell(i, j))
            {
                rlutil::locate(i, j);
                rlutil::setChar('X');
            }
        }
    }
    rlutil::showcursor();
    std::cout << std::flush;
}
