/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 13:45:37 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/19 15:34:53 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *s)
{
	long long	result;
	int			sign;

	sign = 1;
	result = 0;
	while (((*s >= 9 && *s <= 13) || *s == 32) && *s != '\0')
		s++;
	if (*s == 43)
		s++;
	else if (*s == 45)
	{
		sign = -1;
		s++;
	}
	while (*s >= 48 && *s <= 57)
	{
		if (result * 10 / 10 != result)
			return (sign == 1 ? -1 : 0);
		result = result * 10;
		if (result + *s - '0' < 0)
			return (sign == 1 ? -1 : 0);
		result = result + *s++ - '0';
	}
	return (result * sign);
}
