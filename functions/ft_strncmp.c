/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:12:47 by pcorrale          #+#    #+#             */
/*   Updated: 2024/09/23 13:28:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t	i;
    unsigned int diff;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0')
    && (diff == 0) && (i < n))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
    	i++;
	}
	if ((diff = 0) && (i < n))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
int	main(void)
{
	char	s1[] = "peTpet";
	char	s2[] = "petA";
	int	result;

	result = 0;
	result = ft_strncmp(s1, s2, 4);
	printf ("%d", result);
}