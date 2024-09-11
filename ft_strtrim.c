/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:25:08 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:41:48 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_str(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned long	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && char_in_str(set, s1[i]))
	{
		i++;
	}	
	while (len -1 > i && char_in_str(set, s1[len -1]))
	{
		len--;
	}
	return (ft_substr(s1, i, (len - i)));
}

/*
#include <stdio.h>

int	main(void)
{
	const char	s1[] = "5HelloWor52ldH";
	const char	c[] = "Hello5";
	char *s = ft_strtrim(s1, c);
	printf("Ma tab est %s", s);
	free(s);
	return (0);
}
*/

/*
Alloue avec malloc et retourne une copie de 
la chaine 's1', 
sans les caracteres specifies dans 'set' au debut et a 
la fin de la chaine de caracteres
*/