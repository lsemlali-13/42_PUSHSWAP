/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:29:49 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/13 18:46:41 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

void	fill_st(t_list **a, int ac, char **av);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_search(const char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	ft_cut(char *buff);
void	ft_addfront(t_list	**list, t_list *new);
t_list	*ft_lstnew(int content);
int		is_sorted(t_list **stack_a);
void	sa(t_list **x);
void	sb(t_list **x);
void	ss(t_list **x, t_list **y);
void	pb(t_list **src, t_list **dst);
void	pa(t_list **src, t_list **dst);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
int		ft_atoi(const char *str);
int		ft_strlen(const char *str);
int		check_error(const char *str);
int		check_dup(char **ch, char *str, int j);
int		is_arr_sorted(int *arr, int k);
void	arr_fill(int *arr, t_list *tmp);
void	sort_arr(int *arr, int k);

#endif
