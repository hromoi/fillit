/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 13:08:25 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/20 16:53:11 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long k;
	char t;

	k = n;
	if (k < 0)
	{
		k = (long)n * -1;
		write(fd, "-", 1);
	}
	if (k > 9)
	{
		ft_putnbr_fd(k / 10, fd);
		ft_putnbr_fd(k % 10, fd);
	}
	if (k >= 0 && k <= 9)
	{
		t = k + '0';
		write(fd, &t, 1);
	}
}
