/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:29:11 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:38:45 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	unsigned long	i;
	unsigned char	*ptr_bis;

	i = 0;
	ptr_bis = (unsigned char *)ptr;
	while (i < size)
	{
		ptr_bis[i] = (unsigned char)c;
		i++;
	}
	return (ptr_bis);
}

/*
Ligne 17 : unsigned char pour acceder a chaque octet
Ligne 20 : conversion du pointeur en parametre
*/

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned long	i;
	char	buffer[50];
	
	i = 0;
	memset(buffer, 0 , 50);
	while (i < 50)
	{
		printf("%d", buffer[i]);
		i++;
	}
	return (0);
}
*/

/*
Remplie une zone memoire ptr et de taille size avec la valeur c.

Retour : adresse de la memoire reinitialisee.
*/