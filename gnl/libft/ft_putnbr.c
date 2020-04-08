/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:36:33 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/20 16:55:04 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	long k;
	char t;

	k = n;
	if (k < 0)
	{
		k = (long)n * -1;
		write(1, "-", 1);
	}
	if (k > 9)
	{
		ft_putnbr(k / 10);
		ft_putnbr(k % 10);
	}
	if (k >= 0 && k <= 9)
	{
		t = k + '0';
		write(1, &t, 1);
	}
}
