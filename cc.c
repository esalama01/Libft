#include "libft.h"
#include <stdio.h>
#include <string.h> // For the original strncmp

// Your function prototype

int	main(void)
{
	printf("--- Testing ft_strncmp ---\n\n");

	// The exact strings we discussed
	const char *s1 = "abc";
	const char *s2 = "abz";

	// TEST 1: The Out-of-Bounds Trap
	size_t n_trap = 2;
	printf("Test 1: The Out-of-Bounds Trap (n = 2)\n");
	printf("Comparing: \"%s\" and \"%s\" up to %zu characters.\n", s1, s2,
		n_trap);
	printf("Expected (libc): %d\n", strncmp(s1, s2, n_trap));
	printf("Your ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n_trap));

	// TEST 2: The n = 0 Trap
	size_t n_zero = 0;
	printf("Test 2: The n = 0 Trap\n");
	printf("Comparing: \"%s\" and \"%s\" up to %zu characters.\n", s1, s2,
		n_zero);
	printf("Expected (libc): %d\n", strncmp(s1, s2, n_zero));
	printf("Your ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n_zero));

	// TEST 3: A standard mismatch
	size_t n_full = 3;
	printf("Test 3: Full Comparison (n = 3)\n");
	printf("Comparing: \"%s\" and \"%s\" up to %zu characters.\n", s1, s2,
		n_full);
	printf("Expected (libc): %d\n", strncmp(s1, s2, n_full));
	printf("Your ft_strncmp: %d\n\n", ft_strncmp(s1, s2, n_full));

	return (0);
}