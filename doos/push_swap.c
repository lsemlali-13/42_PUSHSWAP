/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:40:06 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 19:54:44 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list **stack_a)
{
	t_list	*tmp;

	if (!(*stack_a))
		return (1);
	tmp = *stack_a;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	int		i;

	i = 1;
	while (av[i])
	{
		if (!check_error(av[i]) || !check_dup(av, av[i], i))
		{
			write(1, "ERROR\n", 6);
			return (0);
		}
		i++;
	}
	ft_sort(&a, &b, ac, av);
	return (0);
}
