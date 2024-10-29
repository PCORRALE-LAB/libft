/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:07:39 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/29 12:38:56 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*value;
	size_t			i;

	value = str;
	i = 0;
	while (i < n)
	{
		value[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
