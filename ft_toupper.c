/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:02:52 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 18:19:16 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str_test[] = {"abcD1"};

	printf("Ma chaine de base etait: %s\n", str_test);
	printf("Ma nouvelle chaine est: %s\n", ft_toupper(str_test));

	return (0);
}
*/