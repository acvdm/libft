/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:19:42 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 16:40:52 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t nb_b)
{
	unsigned char		*dst_bis;
	const unsigned char	*src_bis;

	src_bis = (unsigned char *)src;
	dst_bis = (unsigned char *)dst;
	if (dst_bis == src_bis || nb_b == 0)
		return (dst_bis);
	if (dst_bis > src_bis)
	{
		while (nb_b-- > 0)
			dst_bis[nb_b] = src_bis[nb_b];
	}
	else
		ft_memcpy(dst_bis, src_bis, nb_b);
	return (dst_bis);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int src [] = {65, 66, 67, 68, 69, 0, 45};
	int dst[] = {0, 0, 0, 0, 0, 0, 0};
	int	i;
	char	*s;

	i = 0;
	s = memmove(dst + 1, src, 2);       
	while (i < 7)
	{
		printf("%d ", s[i]);
		i++;
	}
	printf("\n");
    	return (0);
}
*/

/*
Copie un bloc de memoire src, de taille size dans un nouvel emplacement dst.
En cas de chevauchement, la copie se passe comme si les octets 
de la zone source etaient d'abord copies dans une zone temporaire. 
si destination est avant source, les octets sont copies de debut a fin
si destination est apres source, les octets sont copies de fin a debut

nb_b = nombre d'octets a dupliquer

Retourne l'adresse du bloc de destination
*/