/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:37:22 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:40:13 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc((ft_strlen(src) +1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("Ma chaine dupliquee est %s\n", ft_strdup(av[1]));
		printf("Ma chaine dupliquee est %s\n", strdup(av[1]));
	}
	return (0);
}
*/

/*
Permet de dupliquer une chaine de caracteres en allouant via malloc.
Une chaine se termine forcement par un code ASCII nul : '\0'

La fonction copie chaque caractere jusqu'au caractere nul 
qu'elle copie egalement.

*src = adresse de la chaine de caracteres a dupliquer

Retour : si suffisamment de memoire pour produire la nouvelle chaine, 
la fonction renvoie l'adressede la chaine dupliquee. 
Sinon renvoie NULL. 
*/