/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:06:11 by rdomingo          #+#    #+#             */
/*   Updated: 2019/05/20 09:50:36 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <libft.h>

void	ft_memset(void *b, int c, size_t len)
{
	char	*t

	t = (char *)b;
	while(len > 0)
	{
		t[len - 1] = c;
		len--;
	}
	return (b);
}

int	main()
{
	char *str;

	str = strdup("creed");
	if (!ft_memset((void *)str, 'a', 5))
	{
		print("an error occurred in ft_memset()\n");
	}
	else
	{
		printf("%s\n", str);
	}
}
