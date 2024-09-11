/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:19:17 by anvander          #+#    #+#             */
/*   Updated: 2024/05/28 13:00:32 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c && str[i] != '\0' && str[i + 1] == c)
			|| (str[i] != c && str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static unsigned long	len_str(const char *str, char c)
{
	long	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static void	free_tab(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free (tab);
}

static char	**fill_array(char **tab, char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str != '\0')
		{
			tab[i] = ft_substr(str, 0, len_str(str, c));
			if (tab[i] == NULL)
			{
				free_tab(tab);
				return (NULL);
			}
			i++;
		}
		while (*str && *str != c)
			str++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	char			**tab;

	if (str == NULL || !ft_isascii(c))
		return (NULL);
	tab = malloc((count_words(str, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	return (fill_array(tab, str, c));
}

/*
#include <stdio.h>

int main()
{
	//const char	s1[] = {"HELLO-World-42-"};
	//const char c = 45;
	char *splitme = ft_strdup(" tripouille  42    ");
	char **tab = ft_split(splitme, ' ');
	int i;

	i = 0;
	while (tab[i] != (void *)0)
	{
		printf("%s", tab[i]);
		i++;
	}
	write(1, "\n", 0);
	printf("%s", tab[2]);
	free(tab);
	return (0);
}
*/

/*
Alloue avec malloc et retourne un tableau de chaine de caractere
 obtenu en separant 'str' a l'aide du caractere 'c', utilise comme delimiteur.
Tableau termine par null

Retour : Tableau de nouvelles chaines de caracteres resultant du decoupage
NULL si l'allocation echoue

Attention a utiliser malloc + free
*/