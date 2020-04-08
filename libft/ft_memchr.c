/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 13:49:46 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/05 15:12:30 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *h;
	unsigned char v;

	v = (unsigned char)c;
	h = (unsigned char *)arr;
	while (n != 0)
	{
		if (*h == v)
			return (h);
		h++;
		n--;
	}
	return (NULL);
}
