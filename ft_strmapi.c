/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:51:49 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/18 14:27:41 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function creates a new string by applying the specified function to each
//character of the input string. It first determines the length of the input
//string using the str_len helper function. Memory is allocated to store the
//resulting string, including space for the null. If memory allocation fails,
//NULL is returned. Then, the function iterates over each character of the
//input string, passing the current index and character to the provided
//function. The function returns a new character based on the index and input
//character, which is stored in the resulting string.
//Finally, the null-terminator is appended, and the resulting string is returned

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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	str = str_new(str_len(s));
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}
