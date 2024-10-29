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
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c)
		count++;
	i = 1;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static void	*ft_free(char **split, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static char	**ft_process_words(char const *s, char c, char **lst)
{
	size_t	word_len;
	int		i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i] = ft_substr(s, 0, word_len);
			if (!lst[i])
				return (ft_free(lst, i));
			i++;
			s = s + word_len;
		}
	}
	*(lst + i) = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (0);
	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	return (ft_process_words(s, c, lst));
}
