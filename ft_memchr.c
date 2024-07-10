/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:39:30 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:39:09 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Searches for the first occurrence of the character c in the memory
//block pointed to by str, up to a specified length n.
//It iterates through the memory block using a while loop
//and checks if each byte matches c.
//If a match is found, it returns a pointer to that byte.
//If no match is found within the specified length, it returns NULL.

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)str++ == (unsigned char)c)
			return ((void *)(unsigned char *)str - 1);
	}
	return (NULL);
}
