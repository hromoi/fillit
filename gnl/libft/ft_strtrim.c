/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:27:01 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 16:01:20 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_help(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = (int)ft_strlen(s);
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (i == j)
		return (-1);
	return (i);
}

static	size_t	ft_help_help(char *s)
{
	size_t	j;
	size_t	k;

	j = 0;
	k = ft_strlen(s);
	while (*s != '\0')
		s++;
	s--;
	while (*s == '\n' || *s == '\t' || *s == ' ')
	{
		s--;
		j++;
	}
	return (k - j);
}

char			*ft_strtrim(char const *s)
{
	char	*s1;
	int		i;
	int		j;
	int		l;

	if (s == NULL)
		return (NULL);
	l = 0;
	i = ft_help((char *)s);
	if (i == -1)
		return (ft_strnew(0));
	j = ft_help_help((char *)s);
	if ((s1 = ft_strnew(j - i)) == NULL)
		return (NULL);
	while (i < j)
	{
		s1[l] = s[i];
		l++;
		i++;
	}
	s1[l] = '\0';
	return (s1);
}
