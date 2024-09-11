/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:03:33 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 17:33:03 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dst, const char *src, size_t size)
{	
	unsigned long	i;
	unsigned long	dst_len;
	unsigned long	src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	while (src[i] != '\0' && (dst_len + i) < (size -1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return ((dst_len + src_len));
}

/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char src[] = "cfvrvhffvgbgvhgbgbgjn";
	char dst[10];
	
	printf("resultat de ma fonction %lu\n", ft_strlcat(dst, src, 12));
	printf("resultat vraie fonction %lu\n", strlcat(dst, src, 12));
	printf("chaine dst %s", dst);
	return (0);
}
*/

/*
Concatene 2 chaines. 
Copie au maximum 'size -1' caracteres et termine la nouvelle chaine 
par un nul Byte (sauf si size <= strlen(dst))

Retour : retourne strlen(src) + Minimum entre size / taille initiale de dst
si la valeur de retour est superieure a size => troncature
*/