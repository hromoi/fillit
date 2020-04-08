/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 14:56:48 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/07 15:04:59 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	d = (unsigned char *)destptr;
	s = (unsigned char *)srcptr;
	while (num > 0)
	{
		if (s[i] != '\0')
		{
			d[j] = s[i];
			i++;
		}
		else
			d[j] = '\0';
		j++;
		num--;
	}
	return (destptr);
}
