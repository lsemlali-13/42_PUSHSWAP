/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:35:45 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 20:21:09 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"
#include "string.h"
#include "stdio.h"

void	er_ror(void)
{
	write(1, "Error\n", 6);
	exit (0);
}

void	st_push(char *s, t_list **a, t_list **b)
{
	if (strncmp(s, "pb\n", 3) == 0)
		pb(a, b);
	else if (strncmp(s, "pa\n", 3) == 0)
		pa(b, a);
	else
	{
		write(1, "Error\n", 6);
		exit (0);
	}	
}

void	st_sw(char *s, t_list **a, t_list **b)
{
	if (strncmp(s, "sa\n", 3) == 0)
		sa(a);
	else if (strncmp(s, "sb\n", 3) == 0)
		sb(b);
	else if (strncmp(s, "ss\n", 3) == 0)
		ss(a, b);
	else
	{
		write(1, "Error\n", 6);
		exit (0);
	}	
}

void	st_rot(char *s, t_list **a, t_list **b)
{
	if (strncmp(s, "ra\n", 3) == 0)
		ra(a);
	else if (strncmp(s, "rb\n", 3) == 0)
		rb(b);
	else if (strncmp(s, "rr\n", 3) == 0 && s[3] == '\0')
		rr(a, b);
	else if (strncmp(s, "rra\n", 4) == 0)
		rra(a);
	else if (strncmp(s, "rrb\n", 4) == 0)
		rrb(b);
	else if (strncmp(s, "rrr\n", 4) == 0)
		rrr(a, b);
	else
	{
		write(1, "Error\n", 6);
		exit (0);
	}		
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*s;

	fill_st(&a, ac, av);
	s = get_next_line (0);
	while (s)
	{
		if (s[0] == 'p')
			st_push(s, &a, &b);
		else if (s[0] == 's')
			st_sw(s, &a, &b);
		else if (s[0] == 'r')
			st_rot(s, &a, &b);
		else
			er_ror();
		free (s);
		s = get_next_line(0);
	}
	if (is_sorted(&a) && b == NULL)
		write(1, "ok\n", 3);
	else
		write(1, "ko\n", 3);
}
