/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorrale <pcorrale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:39:51 by pcorrale          #+#    #+#             */
/*   Updated: 2024/10/28 13:45:59 by pcorrale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char ex[] = "He%+l-lo";

// 	printf("Result is %i\n", ft_isalpha(ex[0]));
// 	printf("Result is %i\n", ft_isalpha(ex[3]));
// 	printf("Result is %i\n", ft_isalpha(ex[6]));

// 	return (0);
// }