/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:38:58 by rdomingo          #+#    #+#             */
/*   Updated: 2019/05/21 12:47:18 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *t
	char *s

	i = 0;
	t = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	return (dst);
}
