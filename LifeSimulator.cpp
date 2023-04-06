#include "LifeSimulator.hpp"

LifeSimulator::LifeSimulator(std::uint8_t sizeX, std::uint8_t sizeY) :
    m_sizeX(sizeX),
    m_sizeY(sizeY)
{
    // initialize the size of multidimensional vector m_grid
    m_grid.resize(m_sizeX);
    for (int i = 0; i < m_sizeY; i++)
    {
        m_grid[i].resize(m_sizeY);
    }
}

void LifeSimulator::insertPattern(const Pattern& pattern, std::uint8_t startX, std::uint8_t startY)
{

    for (uint8_t i = 0; i < pattern.getSizeX(); i++)
    {
        for (uint8_t j = 0; j < pattern.getSizeY(); j++)
        {
            m_grid[startX + i][startY + j] = pattern.getCell(i, j);
        }
    }
}

void LifeSimulator::update()
{

    // initialize the nextGrid for updating the world
    std::vector<std::vector<bool>> nextGrid;
    nextGrid.resize(m_sizeX);
    for (uint8_t i = 0; i < m_sizeY; i++)
    {
        nextGrid[i].resize(m_sizeY);
    }

    for (uint8_t i = 0; i < m_sizeX; i++)
    {
        for (uint8_t j = 0; j < m_sizeY; j++)
        {

            int neighborCount = 0;

            if (getCell(i - 1, j - 1))
            {
                neighborCount++;
            }
            if (getCell(i - 1, j))
            {
                neighborCount++;
            }
            if (getCell(i - 1, j + 1))
            {
                neighborCount++;
            }
            if (getCell(i, j - 1))
            {
                neighborCount++;
            }
            if (getCell(i, j + 1))
            {
                neighborCount++;
            }
            if (getCell(i + 1, j - 1))
            {
                neighborCount++;
            }
            if (getCell(i + 1, j))
            {
                neighborCount++;
            }
            if (getCell(i + 1, j + 1))
            {
                neighborCount++;
            }

            // update the cell's life status
            if (getCell(i, j) && (neighborCount == 2 || neighborCount == 3))
            {
                nextGrid[i][j] = true;
            }
            else if (!getCell(i, j) && neighborCount == 3)
            {
                nextGrid[i][j] = true;
            }
            else
            {
                nextGrid[i][j] = false;
            }
        }
    }
    std::swap(m_grid, nextGrid);
}

std::uint8_t LifeSimulator::getSizeX() const
{

    return m_sizeX;
}

std::uint8_t LifeSimulator::getSizeY() const
{

    return m_sizeY;
}

bool LifeSimulator::getCell(std::uint8_t x, std::uint8_t y) const
{

    if (x < m_grid.size() && y < m_grid[x].size())
    {
        return m_grid[x][y];
    }
    return false;
}
