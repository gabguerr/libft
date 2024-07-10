/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:19:15 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/15 12:28:19 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts a lowercase alphabetic character to its uppercase equivalent by
//subtracting 32 from its ASCII value. It returns the resulting uppercase
//character or the original character if
//it is not a lowercase alphabetic character.

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
