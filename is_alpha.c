#include "libc.h"

int is_alpha(int param)
{
  return (param >= 65 && param <= 90) || (param >= 97 && param <= 122);
}