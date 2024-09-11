/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:36:39 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 15:47:18 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*tab;
	unsigned long	len_s1;
	unsigned long	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	tab = malloc((len_s1 + len_s2 +1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	ft_memcpy(tab, s1, len_s1);
	ft_memcpy(tab + len_s1, s2, len_s2);
	tab[len_s1 + len_s2] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	s1[] = "";
	const char	s2[] = "cdhbcd";
	char *s = ft_strjoin(s1, s2);
	printf("Ma tab est %s\n", s);
	printf("%lu", ft_strlen(s));
	free(s);
	return (0);
}
*/

/*
Alloue avec malloc et retourne une nouvelle chaine, 
resultat de la concatenation de s1 et s2

s1 = chaine prefixe
s2 = chaine suffixe

Retour : renvoie la nouvelle chaine de caracteres 
et NULL si l'allocation echoue
*/