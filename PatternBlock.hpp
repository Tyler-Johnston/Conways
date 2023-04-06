#include "Pattern.hpp"

class PatternBlock : public Pattern
{

  public:
    PatternBlock();
    virtual std::uint8_t getSizeX() const;
    virtual std::uint8_t getSizeY() const;
    virtual bool getCell(uint8_t x, uint8_t y) const;

  private:
    std::vector<std::vector<bool>> m_pattern = {
        { true, true },
        { true, true },
    };
};
