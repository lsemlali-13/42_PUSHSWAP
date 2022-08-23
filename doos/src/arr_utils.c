/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:57:38 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 11:57:39 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_arr_sorted(int *arr, int k)
{
	int	i;

	i = 1;
	if (!arr)
		return (1);
	while (i < k)
	{
		if (arr[i] < arr[i - 1])
			return (0);
		i++;
	}
	return (1);
}

void	arr_fill(int *arr, t_list *tmp)
{
	int	i;

	i = 0;
	while (tmp)
	{
		arr[i] = tmp->content;
		i++;
		tmp = tmp->next;
	}
}

int	*arr_swap(int *arr, int i)
{
	int	k;

	k = arr[i];
	arr[i] = arr[i - 1];
	arr[i - 1] = k;
	return (arr);
}

void	sort_arr(int *arr, int k)
{
	int	i;

	i = 1;
	while (!is_arr_sorted(arr, k))
	{
		if (arr[i] < arr[i - 1])
		{
			arr = arr_swap(arr, i);
		}
		i++;
		if (i == k)
			i = 1;
	}
}
