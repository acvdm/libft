/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:12:15 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 10:50:48 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	little_len;

	i = 0;
	j = 0;
	little_len = (int)ft_strlen(little);
	if (little [0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (i + little_len > len)
			return (NULL);
		j = 0;
		while (big[i + j] == little[j] && j < little_len && big[i + j] != '\0')
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/bsd.h>
int	main(void)
{
	const char big[30] = "aaabcabcd";
	//const char little[] = "aabc";
	///char * empty = (char *)"";
	
	printf("%s\n", ft_strnstr(big, "a", -1));
	printf("%s\n", strnstr(big, "a", -1));
	return (0);
}
*/

/*
Localise une sous-chaine de caracteres dans une chaine.
Plus precisement elle localise la premiere occurrence du caractere 
nul de la sous-chaine dans la grande chaine.
On recherche au maximum n caracteres.

Si la sous-chaine est vide, on retourne la grande chaine
si on ne trouve pas la petite chaine, on renvoie NULL
Sinon on renvoie un pointeur vers le premier caractere de la 
premiere occurrence de la sous-chaine.
*/