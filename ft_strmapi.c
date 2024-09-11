/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:36:50 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 15:40:58 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned long	size;
	char			*fin_str;

	i = 0;
	size = ft_strlen(s);
	fin_str = malloc((size + 1) * sizeof(char));
	if (fin_str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		fin_str[i] = f(i, s[i]);
		i++;
	}
	fin_str[i] = '\0';
	return (fin_str);
}

/*
int	main(void)
{
	int	i;
	char	*s;
	char	*str;

	i = 0;
	s[] = "gvfhf";
	str = ft_strmapi(s, f(i, s[i]));
	return (0);
}
*/

/*
Applique la fonction 'f' a chaque caractere de 
la chaine de caracteres passee en argument
pour creer une nouvelle chaine de caracteres avec 
malloc resultant des applications successives de 'f'
*/
