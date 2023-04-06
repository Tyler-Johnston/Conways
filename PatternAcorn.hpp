#include "Pattern.hpp"

class PatternAcorn : public Pattern
{

  public:
    PatternAcorn();

    virtual uint8_t getSizeX() const;
    virtual uint8_t getSizeY() const;
    virtual bool getCell(uint8_t x, uint8_t y) const;

  private:
    std::vector<std::vector<bool>> m_pattern = {
        { false, true, false, false, false, false, false },
        { false, false, false, true, false, false, false },
        { true, true, false, false, true, true, true }
    };
};
