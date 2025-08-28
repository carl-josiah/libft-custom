/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:48:34 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 18:19:14 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	nbr;
	int					sign;

	nbr = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = ((nbr * 10) + (*str - '0'));
		if (nbr > LLONG_MAX && sign == -1)
			return (0);
		if (nbr > LLONG_MAX)
			return (-1);
		str++;
	}
	return (nbr * sign);
}
