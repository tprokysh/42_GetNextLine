/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprokysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 15:09:41 by tprokysh          #+#    #+#             */
/*   Updated: 2018/11/13 16:44:21 by tprokysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_isalpha(int c)
{
	return ((c >= 65 & c <= 90) | (c >= 97 & c <= 122) ? 1 : 0);
}
