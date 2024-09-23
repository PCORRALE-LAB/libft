/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:28:35 by pcorrale          #+#    #+#             */
/*   Updated: 2024/09/23 18:13:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char ex[] = "He%+l-lo";

	printf("Result is %i\n", ft_isalnum(ex[0]));
	printf("Result is %i\n", ft_isalnum(ex[3]));
	printf("Result is %i\n", ft_isalnum(ex[5]));

	return (0);
}