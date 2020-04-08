/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:06:45 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:36:01 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_length(unsigned int i)
{
	int j;

	j = 0;
	while (i != 0)
	{
		j++;
		if (i > 0 && i <= 9)
			return (j);
		i = i / 10;
	}
	return (j);
}

static char	*ft_result(int j, unsigned int i, char *s)
{
	int k;

	while (j != 0)
	{
		k = i % 10;
		s[j - 1] = k + '0';
		if (i == 0 && j - 1 == 0)
			s[j - 1] = '-';
		i = i / 10;
		j--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	unsigned int	i;
	int				j;
	char			*s;

	if (n == 0)
	{
		s = ft_strnew(1);
		s[0] = '0';
		return (s);
	}
	if (n > 0)
	{
		i = n;
		j = ft_length(i);
	}
	else
	{
		i = n * -1;
		j = ft_length(i) + 1;
	}
	if ((s = ft_strnew(j)) == NULL)
		return (NULL);
	return (ft_result(j, i, s));
}
