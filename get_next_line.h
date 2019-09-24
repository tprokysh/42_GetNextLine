/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprokysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:00:12 by tprokysh          #+#    #+#             */
/*   Updated: 2018/11/17 15:32:53 by tprokysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1337
# include "libft/includes/libft.h"
# include <fcntl.h>
# include <limits.h>

int		get_next_line(const int fd, char **line);

#endif
