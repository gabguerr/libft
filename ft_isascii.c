/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:11:39 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:37:48 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is within the ASCII range.
//It verifies if the character has an ASCII value between 0 and 127, inclusive.
//If the input character falls within this range,
//the function returns a non-zero value; otherwise, it returns 0.

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
