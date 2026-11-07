#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    // A buffer with no null-terminator in the first 15 bytes
    char dst[20] = "AAAAAAAAAAAAAAA"; 
    const char *src = "World";
    size_t size = 5;

    printf("--- Testing ft_strlcat ---\n\n");
    
    printf("Initial dst: %.15s...\n", dst);
    printf("src: %s\n", src);
    printf("size limit: %zu\n\n", size);

    // Call your function
    size_t ret = ft_strlcat(dst, src, size);

    // If size (5) <= d_len (5), the expected return is size (5) + s_len (5) = 10.
    printf("Return value: %zu (Expected: 10)\n", ret);
    
    // The buffer should remain completely untouched because size < initial string length
    printf("Result dst:  %.15s...\n", dst);

    return (0);
}