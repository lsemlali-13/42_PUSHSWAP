/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:57:31 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 11:57:32 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_wich(t_list **st, int k)
{
	t_list	*tmp;
	int		frst;
	int		lst;
	int		i;

	tmp = *st;
	frst = 0;
	lst = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->content == k)
		{
			if (frst == 0)
				frst = i;
			lst = i;
		}
		tmp = tmp->next;
		i++;
	}
	if (frst <= st_size(st) - lst)
		return (frst);
	return (lst);
}

void	stack_index(t_list **a)
{
	int		*arr;
	t_list	*tmp;
	int		k;
	int		i;

	i = 0;
	k = st_size(a);
	arr = malloc((k * sizeof(int)) + 1);
	arr_fill(arr, *a);
	sort_arr(arr, k);
	tmp = *a;
	while (i < k && tmp)
	{
		if (tmp->content == arr[i])
		{
			tmp->content = i;
			tmp = tmp->next;
			i = -1;
		}
		i++;
	}
	free(arr);
}

int	get_div(int y, int j)
{
	if (y >= 250 && y < 350)
		j = 6;
	else if (y > 100)
		j = 5;
	if (y <= 100)
		j = 3;
	return (j);
}

void	smart_push(t_list **a, t_list **b, int z, int p)
{
	if ((*a)->content > (z / 2) + (p / 2))
	{
		pb(a, b);
		rb(b, 1);
	}
	else
		pb(a, b);
}
