/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:59:59 by gabguerr          #+#    #+#             */
/*   Updated: 2024/05/07 18:26:30 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The ft_split function takes a pointer to the input string ‘s’ and a character
//‘c’ which acts as a delimiter. It calculates the number of substrings present
//in the string by calling the count_words function. It then allocates memory
//for an array of string pointers to store the substrings,
//including an extra NULL pointer at the end.
//The split function is responsible for populating the array with substrings.
//It initializes two indices ‘i’ and ‘j’ to keep track of positions in the
//string. It iterates through the string while ‘i’ is less than the number
//of words. It skips the delimiter characters and extracts a substring using the
//ft_substr function. If memory allocation for the substring fails, the
// previously allocated memory is freed using the free_array function, and the
// function returns NULL. Once all substrings are extracted and stored in the
// array, a NULL pointer is placed at the end of the array to
// indicate the end of substrings.

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, get_word_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}
