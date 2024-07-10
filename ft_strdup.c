/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:33:24 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/22 14:11:24 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function takes a single parameter: src, which is a pointer to the
//source string. It starts by calling the str_new function to allocate memory
//for the duplicated string. The str_new function is responsible for allocating
//memory and is defined as a static function.
//If the memory allocation fails, str_new returns NULL,
//and ft_strdup returns NULL as well to indicate an error.
//If memory allocation is successful, ft_strdup assigns the returned pointer to
//the dest variable. It also assigns the dest pointer to the start variable to
//keep track of the beginning of the duplicated string.
//ft_strdup then enters a loop that iterates until it reaches the end of the
//source string by checking if the current character is not a null terminator.
//In each iteration, it assigns the value of the current character in src to
//the memory location pointed to by dest and increments both pointers to move
//to the next character. After copying all the characters,
//it adds a null terminator at the end of the duplicated string to ensure proper
//termination. Finally, ft_strdup returns the start pointer, which points to the
//beginning of the duplicated string. The function is useful when you need to
//create an independent copy of a string, allowing modifications to the
//duplicated string without affecting the original one.

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strdup(char const *src)
{
	char	*dest;
	char	*start;

	dest = str_new(str_len(src));
	if (!dest)
		return (NULL);
	start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}
