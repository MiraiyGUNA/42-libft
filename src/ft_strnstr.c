#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	little_length;
	size_t	j;

	little_length = ft_strlen(little);
	if (little_length == 0 || big == little)
		return ((char *)big);
	if (n == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (i + j) < n)
			j++;
		if (j == little_length)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}