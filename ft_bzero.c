/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:57:32 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 14:36:37 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <string.h> 
int	main(void)
{
	char buffer[10];
	unsigned int	i;
	
	i = 0;
	while (i < 10)
	{
		buffer[i] = 'A';
		i++;
	}
	i = 0;
	while (buffer[i] != '\0')
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n");
	
	ft_bzero(buffer, 10);

	printf("Apres bzero ma fonction: ");
	
	i = 0;
	while (buffer[i] != '\0')
	{
		printf("%d", buffer[i]);
		i++;
	}

	bzero(buffer, 10);
	printf("Apres bzero la fonction: ");
	
	i = 0;
	while (buffer[i] != '\0')
	{
		printf("%d", buffer[i]);
		i++;
	}
	
	return (0);
}
*/

/*
Ecrase les donnees dans les n octets de la memoire en 
commencant a la position pointee
par s et en les remplacant par des '\0'.

Pas de valeur retour
*/