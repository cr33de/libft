/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:55:25 by rdomingo          #+#    #+#             */
/*   Updated: 2019/05/21 09:36:02 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if(n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n -1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}