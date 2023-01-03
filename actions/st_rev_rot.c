/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:00:11 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 18:48:15 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a, int k)
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
	if (k == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int k)
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
	if (k == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
