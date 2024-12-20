/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabguerr <gabguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:50:09 by gabguerr          #+#    #+#             */
/*   Updated: 2024/04/15 12:43:28 by gabguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The ft_itoa function converts the given integer into string representation.
//It first determines the sign of the number by checking if it is negative.
//It calculates the length of the resulting string by counting the number
//of digits in the absolute value of the integer.
//Memory is allocated to store the resulting string,
//including space for the sign and the null-terminator.
//The conversion is performed by iteratively extracting the digits from the
//integer using modulo and division operations.
//The digits are then converted to characters by adding the ASCII value of ‘0’.
//The digits are added to the string in reverse order to ensure the correct
//representation of the number.
//Finally, the sign is added if necessary, the null-terminator is appended,
//and the resulting string is returned.

#include "libft.h"

static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static long long	abs_val(long long n)
{
	long long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n +1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = nbr_len(n);
	str = str_new(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nbr = abs_val(n);
	while (len--)
	{
		*(str + len) = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
