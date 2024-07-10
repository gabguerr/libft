/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:06:47 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/22 16:41:42 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function takes a pointer to the input string ‘str’ and an integer ‘c’
//which represents a character. It declares a pointer ‘aux’ and initializes
//it to NULL. It enters a loop that iterates until it reaches the end of the
//string, identified by a null terminator character (‘\0’).
//In each iteration, it checks if the current character in the string is equal
//to the character ‘c’ being searched for.
//If a match is found, it updates the ‘aux’ pointer to point to that character
//in the string.
//This way, ‘aux’ keeps track of the last occurrence of the character.
//After the loop, it checks if the last character is equal to ‘c’.
//If the last character matches ‘c’, it returns a pointer to that character.
//If the last character is not equal to ‘c’, it means the character ‘c’ is not
//present in the string, so it returns the ‘aux’ pointer.
//The ‘aux’ pointer would be NULL if no occurrence of ‘c’ was found during the
//loop, indicating that ‘c’ is not present in the string.

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*aux;

	aux = str;
	while (*str)
		str++;
	while (str >= aux)
		if (*str-- == (char)c)
			return ((char *)str + 1);
	return (NULL);
}
