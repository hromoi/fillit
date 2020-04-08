/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:12:36 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/11 15:29:21 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*s11;
	char	*s22;

	if (s1 == NULL || s2 == NULL)
		return (0);
	s11 = (char *)s1;
	s22 = (char *)s2;
	if (ft_strcmp(s11, s22) == 0)
		return (1);
	return (0);
}
