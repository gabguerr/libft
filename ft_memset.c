/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:43:50 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:40:14 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Sets each byte of the memory block pointed
//to by str to the value c, up to a specified length n.
//It returns the pointer str after modifying the memory block

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*str_ptr;

	str_ptr = str;
	while (n--)
		*(unsigned char *)str++ = (unsigned char)c;
	return (str_ptr);
}
