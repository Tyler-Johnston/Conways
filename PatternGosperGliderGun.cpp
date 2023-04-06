#include "PatternGosperGliderGun.hpp"

PatternGosperGliderGun::PatternGosperGliderGun()
{
}

std::uint8_t PatternGosperGliderGun::getSizeX() const
{
    return 9;
}

std::uint8_t PatternGosperGliderGun::getSizeY() const
{
    return 36;
}

bool PatternGosperGliderGun::getCell(uint8_t x, uint8_t y) const
{
    return m_pattern[x][y];
}
