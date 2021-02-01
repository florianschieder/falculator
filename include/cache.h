#ifndef __CACHE_H
#define __CACHE_H

#include "number.h"

namespace falculator
{
Number cached(Number (*function)(Number), Number param);
}

#endif
