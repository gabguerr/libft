/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:59:49 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:39:27 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the first n characters of the strings s1 and s2.
//It iterates through the characters of s1 and s2 using a while loop,
//checking if they are equal and if n is greater than 1.
//It returns the difference between the last characters compared,
//which represents the lexicographic order of the strings.

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *) s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1 = (unsigned char *)s1 + 1;
		s2 = (unsigned char *)s2 + 1;
	}
	return (0);
}
