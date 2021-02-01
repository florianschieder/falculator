#include <number.h>

falculator::Number::Number()
{
    this->_n = 0;
}

falculator::Number::Number(int n)
{
    this->_n = n;
}

int falculator::Number::getValue()
{
    return this->_n;
}
