/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:09:31 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:39:48 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies n bytes from the memory area pointed
//to by src to the memory area pointed to by dest.
//It returns a pointer to the destination memory area.

#include "libft.h"

void	*ft_memcpy(void *dest, void const *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}
