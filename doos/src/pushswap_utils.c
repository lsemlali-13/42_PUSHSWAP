/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 08:21:48 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 12:01:02 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
