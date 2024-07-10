/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:17:25 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/15 12:28:43 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts an uppercase alphabetic character to its lowercase
//equivalent by adding 32 to its ASCII value. It returns the resulting
//lowercase character or the original character if
//it is not an uppercase alphabetic character.

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
