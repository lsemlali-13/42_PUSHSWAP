/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:24:27 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 12:01:10 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str)
{
	long int	i;
	long int	p;
	long int	n;

	p = 1;
	i = 0;
	if (str[i] == '-')
	{
		p = -1;
		i = 1;
	}
	n = 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		n = n * 10 + (str[i] - 48);
		i++;
	}
	if (n > 2147483647 && p == 1)
		return (0);
	else if (n > 2147483648 && p == -1)
		return (0);
	return (n * p);
}
