/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:41:56 by rdomingo          #+#    #+#             */
/*   Updated: 2019/07/09 09:44:55 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(int i)
{
	if (i =='\t' || i =='\n' || i == '\v' || i == '\f' || i == ' ')
	   return (1);
	return (0);	
}