/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:18:34 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:38:32 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Determines whether a given character is a printable
//character according to the ASCII table.
//It considers characters in the range from 32 to 126,
//inclusive, as printable characters.
//If the input character falls within this range,
//the function returns a non-zero value; otherwise, it returns 0.

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
