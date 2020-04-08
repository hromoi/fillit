/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:28:05 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:44:36 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*s1;
	size_t			k;
	unsigned int	l;

	l = 0;
	if (s == NULL)
		return (NULL);
	k = ft_strlen(s);
	s1 = (char *)malloc((k + 1) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	while (k != 0)
	{
		s1[l] = f(l, s[l]);
		k--;
		l++;
	}
	s1[l] = '\0';
	return (s1);
}
