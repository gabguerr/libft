/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:37:05 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/22 14:13:37 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is an alphabetic character.
//It considers both uppercase letters (ASCII values 65 to 90)
//and lowercase letters (ASCII values 97 to 122) as alphabetic characters.
//If the input character falls within either of these ranges,
//the function returns the value a non-zero value; otherwise, it returns 0.

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1);
	return (0);
}
