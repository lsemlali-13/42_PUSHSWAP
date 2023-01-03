/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:58:40 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 19:55:56 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_list **a, t_list **b, int ac, char **av)
{
	t_list	*head;
	int		k;

	k = ac;
	while (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[ac - 1]));
		ft_addfront(a, head);
		ac--;
	}
	ac = k;
	if (is_sorted(a) == 1)
		return ;
	if (ac == 3)
		sa(a, 1);
	if (ac <= 6)
		sort_small(a, b, ac);
	if (ac > 102)
		sort_big(a, b, 7);
	if (ac > 6 && ac <= 102)
		sort_big(a, b, 4);
}
