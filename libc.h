#ifndef libc
#define libc

#include <string.h>

int is_digit(int param);
int is_alpha(int param);
int is_alnum(int param);
int is_ascii(int param);
int is_print(int param);
size_t ft_strlen(char *s);

#endif