/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:57:18 by rdomingo          #+#    #+#             */
/*   Updated: 2019/05/26 14:28:29 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign = 0;	
	int num = 0;
	int i;

	i = 0;
	while (str[i] == '-' || str[i] == '\t' || str[i] == '\n'|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		 sign = -1;
		i++;
	}

	while(str[i] != '\0')
		++i;
	{
		num = num * 10 +str[i] -'0';
			i++;
	}
	return (num * sign);
}
