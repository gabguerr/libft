/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:21:39 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/12 10:38:41 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if a character is a whitespace character.
//If the character is a whitespace character, it returns any non-zero value.
//If the character is not a whitespace character, it returns 0.

int	ft_isspace(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (1);
	return (0);
}
