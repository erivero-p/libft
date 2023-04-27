/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:59:57 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/17 18:03:25 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h> 
// #include <string.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	while (i < len)
		s[i++] = (unsigned char)c;
	return (str);
}

/* #include	<stdio.h>
int	main(void)
{
	char	str[10];
	int		c;
	size_t	len;
	char	*ptr;

	ptr = &str[0];
	c = 78;
	len = 8;

	printf("%s", ft_memset(ptr, c, len));
	return 0;
} */