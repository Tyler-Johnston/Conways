#include "Pattern.hpp"

class PatternGlider : public Pattern
{

  public:
    PatternGlider();
    virtual std::uint8_t getSizeX() const;
    virtual std::uint8_t getSizeY() const;
    virtual bool getCell(uint8_t x, uint8_t y) const;

  private:
    std::vector<std::vector<bool>> m_pattern = {
        { false, false, true },
        { true, false, true },
        { false, true, true },
    };
};
