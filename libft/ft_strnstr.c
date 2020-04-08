/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 11:34:14 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:46:31 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_help(char *s1, char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i != n)
	{
		k = i;
		while (s1[k] == s2[j] && s1[k] != '\0')
		{
			j++;
			k++;
			if (k == n && s2[j] != '\0')
				return (NULL);
		}
		if (s2[j] == '\0')
			return (s1 + i);
		else if (s1[k] != s2[j] && s2[j] != '\0')
			j = 0;
		i++;
	}
	if (n == i && s2[j] != '\0')
		return (NULL);
	return (s1 + i);
}

char		*ft_strnstr(const char *string1, const char *string2, size_t n)
{
	size_t	k;
	size_t	l;
	char	*s1;
	char	*s2;

	k = ft_strlen(string1);
	l = ft_strlen(string2);
	s1 = (char *)string1;
	s2 = (char *)string2;
	if (*s1 == '\0' && *s2 == '\0')
		return ("\0");
	if (*s2 != '\0' && *s1 == '\0')
		return (NULL);
	if (*s2 == '\0' && *s1 != '\0')
		return (s1);
	if (l > k)
		return (NULL);
	return (ft_help(s1, s2, n));
}
