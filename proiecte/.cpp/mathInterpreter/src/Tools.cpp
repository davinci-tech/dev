#include "Tools.h"

#include <sstream>
#include <vector>

int Tools::charToInt(char S)
{
  int value;
  std::stringstream s;
  s << S;
  s >> value;
  return value;
}

void Tools::stop(int n = 0)
{
  std::exit(n);
}