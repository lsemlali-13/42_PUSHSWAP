/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 02:45:08 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 18:46:26 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

void	ft_addfront(t_list	**list, t_list *new);
void	ft_sort(t_list **a, t_list **b, int ac, char **av);
void	stack_index(t_list **a);
int		get_wich(t_list **st, int k);
int		get_div(int y, int j);
void	smart_push(t_list **a, t_list **b, int z, int p);
t_list	*ft_lstnew(int content);
int		st_size(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	sort_small(t_list **a, t_list **b, int ac);
void	sort_big(t_list **a, t_list **b, int j);
int		is_sorted(t_list **stack_a);
void	sa(t_list **x, int k);
void	sb(t_list **x, int k);
void	ss(t_list **x, t_list **y);
void	pb(t_list **src, t_list **dst);
void	pa(t_list **src, t_list **dst);
void	ra(t_list **stack_a, int k);
void	rb(t_list **stack_b, int k);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, int k);
void	rrb(t_list **stack_b, int k);
void	rrr(t_list **stack_a, t_list **stack_b);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
int		check_error(const char *str);
int		check_dup(char **ch, char *str, int j);
int		is_arr_sorted(int *arr, int k);
void	arr_fill(int *arr, t_list *tmp);
void	sort_arr(int *arr, int k);

#endif
