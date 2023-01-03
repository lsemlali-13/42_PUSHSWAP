/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsemlali <lsemlali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 08:21:27 by lsemlali          #+#    #+#             */
/*   Updated: 2022/04/11 12:01:07 by lsemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[0] == '-')
		i--;
	return (i);
}

int	check_error(const char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	if ((ft_atoi(str) == 0 && ft_strlen(str) >= 10)
		|| ft_strlen(str) > 10)
		return (0);
	while (str[i])
	{
		if (str[0] == '-' || str[0] == '+')
		{
			if (!(str[1] >= '0' && str[1] <= '9'))
				return (0);
			if (i == 0)
				i++;
		}
		if (str[i] && !(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	check_dup(char **ch, char *str, int j)
{
	int	i;

	i = 1;
	while (ch[i])
	{
		if ((ft_atoi(ch[i]) == ft_atoi(str)) && i != j)
			return (0);
		i++;
	}
	return (1);
}
