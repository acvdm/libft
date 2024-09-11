/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:13:44 by anvander          #+#    #+#             */
/*   Updated: 2024/05/28 11:29:50 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (s == NULL || start > UINT_MAX)
		return (NULL);
	if (start >= ft_strlen(s) || ft_strlen(s + start) > SIZE_MAX)
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	tab = (char *)malloc((len + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	while (i < len && s[(size_t)(start + i)] != '\0')
	{
		tab[i] = s[(size_t)(start + i)];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	s1[] = "";
	unsigned long	init = 0;
	char *s = ft_substr(s1, init, 1);
	printf("Ma tab est %s\n", s);
	//printf("la taille de ma tab est %lu\n", ft_strlen(s));
	free(s);
	return (0);
}
*/

/*
Alloue avec malloc et retourne une chaine de caracteres issue de la chaine 's'
Cette nouvelle chaine commence a l'index 'start' et a pour taillemax 'len'
*/