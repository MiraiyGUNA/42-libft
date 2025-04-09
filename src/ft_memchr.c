#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    const unsigned char *p;

    p = (const unsigned char *)str;
    while (n != 0)
    {
        if (*p == (unsigned char)c)
        {
            return ((void *)p);
        }
        n--;
        p++;
    }
    return (NULL);
}