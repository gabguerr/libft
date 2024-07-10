/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:32:38 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:36:40 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates memory for an array of elements with a specified count and n size.
//It checks for overflow, allocates memory using malloc,
//and zeroes out the memory before returning the pointer to the allocated memory

#include "libft.h"

static void	s_zero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

void	*ft_calloc(size_t count, size_t n)
{
	void	*memory;

	if (count && n && count > (UINT_MAX / n))
		return (NULL);
	memory = malloc(count * n);
	if (!memory)
		return (NULL);
	s_zero(memory, count * n);
	return (memory);
}
