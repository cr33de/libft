/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:08:02 by rdomingo          #+#    #+#             */
/*   Updated: 2019/05/21 09:27:33 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr(char const *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}