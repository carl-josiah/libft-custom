/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_included.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 06:47:16 by ccastro           #+#    #+#             */
/*   Updated: 2026/01/28 06:54:50 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_is_included(char *line, const char *inc)
{
	while (*line)
	{
		if (!(ft_strchr(inc, *line) != NULL))
			return (0);
		line++;
	}
	return (1);
}
