/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/20 15:11:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/20 15:11:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t count;

	if (!s)
		return (0);
	count = 0;
	while (s[count])
	{
		while (s[count] == c)
		{
			count++;
		}
		if (s[count])
			count++;
		while (s[count] != c && s[count])
		{
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char **lst;
	size_t word_len;
	int i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			i++;
		}
		if (s[i])
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s = s + word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}

// int	main(void)
// {
// 	char a[] = "1,2,3,4,5,6,7,8,9,0";
// 	char **result;
// 	char delimiter = ',';
// 	int i;

// 	i = 0;
// 	result = ft_split(a, delimiter);
// 	if (!result)
// 	{
// 		printf("Fail.\n");
// 		return (1);
// 	}
// 	printf("Original: %s \n", a);
// 	printf("Result: \n");
// 	while (result[i] != NULL)
// 	{
// 		printf("Word nº %d: %s\n", i, result[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }