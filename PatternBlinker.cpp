#include "PatternBlinker.hpp"

PatternBlinker::PatternBlinker()
{
}

std::uint8_t PatternBlinker::getSizeX() const
{
    return 1;
}

std::uint8_t PatternBlinker::getSizeY() const
{
    return 3;
}

bool PatternBlinker::getCell(uint8_t x, uint8_t y) const
{
    return m_pattern[x][y];
}
