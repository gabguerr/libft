/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:22:45 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/15 12:29:12 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the first n characters of the strings s1 and s2.
//It iterates through the characters of s1 and s2 using a while loop,
//checking if they are equal and if n is greater than 1.
//It returns the difference between the last characters compared,
//which represents the lexicographic order of the strings.

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)(*s1) - (unsigned char)(*s2)));
}
