/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 14:18:48 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/05 15:12:43 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	unsigned char *h;
	unsigned char *j;

	h = (unsigned char *)memptr1;
	j = (unsigned char *)memptr2;
	while (num != 0)
	{
		if (*h != *j)
			return (*h - *j);
		h++;
		j++;
		num--;
	}
	return (0);
}
