#include<unistd.h>
int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
int	is_alpha(int c)
{
	if (is_upper(c) || is_lower(c))
		return (1);
	return (0);
}
