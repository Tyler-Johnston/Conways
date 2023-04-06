#include "PatternGlider.hpp"

PatternGlider::PatternGlider()
{
}

std::uint8_t PatternGlider::getSizeX() const
{
    return 3;
}
std::uint8_t PatternGlider::getSizeY() const
{
    return 3;
}
bool PatternGlider::getCell(uint8_t x, uint8_t y) const
{
    return m_pattern[x][y];
}
