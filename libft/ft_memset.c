/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:49:29 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 14:26:00 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	char *dest;

	dest = (char *)destination;
	while (n != 0)
	{
		*dest = (char)c;
		dest++;
		n--;
	}
	return (destination);
}
