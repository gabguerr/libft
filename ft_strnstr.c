/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:43:16 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/22 14:23:17 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function takes three parameters: haystack, needle, and n.
//It starts by checking if haystack is NULL and n is zero.
//If both conditions are true, it returns NULL to indicate an invalid operation.
//It then checks if needle is an empty string (‘\0’).
//If true, it means an empty string is always considered to be present at the
//beginning of the haystack, so it returns a pointer to the haystack.
//The function enters a loop that iterates until it reaches the end of the
//haystack string or until n becomes zero.
//In each iteration, it initializes a variable j to 0 to keep track of the
//current position in the needle string. It then compares the characters at the
//current positions of haystack and needle. If the characters are equal and the
//character in needle is not a null terminator,
//it means a potential match is found,
//so it increments j and checks if j is less than or equal to n to ensure it
//stays within the search limit. It also checks if the
//next character in needle is a null terminator.
//If true, it means the entire needle is found in haystack, so it returns a
//pointer to the current position in haystack.
//If no match is found, it increments haystack to move to the next character
//and continues searching. Once the loop ends, it means either the end of
//haystack is reached or n becomes zero.
//In either case, it means the substring is not found,
//so it returns NULL to indicate the absence of the substring.

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= n)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}
