/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:55:56 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 12:01:20 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sml_index(t_list **stack_a)
{
	t_list	*tmp;
	int		r;
	int		i;
	int		j;

	tmp = *stack_a;
	r = tmp->content;
	i = 0;
	j = 0;
	while (tmp)
	{
		if (tmp->next)
		{
			if (r > tmp->next->content)
			{
				r = tmp->next->content;
				j = i + 1;
			}
		}
		i++;
		tmp = tmp->next;
	}
	return (j);
}

void	bring_sml(t_list **stack_a, int x)
{
	int	i;
	int	y;

	i = st_size(stack_a);
	y = x;
	if (x >= i / 2)
	{
		while (x < i)
		{
			rra(stack_a, 1);
			x++;
		}
	}
	if (y < i / 2)
	{
		while (y > 0)
		{
			ra(stack_a, 1);
			y--;
		}
	}
}

void	sort_three(t_list **stack_a)
{
	int	x;
	int	y;
	int	z;

	x = (*stack_a)->content;
	y = (*stack_a)->next->content;
	z = (*stack_a)->next->next->content;
	if (x > y && x > z && y < z)
		ra(stack_a, 1);
	if (x > y && x > z && y > z)
	{
		ra(stack_a, 1);
		sa(stack_a, 1);
	}
	if (x < y && y > z && x > z)
		rra(stack_a, 1);
	if (x < y && y > z && x < z)
	{
		sa(stack_a, 1);
		ra(stack_a, 1);
	}
	if (x < z && y < z && x > y)
		sa(stack_a, 1);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	x;
	int	y;

	x = sml_index(stack_a);
	y = 2;
	while (y > 0)
	{
		bring_sml(stack_a, x);
		pb(stack_a, stack_b);
		x = sml_index(stack_a);
		y--;
	}
	sort_three(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}

void	sort_small(t_list **a, t_list **b, int ac)
{
	int	k;

	k = sml_index(a) + 1;
	if (ac == 4)
		sort_three(a);
	if (ac == 5)
	{
		while (--k > 0)
			ra(a, 1);
		pb(a, b);
		sort_three(a);
		pa(b, a);
	}
	if (ac == 6)
		sort_five(a, b);
}
