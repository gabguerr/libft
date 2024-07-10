/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:45:47 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/18 14:29:07 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function iterates over each character of the input string,
//passing the current index and a pointer to the character to the
//provided function. If the input string and function pointers are not NULL,
//the iteration begins. Inside the loop, the function is applied to each
//character, allowing the function to perform some operation or modification on
//the character. The index is incremented with each iteration, and the pointer
//to the character is incremented to move to the next character in the string.
//The iteration continues until the null-terminator of the string is reached.
//If either the input string or the function pointer is NULL
//the function does nothing.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
