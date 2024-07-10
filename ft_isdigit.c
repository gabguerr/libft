/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:15:38 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:38:02 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Verifies whether a character is a digit.
//It considers characters in the range from 48 to 57,
//which corresponds to ASCII values for digits 0 to 9.
//If the input character falls within this range,
//the function returns a non-zero value; otherwise, it returns 0.

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
