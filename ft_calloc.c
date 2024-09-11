/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvander < anvander@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:32:50 by anvander          #+#    #+#             */
/*   Updated: 2024/05/27 15:57:08 by anvander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*cal;

	if (elementCount >= 2147483647 || elementSize >= 2147483647
		|| elementCount * elementSize >= SIZE_MAX)
		return (NULL);
	if ((int)elementCount * (int)elementSize < 0)
		return (NULL);
	cal = (void *)malloc(elementCount * elementSize);
	if (!cal)
		return (NULL);
	ft_bzero(cal, elementCount * elementSize);
	return (cal);
}

/*
#include <stdio.h>          
#include <stdlib.h>
#include <assert.h>

#define INT_NUMBER 10

int main() {
    
    int i;
    int * pointer = (int *) ft_calloc( INT_NUMBER, sizeof(int) );
    assert( pointer != NULL );
    for ( i=0; i<INT_NUMBER-1; i++ ) {
        pointer[i] = i;
    }

   for (i=0; i<INT_NUMBER; i++ ) {
        printf( "%d ", pointer[i] );
    }
    printf( "\n" );

    free( pointer );

    return 0;
}
*/

/*
Alloue avec malloc et initialise tous les octets du nouveau 
bloc memoire a 0.

Differences avec malloc : 
1. malloc ne modifie pas la zone memoire 
2. calloc requiere 2 parametres (nb d'elements consecutifs a allouer 
et taille d'un element)
alors que malloc attend la taille totale du bloc a allouer.

elementCount = nombre d'elements consecutifsa reserver dans 
le bloc de memoire
elementSize = permet de fixer la taille d'un element (en octet)
Zone de memoire a allouer = elementCount * elementSize

Renvoie un pointeur sur la zone allouee. Ce pointeur est de type 
generique (void *)
*/