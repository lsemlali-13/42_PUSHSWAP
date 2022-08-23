/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:00:11 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 18:48:47 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	rra(t_list **stack_a)
{
	t_list	*st;
	t_list	*gh;
	t_list	*b_last;

	if ((*stack_a) == NULL || (*stack_a)->next == NULL)
		return ;
	st = *stack_a;
	while (st->next)
	{
		b_last = st;
		st = st->next;
	}
	gh = st;
	b_last->next = NULL;
	gh->next = *stack_a;
	*stack_a = gh;
}

void	rrb(t_list **stack_b)
{
	t_list	*st;
	t_list	*gh;
	t_list	*b_last;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	st = *stack_b;
	while (st->next)
	{
		b_last = st;
		st = st->next;
	}
	gh = st;
	b_last->next = NULL;
	gh->next = *stack_b;
	*stack_b = gh;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
