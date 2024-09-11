/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:19:09 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:40:52 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *str)
{
	long	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	my_str[] = "HELLO";

	printf("%lu\n", ft_strlen(my_str));
	printf("%lu", strlen(my_str));
	return (0);
}
*/

/*
Calcule la longueur d'une string sans inclure le caractere nul.

Retour : nombre de caracteres dans src.
*/