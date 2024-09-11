/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:55:54 by anvander          #+#    #+#             */
/*   Updated: 2024/05/22 10:30:17 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1 * sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] -48;
		i++;
	}
	return (sign * nb);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d\n", ft_atoi("       -2147483648"));
	printf("%d\n", atoi("       -2147483648"));
	return (0);
}
*/

/*
Permet de transformer une chaine de caracteres, 
representant une valeur entiere, en une valeur numerique de type int.
atoi = ASCII to integer

str = chaine de caracteres a convertir en type int
*/