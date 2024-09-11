/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:10:53 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 18:15:41 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t				i;
	unsigned char		*first;
	unsigned char		*second;

	i = 0;
	first = (unsigned char *)ptr1;
	second = (unsigned char *)ptr2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (first[i] != second[i])
		{
			return ((int)first[i] - (int)second[i]);
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	//unsigned long	nb;
	
	//nb = 1;
	const char	s1_test[] = "teste";
	const char	s2_test[] = "testex";
	printf("%d\n", ft_memcmp(s1_test, s2_test, 6));
	printf("%d\n", memcmp(s1_test, s2_test, 6));
	return (0);
}
*/

/*
Permet de comparer le contenu de 2 blocs de memoire (ptr1 et ptr2).
size specifie le nombre d'octets sur lequel comparer les 2 blocs. 
Tant que les 2 octets compares sont egaux, on continue la comparaison, 
si 2 octets sont differents la fonction renvoie la difference entre les 2.

ptr1 = adresse du premier bloc de memoire
ptr2 = adresse du 2e bloc
n = nombre d'octet max a comparer

valeur retour : positive / negative ou nulle resultant de la premiere 
difference d'octet entre les 2 blocs.
*/