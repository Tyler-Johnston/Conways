#include "Pattern.hpp"

class PatternBlinker : public Pattern
{

  public:
    PatternBlinker();

    virtual uint8_t getSizeX() const;
    virtual uint8_t getSizeY() const;
    virtual bool getCell(uint8_t x, uint8_t y) const;

  private:
    std::vector<std::vector<bool>> m_pattern = {
        { true, true, true }
    };
};
