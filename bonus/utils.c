/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 08:21:48 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 20:15:26 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	st_size(t_list **stack_a)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (!(*stack_a))
		return (0);
	tmp = *stack_a;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_addfront(t_list	**list, t_list *new)
{
	new->next = *list;
	*list = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*n1;

	n1 = malloc(sizeof(t_list));
	if (n1 == 0)
		return (NULL);
	n1->content = content;
	n1->next = NULL;
	return (n1);
}

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

void	fill_st(t_list **a, int ac, char **av)
{
	t_list	*head;
	int		i;

	i = 1;
	if (ac <= 2)
		exit (0);
	while (av[i])
	{
		if (!check_error(av[i]) || !check_dup(av, av[i], i))
		{
			write(1, "ERROR\n", 6);
			exit (0);
		}
		i++;
	}
	while (ac > 1)
	{
		head = ft_lstnew(ft_atoi(av[ac - 1]));
		ft_addfront(a, head);
		ac--;
	}
}
