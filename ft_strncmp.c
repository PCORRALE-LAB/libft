/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:12:47 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/28 14:29:49 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_copy;
	const unsigned char	*s2_copy;

	if (n == 0)
		return (0);
	s1_copy = (const unsigned char *)s1;
	s2_copy = (const unsigned char *)s2;
	i = 0;
	while (i < n && s1_copy[i] == s2_copy[i] && s1_copy[i] != '\0' && s2_copy[i] != '\0')
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1_copy[i] - s2_copy[i]);
}
