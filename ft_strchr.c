/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:42:33 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 15:46:00 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	int		len;
	char	c_bis;

	i = 0;
	c_bis = (char)c;
	len = ft_strlen(str);
	if (c_bis == '\0')
		return ((char *)&str[len]);
	while (str[i])
	{
		if (str[i] != c_bis)
			i++;
		else
			return ((char *)&str[i]);
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	const char	str[] = {"hfhgfhjdcdvjbdf5"};
	int 	c = 'h';

	printf("%p", ft_strchr(str, c));
	return (0);	
}
*/

/*
Recherche la 1ere occurrence du caractere c dans la chaine de caracteres

Retour : si le caractere recherche est present dans la chaine, renvoie 
un pointeur sur la premiere occurence du caractere
si caractere pas present, renvoie NULL
*/