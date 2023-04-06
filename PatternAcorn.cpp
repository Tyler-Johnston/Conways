#include "PatternAcorn.hpp"

PatternAcorn::PatternAcorn()
{
}

std::uint8_t PatternAcorn::getSizeX() const
{

    return 3;
}
std::uint8_t PatternAcorn::getSizeY() const
{

    return 7;
}
bool PatternAcorn::getCell(uint8_t x, uint8_t y) const
{

    return m_pattern[x][y];
}
