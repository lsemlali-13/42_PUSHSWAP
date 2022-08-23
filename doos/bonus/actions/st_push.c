/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:00:13 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/12 23:19:43 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	pa(t_list **src, t_list **dst)
{
	t_list	*new;
	t_list	*hel;

	if (*src == NULL)
		return ;
	hel = *src;
	new = *src;
	*src = hel->next;
	new->next = *dst;
	*dst = new;
}

void	pb(t_list **src, t_list **dst)
{
	t_list	*new;
	t_list	*hel;

	hel = *src;
	if (*src == NULL)
		return ;
	new = *src;
	*src = hel->next;
	new->next = *dst;
	*dst = new;
}
