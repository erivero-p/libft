/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:21:19 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/25 12:42:19 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
// #include	"libft.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	top_cmp(char const *s1, char const *set)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[a])
	{
		while (set[b])
		{
			if (s1[a] == set[b])
			{
				a++;
				break ;
			}
			b++;
		}
		if (b == ft_strlen(set))
			return (a);
		b = 0;
	}
	return (0);
}

static int	bot_cmp(char const *s1, char const *set)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (s1[len])
		len++;
	while (len > 0)
	{
		while (set[j])
		{
			if (s1[len - 1] == set[j])
			{
				len--;
				break ;
			}
			j++;
		}
		if (j == ft_strlen((char *)set))
			return (len);
		j = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;
	int		count;

	i = top_cmp(s1, set);
	j = bot_cmp(s1, set);
	count = 0;
	trim = malloc((j - i + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	while (i < j)
	{
		trim[count] = s1[i];
		count++;
		i++;
	}
	trim[count] = '\0';
	return (trim);
}

/* #include <stdio.h>
int	main(void)
{
	char s1[]= "potata petete ñiñiñi";
	char set[]= "patata";
	printf("%s\n", ft_strtrim(s1, set));
	printf("%i", bot_cmp(s1,))
}
 */