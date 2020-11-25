#include "libc.h"

int is_alnum(int param)
{
  return is_alpha(param) || is_digit(param);
}