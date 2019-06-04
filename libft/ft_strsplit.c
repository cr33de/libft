/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:17:02 by rdomingo          #+#    #+#             */
/*   Updated: 2019/06/04 10:35:30 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_strswd(char const *s, char c)
{
	unsigned int	i;
	int				swd;

	swd = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			swd++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (swd);
}

static char		*ft_strndup(const char *s, size_t n)
{
	char		*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, s, n);
	str[n] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char **slp;

	i = 0;
	k = 0;
	slp = (char **)malloc(sizeof(char *) * (ft_strswd(s, c)) + 1);
	if (slp == NULL)
		return (NULL);

	while (s[i] == c)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			slp[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	slp[k] = NULL;
	return (slp);
}
