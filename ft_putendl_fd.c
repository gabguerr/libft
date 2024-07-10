/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:30:03 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/22 14:20:01 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The function writes the contents of a string to the specified file descriptor,
//followed by a newline character ('\n').
//It uses the write system call to write the
//string and newline character to the file descriptor.
//The function assumes that the write operation will be successful
//and does not include explicit error handling.

#include "libft.h"

static size_t	str_len(char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	nl = '\n';
	if (s)
	{
		write(fd, s, str_len(s));
		write(fd, &nl, 1);
	}
}
