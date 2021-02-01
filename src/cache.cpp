#include <stdio.h>

#include <unordered_map>
#include <string>

#include "cache.h"

using namespace falculator;

std::unordered_map<std::string, Number> cache;

Number falculator::cached(Number (*function)(Number), Number param)
{
    char id[256];
    sprintf(id, "__cached__%p__%d", function, param);

    std::string cache_id = std::string(id);

    Number value;

    try
    {
        value = cache.at(cache_id);
    }
    catch (const std::out_of_range &err)
    {
        value = (*function)(param);
        cache[cache_id] = value;
    }

    return value;
}
