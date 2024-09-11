/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:53:11 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 15:48:35 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			c_bis;
	unsigned long	len;

	c_bis = (char)c;
	len = ft_strlen(s);
	if (c_bis == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		if (s[len] != c_bis)
			len--;
		else
			return ((char *)&s[len]);
	}
	if (s[0] == c_bis)
		return ((char *)&s[0]);
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char	s[] = "tripouille";
	//char	s2[] = "ltripouiel";
	//char	s3[] = "";

	printf("%p", ft_strrchr(s, 't' + 256));
	return (0);	
}
*/

/*
Recherche la derniere occurrence du caractere c dans la chaine 
de caracteres (r = right donc par la droite)

Retour : si le caractere recherche est present dans la chaine, 
renvoie un pointeur sur la derniere occurence du caractere
si caractere pas present, renvoie NULL
*/
