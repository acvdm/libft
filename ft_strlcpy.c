/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:19:50 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:40:45 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size)
{	
	unsigned long	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char src[] = "cfvrvhffvgbgvhgbgbgjn";
	char dst[10];
	
	printf("%lu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("%lu\n", strlcpy(dst, src, sizeof(dst)));
	printf("%s", dst);
	return (0);
}
*/

/*
Copie une chaine de caracteres src vers dst de taille size.
Au max, 'size -1' caracteres seront copies et la nouvelle chaine
dst sera terminee par un nul Byte (sauf si size == 0)

Retour : renvoie strlen(src). Si la valeur de retour est >= size, on tronque
*/