/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 10:45:14 by yperra-f          #+#    #+#             */
/*   Updated: 2019/01/14 11:43:06 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *c;

	c = (void *)malloc(size * sizeof(void));
	if (c == 0)
		return (NULL);
	ft_memset(c, '\0', size);
	return (c);
}
