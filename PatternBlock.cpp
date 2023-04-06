#include "PatternBlock.hpp"

PatternBlock::PatternBlock()
{
}

std::uint8_t PatternBlock::getSizeX() const
{
    return 2;
}

std::uint8_t PatternBlock::getSizeY() const
{
    return 2;
}

bool PatternBlock::getCell(uint8_t x, uint8_t y) const
{
    return m_pattern[x][y];
}
