/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:49:17 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/23 13:49:22 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Calculates the length of a null-terminated string.
//It takes a pointer to a constant character array (str) as input.
//It initializes a variable i as 0 and then iterates through the characters
//of the string until it encounters the null terminator (‘\0’).
//For each character, it increments i.
//Finally, it returns the value of i, representing the length of the string.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
