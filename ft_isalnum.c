/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:59:25 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:37:14 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is alphanumeric.
//It considers uppercase letters (ASCII values 65 to 90), 
//lowercase letters (ASCII values 97 to 122),
//and digits (ASCII values 48 to 57) as alphanumeric characters.
//If the input character falls within any of these ranges,
//the function returns a non-zero value; otherwise, it returns 0.

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123)
		|| (c > 47 && c < 58))
		return (1);
	return (0);
}
