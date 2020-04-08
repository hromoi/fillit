/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:29:28 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/20 19:54:10 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *s11;
	char *s22;

	if (s1 == NULL || s2 == NULL)
		return (0);
	s11 = (char *)s1;
	s22 = (char *)s2;
	while (n != 0)
	{
		if (*s11 == *s22)
		{
			s11++;
			s22++;
			n--;
		}
		else
			return (0);
	}
	return (1);
}
