/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:07:05 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 16:30:23 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_size(int nb)
{
	int		size;
	long	nb_bis;

	size = 0;
	nb_bis = (long)nb;
	if (nb_bis == 0)
		return (1);
	if (nb_bis <= 0)
	{
		size++;
		nb_bis = -1 * nb_bis;
	}
	while (nb_bis >= 1)
	{
		size++;
		nb_bis = nb_bis / 10;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
	long	i;
	long	nb_bis;
	char	*str;

	nb_bis = (long)nb;
	i = nb_size(nb_bis);
	str = malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb_bis == 0)
		str[0] = '0';
	if (nb_bis < 0)
	{
		str[0] = '-';
		nb_bis = nb_bis * (-1);
	}
	while (nb_bis >= 1)
	{
		str[i - 1] = (nb_bis % 10) + 48;
		nb_bis = nb_bis / 10;
		i--;
	}
	str[nb_size(nb)] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	char	*s;
	int	i;

	nb = 2147483647;
	i = 0;
	s = ft_itoa(nb);
	printf("%s\n", s);
	free (s);
	return (0);
}
*/

/*
Alloue avec malloc et retourne une chaine de caracteres 
representant l'entier 'nb' recu en argument.
Les nombres negatifs doivent etre geres

nb: entier a convertir

Retour: La chaine de caracteres representant l'entier
NULL si l'allocation echoue.
*/