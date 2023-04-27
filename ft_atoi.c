/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erivero- <erivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:31:23 by erivero-          #+#    #+#             */
/*   Updated: 2023/04/19 15:02:34 by erivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sn;
	int	acum;

	sn = 1;
	i = 0;
	acum = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sn = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		acum = acum * 10 + (str[i] - 48);
		i++;
	}
	return (acum * sn);
}

/* #include <stdio.h>
#include <stdlib.h>
int	main (void)
{
	printf("%i\n", ft_atoi("  +-123"));
	printf("%i", atoi("  +-123"));
} */