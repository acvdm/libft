/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:00:42 by anvander          #+#    #+#             */
/*   Updated: 2024/05/28 16:12:42 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	const char	*ptr;
	size_t		i;

	i = 0;
	ptr = (const char *)s;
	while (i < size)
	{
		if (ptr[i] != (char)c)
			i++;
		else
			return ((void *)&ptr[i]);
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str[] = {0, 1, 2, 3, 4, 5};
	int 	c = 2 + 256;

	printf("%p\n", ft_memchr(str, c, 3));
	printf("%p", memchr(str, c, 3));

	return (0);	
}
*/

/*
Recherche la premiere occurence d'une valeur de type int, 
mais interpretee comme un char dans un bloc de memoire.
Comme on traite un bloc de memoire et non une chaine, il faut 
specifier la taille du bloc.

s = pointeur indiquant l'adresse du bloc memoire a utiliser pour la recherche
c = code numerique de l'octet a rechercher dans le bloc
size = taille du bloc de memoire danlequel chercher

Si la fonction a trouve le caractere recherche, elle renvoie un 
pointeur vers sa premiere occurence.
Sinon, elle renvoie NULL.
*/
