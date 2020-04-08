/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:48:00 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/20 19:36:26 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	d1;
	size_t	s1;

	d1 = ft_strlen(dst);
	s1 = ft_strlen(src);
	s = (char *)src;
	if (size < d1 + 1)
		return (size + s1);
	else
		ft_strncat(dst, s, size - d1 - 1);
	return (d1 + s1);
}
