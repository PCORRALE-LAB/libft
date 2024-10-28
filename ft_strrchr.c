/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/09/23 15:16:24 by marvin            #+#    #+#             */
/*   Updated: 2024/09/23 15:16:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strrchr(const char *s, int c)
{
	int i;
	char c_copy;

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

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "Hello World! Welcome to 42. This is the new world baby";

// 	char c = 'w';

// 	printf("%s\n", a);
// 	printf("Encontrado: %s\n", ft_strrchr(a, c));
// }