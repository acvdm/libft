/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:14:19 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 17:34:01 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < (n -1))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	unsigned int	nb;
	
	nb = 5;
	char	s1_test[] = "Hello";
	char	s2_test[] = "";
	printf("%d\n", ft_strncmp(s1_test, s2_test, nb));
	printf("%d\n", strncmp(s1_test, s2_test, nb));
	return (0);
}
*/

/*
Compare 2 chaines de caracteres jusqu'au neme caractere 
(ou Byte car un char = 1Byte) au maximum
Retour : positive / negative ou nulle resultant de la premiere 
difference d'octet entre les 2 chaine
*/