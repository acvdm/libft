/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:08:00 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 18:16:54 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str_test[] = "ABCdd5";

	printf("Mon ancienne chaine etait: %s\n", str_test);
	printf("Ma nouvelle chaine est: %s\n", ft_tolower(str_test));

	return (0);
}
*/