/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 13:04:41 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:45:50 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	k;
	k = 0;

	if (size == k - 1)
		return(NULL);
	s = NULL;
	s = (char *)malloc((size + 1) * sizeof(char));
	if (s == 0)
		return (NULL);
	ft_memset(s, '\0', size + 1);
	return (s);
}
