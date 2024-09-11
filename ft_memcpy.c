/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:37:50 by anvander          #+#    #+#             */
/*   Updated: 2024/05/28 10:31:20 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return ((void *)dst);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int src [] = {54, 85, 20, 63, 21};
	int dst[5] = {};
	int	i;

	i = 0;       
	ft_memcpy(dst, src, 0);
	while (i < 0)
	{
		printf("%d ", dst[i]);
		i++;
	}
	printf("\n");
    	return (0);
}
*/

/*
Copie un bloc de memoire src, de taille size dans un nouvel emplacement dst.
Ne gere pas le chevauchement des 2 blocs

size = nombre d'octets a dupliquer

Retourne l'adresse du bloc de destination
*/