#pragma once
#include <sstream>

template<typename T, typename U>
T convertTo(U S)
{
	T value;
    std::stringstream s;
    s << S;
    s >> value;
    return value;
}