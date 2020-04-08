/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:02:10 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:50:31 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_wcount(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
			i++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (i + 1);
}

static size_t	ft_length(const char *s, char c, size_t i)
{
	size_t	j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

static char		**ft_free(char **s, size_t j)
{
	int i;

	i = 0;
	while (i != (int)j)
	{
		free(s[i]);
		i++;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**split;
	unsigned int	i;
	size_t			j;
	int				k;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	k = ft_wcount(s, c);
	if ((split = (char **)malloc(ft_wcount(s, c) * sizeof(char *))) == NULL)
		return (NULL);
	while (s[i] != '\0' && k - 1 != (int)j)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!(split[j] = ft_strsub(s, i, ft_length(s, c, i))))
			return (ft_free(split, j));
		while (s[i] != c && s[i] != '\0')
			i++;
		j++;
	}
	split[j] = NULL;
	return (split);
}
