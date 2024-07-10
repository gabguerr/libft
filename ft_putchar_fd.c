/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:23:13 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:40:32 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The functions takes a character c, and a file descriptor fd as its parameters.
//It uses the write system call to write
//the character to specified file descriptor.
//The third parameter to write is set to 1
//to indicate that only one character should be written.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
