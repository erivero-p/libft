/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:48:21 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/24 10:29:08 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	while (s1[i])
		i++;
	s2 = malloc((i + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		s2[j] = s1[j];
		j++;
	}
	return (s2);
}

/* #include	<stdio.h>
#include <string.h>

int	main(void)
{
	printf("%p\n", ft_strdup("holiwi"));
	printf("%s\n", ft_strdup("holiwi"));
	printf("%s\n", strdup("holiwi"));
	printf("%p\n", strdup("holiwi"));

	return 0;
} 
*/
