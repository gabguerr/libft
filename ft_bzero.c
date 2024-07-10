/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:28:38 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/18 15:13:07 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Sets the first n bytes of the memory pointed to by s to zero.
//It iterates through the memory block by decrementing n, and for each iteration
//it assigns the value 0 to the current byte pointed to by s

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
