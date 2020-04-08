/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:51:49 by yperra-f          #+#    #+#             */
/*   Updated: 2018/12/20 18:23:48 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_deldel(void *a, size_t b)
{
	ft_memdel(&a);
	b = 0;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *a;
	t_list *b;

	if (!lst || !f)
		return (NULL);
	if (!(a = f(lst)))
		return (NULL);
	b = a;
	while (lst->next != NULL)
	{
		if (!(b->next = f(lst->next)))
		{
			ft_lstdel(&a, ft_deldel);
			return (NULL);
		}
		b = b->next;
		lst = lst->next;
	}
	return (a);
}
