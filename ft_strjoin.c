/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/01 13:08:59 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 13:08:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *substr;
	size_t i;
	size_t j;

	substr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (s1[i]!= '\0')
	{
		substr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		substr[i] = s2[j];
		i++;
		j++;
	}
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char a[] = "Hello World! ";
// 	char b[] = "Welcome to 42!";
// 	char *c = "";

// 	printf("First text: %s\nSecond text: %s\n", a, b);
// 	c = ft_strjoin(a, b);
// 	printf("All text: %s\n", c);
// }