/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 15:06:29 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/05 19:12:44 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destination, const char *append, size_t n)
{
	char	*a;
	size_t	i;
	size_t	j;

	a = (char *)append;
	j = 0;
	i = 0;
	while (destination[i] != '\0')
		i++;
	while (a[j] != '\0' && j != n)
	{
		destination[i] = a[j];
		j++;
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
