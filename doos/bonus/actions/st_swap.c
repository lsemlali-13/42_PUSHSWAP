/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 05:59:56 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 18:27:00 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	sa(t_list **x)
{
	int	z;

	if (!(*x) || !(*x)->next)
		return ;
	z = (*x)->content;
	(*x)->content = (*x)->next->content;
	(*x)->next->content = z;
}

void	sb(t_list **x)
{
	int	z;

	if (!(*x) || !(*x)->next)
		return ;
	z = (*x)->content;
	(*x)->content = (*x)->next->content;
	(*x)->next->content = z;
}

void	ss(t_list **x, t_list **y)
{
	sa(x);
	sb(y);
}
