/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:20:42 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/24 12:46:31 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	if (src == NULL && dst == NULL)
		return (0);
	i = 0;
	ptr_dest = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_dest > ptr_src)
	{
		while (len-- != 0)
			ptr_dest[len] = ptr_src[len];
	}
	else
	{
		while (i < len)
		{
			ptr_dest[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}

/* #include <strings.h>
#include	<stdio.h>
int	main(void)
{
	char	str[10] = "patata";
	char	dst[10] = "momomom";
	size_t	len;
	char	*ptr;

	ptr = &str[0];
	len = 4;
	//printf("%s", ft_memcpy(dst, ptr, len));
	printf("%s", memmove(dst, ptr, len));
	printf("\n");
	printf("%s", ft_memmove(dst, ptr, len));
	return 0;
} */