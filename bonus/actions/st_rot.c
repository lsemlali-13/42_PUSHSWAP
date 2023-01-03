/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:00:09 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/12 15:38:17 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	ra(t_list **stack_a)
{
	t_list	*st;
	t_list	*gh;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	gh = *stack_a;
	(*stack_a) = gh->next;
	st = *stack_a;
	while (st->next)
		st = st->next;
	gh->next = NULL;
	st->next = gh;
}

void	rb(t_list **stack_b)
{
	t_list	*st;
	t_list	*gh;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	gh = *stack_b;
	(*stack_b) = gh->next;
	st = *stack_b;
	while (st->next)
		st = st->next;
	gh->next = NULL;
	st->next = gh;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
