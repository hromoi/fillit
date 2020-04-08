/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 14:27:33 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/05 16:46:38 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destptr, const char *srcptr)
{
	char	*s;
	int		i;
	int		j;

	j = 0;
	i = 0;
	s = (char *)srcptr;
	while (destptr[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		destptr[i] = s[j];
		i++;
		j++;
	}
	destptr[i] = '\0';
	return (destptr);
}
