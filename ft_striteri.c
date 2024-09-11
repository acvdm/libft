/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:39:34 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:40:20 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
Applique la fonction 'f' a chaque caractere de la chaine de 
caracteres transmise comme argument, 
et en passant son index comme premier argument.
Chaque caractere est transmis par adresse a 'f' afin d'etre 
modifie si necessaire.
*/