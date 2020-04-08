/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 10:48:07 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/05 16:51:04 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *string)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)string;
	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
