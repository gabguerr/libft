/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:14:54 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/18 14:28:56 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function takes a pointer to the input string ‘str’ and an integer ‘c’
//which represents a character. It enters a loop that iterates until it reaches
//the end of the string, identified by a null terminator character (‘\0’).
//In each iteration, it checks if the current character in the string is equal
//to the character ‘c’ being searched for.
//If a match is found, it returns a pointer to that character in the string.
//If no match is found until the end of the string, it checks if the last
//character is equal to ‘c’. This check is necessary because the loop exits
//before checking the last character. If the last character matches ‘c’,
//it returns a pointer to that character.
//If no match is found, it means the character ‘c’ is not present in the string
//so it returns NULL.

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}
