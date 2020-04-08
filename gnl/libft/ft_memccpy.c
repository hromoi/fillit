/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:43:07 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:36:27 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char *s;
	unsigned char *d;
	unsigned char k;

	k = (unsigned char)c;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (n != 0)
	{
		if (*s == k)
		{
			*d = k;
			return (d + 1);
		}
		else
		{
			*d = *s;
			d++;
			s++;
		}
		n--;
	}
	return (NULL);
}
