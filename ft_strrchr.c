/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:10:09 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/29 11:10:09 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_copy;

	c_copy = (char)c;
	i = ft_strlen(s);
	if (c_copy == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i >= 0)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
