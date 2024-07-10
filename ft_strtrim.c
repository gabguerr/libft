/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:07:10 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/30 15:00:51 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function trims leading and trailing characters from a string based
// on a given set of characters.

//The ft_strtrim function takes two parameters: s1 and set. It first checks if
//either s1 or set is NULL. If true, it means one of the strings is missing,
//and the function returns NULL to indicate an error. Next, it initializes
//the start variable to 0 and enters a loop to find the index of the first
//non-matching character in s1 by iterating over it. Inside the loop, it uses
//the char_check function to determine if the current character in s1 matches
//any character in the set. If there is a match, it increments the start
//variable to move to the next character. Once the loop finishes, the start
//variable represents the index of the first non-matching character or the
//end of the string if all characters match the set. Similarly, it initializes
//the end variable to the length of s1 and enters a loop to find the index
//of the last non-matching character in s1 by iterating over it in reverse.
//Inside the loop, it uses the char_check function to determine if the current
//character in s1 matches any character in the set. If there is a match, it
//decrements the end variable to move to the previous character. Once the loop
//finishes, the end variable represents the index of the last non-matching
//character plus one. Next, the ft_strtrim function calls the str_new function
//to allocate memory for the trimmed string. The str_new function is defined
//as static in the code and is responsible for allocating memory. If memory
//allocation fails, str_new returns NULL, and ft_strtrim also returns NULL to
//indicate an error. If memory allocation is successful, ft_strtrim copies the
//non-matching characters from s1 to the trim string starting from the start
//index and ending at the end index. It adds a null terminator at the end of
//the trimmed string to ensure proper termination.
//Finally, it returns the trim pointer, which points to the beginning of the
//trimmed string. The function is useful when you need to remove leading and
//trailing characters from a string based on a given set.

#include "libft.h"

static size_t	char_check(char const *str, char const c)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && char_check(set, *(s1 + start)))
		start++;
	end = str_len(s1);
	while (end > start && char_check(set, *(s1 + (end - 1))))
		end--;
	trim = str_new(end - start);
	if (!trim)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(trim + i) = *(s1 + (start + i));
		i++;
	}
	*(trim + i) = '\0';
	return (trim);
}
