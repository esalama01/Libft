#ifndef LIBFT
#define LIBFT

#include<stddef.h>

char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int	ft_isdigit(int c);
int	ft_is_alpha(int c);
int ft_isalnum(int c);
#endif
