#include "libc.h"

int is_print(int param)
{
  return param >= 32 && param <= 126;
}