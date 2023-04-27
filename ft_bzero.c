/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:10:59 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/24 10:22:08 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
//#include <string.h>
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
		str[i++] = '\0';
}

/* #include	<stdio.h>
int	main(void)
{
	char	str[10] = "holiwi";
	size_t	len;
	char	*ptr;

	ptr = &str[0];
	len = 0;
	ft_bzero(ptr, len);
	printf("%s", str);
	return 0;
} */