/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:33:39 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 14:02:57 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	unsigned char *s11;
	unsigned char *s12;

	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	if (num == 0)
		return (0);
	while (*s11 != '\0' && num != 0)
	{
		if (*s11 == *s12 && num - 1 != 0)
		{
			s11++;
			s12++;
			num--;
		}
		else
			return (*s11 - *s12);
	}
	return (*s11 - *s12);
}
