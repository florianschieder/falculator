#ifndef __NUMBER_H
#define __NUMBER_H

namespace falculator
{
class Number
{
public:
    Number();
    Number(int n);
    int getValue();

private:
    int _n;
};
}
#endif
