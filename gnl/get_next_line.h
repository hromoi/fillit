/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yperra-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 16:32:40 by yperra-f          #+#    #+#             */
/*   Updated: 2019/01/23 17:05:51 by yperra-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define MAX_FD 10240
# include <sys/types.h>
# include "../libft/libft.h"

int						get_next_line(const int fd, char **line);

typedef	struct			s_spisok
{
	char				*ostatok;
	ssize_t				fd;
	struct s_spisok		*next;
}						t_spisok;
#endif
