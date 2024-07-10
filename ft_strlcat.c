/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:21:46 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/17 15:40:58 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function takes a pointer to the destination string (dest),
//a pointer to the source string (src), and the size limit of the destination
//buffer (n). It starts by declaring variables ‘dest_len’, ‘total_len’, and ‘s’.
//It checks if either the ‘dest’ or ‘src’ pointer is NULL and
//the size limit ‘n’ is zero. If both conditions are true, it returns 0 to
//indicate an invalid operation.
//It assigns the ‘src’ pointer to ‘s’ to keep track of the original
//source pointer. It initializes ‘dest_len’ to 0 to count the length of the
//destination string. It enters a loop that iterates until it reaches the end of
//the destination string or the size limit ‘n’.
//In each iteration, it increments ‘dest_len’ by 1 and checks if the current
//character in the destination string is not a null terminator (‘\0’).
//It also checks if ‘dest_len’ is less than ‘n’ to ensure it stays within the
//limit. After counting the length of the destination string,
//it checks if ‘dest_len’ is less than ‘n’. If true, it means there is still
//space in the destination buffer to append characters from the source string.
//It calculates the ‘total_len’ by adding the length of the destination
//string (dest_len) and the length of the source string (str_len(s)).
//If ‘dest_len’ is already equal to or greater than ‘n’, it means the
//destination buffer is already full, so it directly returns ‘n’ plus the
//length of the source string (str_len(s)). It enters another loop that copies
//characters from the source string to the destination buffer.
//It checks if the current character in the source string
//is not a null terminator (‘\0’) and if there is still space in the destination
//buffer (‘dest_len + 1 < n’).
//Inside the loop, it assigns the value at ‘s’ to ‘dest’ and
//increments both ‘dest’ and ‘s’ pointers to move to the next character.
//It also increments ‘dest_len’ to keep track of the length of the
//concatenated string. This process continues until the end of the source string
//or until there is no space left in the destination buffer.
//Finally, it adds a null terminator character at the end of the destination
//buffer to ensure it is properly terminated,
//and it returns the ‘total_len’, which represents
//the total length of the concatenated string.

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		dest_len;
	size_t		total_len;
	const char	*s;

	if ((!dest || !src) && !n)
		return (0);
	s = src;
	dest_len = 0;
	while (*(dest + dest_len) && dest_len < n)
		dest_len++;
	if (dest_len < n)
		total_len = dest_len + str_len(s);
	else
		return (n + str_len(s));
	while (*s && (dest_len + 1) < n)
	{
		*(dest + dest_len) = *s++;
		dest_len++;
	}
	*(dest + dest_len) = '\0';
	return (total_len);
}
