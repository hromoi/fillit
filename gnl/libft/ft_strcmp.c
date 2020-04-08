/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:18:53 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 13:37:24 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *s11;
	unsigned char *s12;

	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	while (*s11 != '\0')
	{
		if (*s11 == *s12)
		{
			s11++;
			s12++;
		}
		else
			return (*s11 - *s12);
	}
	return (*s11 - *s12);
}
