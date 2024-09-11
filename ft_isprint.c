/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:57:50 by anvander          #+#    #+#             */
/*   Updated: 2024/05/23 16:24:37 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str_test[] = "5487";
	
	printf("%d", ft_isprint(str_test));
	return (0);
}
*/
