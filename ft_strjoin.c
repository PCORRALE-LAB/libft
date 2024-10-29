/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/10/29 11:08:48 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/29 11:08:48 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
				+ 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
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
