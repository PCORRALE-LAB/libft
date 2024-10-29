/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:32:53 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/29 11:54:58 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(int n)
{
	int	count;

	count = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			n = n * (-1);
			count++;
		}
		while (n != 0)
		{
			n = n / 10;
			count++;
		}
	}
	else
	{
		count = 1;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;

	len = count_char(n);
	nbr = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	if (nbr == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nbr > 0)
	{
		str[len] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
