/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 18:25:52 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:52:50 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*s1;
	size_t			i;
	unsigned int	start1;

	i = 0;
	start1 = start;
	if (s == NULL || *s == '\0')
		return (NULL);
	s1 = ft_strnew(len);
	if (s1 == NULL)
		return (NULL);
	while (start != (len + start1))
	{
		s1[i] = s[start];
		start++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
