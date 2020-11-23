#include "libc.h"

size_t ft_strlen(char *s)
{
  size_t res = 0;
  while (s[res])
    res++;
  return res;
}