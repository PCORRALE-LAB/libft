/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:07:39 by pcorrale          #+#    #+#             */
/*   Updated: 2024/09/23 13:28:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*value;
	size_t				i;

	value = str;
	i = 0;
	while (i < n)
	{
		value[i] = (unsigned char) c;
		i++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "almost every programmer should know memset!";

	printf("%s\n", str);
	ft_memset(str, '-', 12);
	printf("%s\n", str);
	return (0);
}