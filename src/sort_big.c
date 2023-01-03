/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:53:05 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 12:01:16 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	all_2b(t_list **a, t_list **b, int j)
{
	int	m;
	int	p;
	int	z;

	stack_index(a);
	m = st_size(a);
	z = m / j;
	p = 0;
	while (*a && st_size(a) > 5)
	{
		if ((*a) && (*a)->content <= z && (*a)->content < m - 5)
		{
			smart_push(a, b, z, p);
		}
		else
			ra(a, 1);
		if (st_size(b) == z)
		{
			j = get_div(st_size(a), j);
			p = z;
			z += st_size(a) / j;
		}
	}
}

void	all_back(t_list **a, t_list **b)
{
	int	k;
	int	p;

	k = st_size(b) - 1;
	while (*b)
	{
		while ((*b) && ((*b)->content == k || (*b)->content == k - 1))
		{
			pa(b, a);
			if ((*a)->content == k)
				k = st_size(b) - 1;
			if ((*a) && (*a)->next && (*a)->content > (*a)->next->content)
				sa(a, 1);
		}
		if ((*b) && (*b)->next && (*b)->next->content == k)
			sb(b, 1);
		else
		{
			p = get_wich(b, k);
			if (p < k / 2)
				rb(b, 1);
			else
				rrb(b, 1);
		}
	}
}

void	sort_big(t_list **a, t_list **b, int j)
{
	stack_index(a);
	all_2b(a, b, j);
	sort_five(a, b);
	all_back(a, b);
}
