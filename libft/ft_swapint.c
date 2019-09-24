/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tprokysh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:39:27 by tprokysh          #+#    #+#             */
/*   Updated: 2018/10/30 16:06:44 by tprokysh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_swapint(int *a, int *b)
{
	int c;

	if (!a)
		return ;
	if (!b)
		return ;
	c = *a;
	*a = *b;
	*b = c;
}