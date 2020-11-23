#include "libc.h"

int is_ascii(int param)
{
  return (param >= 0 && param <= 127);
}