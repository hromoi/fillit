/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 15:20:40 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 19:33:35 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_help(unsigned char *s, unsigned char *d, int i, size_t n)
{
	if (d <= s)
	{
		while (n != 0)
		{
			d[i] = s[i];
			i++;
			n--;
		}
	}
	else
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n != 0)
		{
			*d = *s;
			d--;
			s--;
			n--;
		}
	}
}

void			*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	i = 0;
	s = (unsigned char *)source;
	d = (unsigned char *)destination;
	ft_help(s, d, i, n);
	return (destination);
}
