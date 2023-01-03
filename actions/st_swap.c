/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 05:59:56 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 18:26:13 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **x, int k)
{
	int	z;

	if (!(*x) || !(*x)->next)
		return ;
	z = (*x)->content;
	(*x)->content = (*x)->next->content;
	(*x)->next->content = z;
	if (k == 1)
		write(1, "sa\n", 3);
}

void	sb(t_list **x, int k)
{
	int	z;

	if (!(*x) || !(*x)->next)
		return ;
	z = (*x)->content;
	(*x)->content = (*x)->next->content;
	(*x)->next->content = z;
	if (k == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list **x, t_list **y)
{
	sa(x, 0);
	sb(y, 0);
	write(1, "ss\n", 3);
}
