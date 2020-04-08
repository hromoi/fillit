/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:22:35 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 17:58:24 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	k;
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	k = ft_strlen(s);
	s1 = (char *)malloc((k + 1) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	while (i < k)
	{
		s1[i] = f(s[i]);
		i++;
		if (i == k)
			s1[i] = '\0';
	}
	return (s1);
}
