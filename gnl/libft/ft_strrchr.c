/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 18:31:21 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:49:05 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char		*s;
	int			i;

	i = ft_strlen(string);
	s = (char *)string;
	while (*s != '\0')
		s++;
	if (*s == '\0' && symbol == '\0')
		return (s);
	s--;
	while (i + 1 != 0)
	{
		if (*s == symbol)
			return (s);
		s--;
		i--;
	}
	return (NULL);
}
