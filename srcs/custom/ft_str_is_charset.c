/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_charset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 06:47:16 by ccastro           #+#    #+#             */
/*   Updated: 2026/02/15 12:44:23 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_str_is_charset(char *line, const char *allowed)
{
	while (*line)
	{
		if (!ft_strchr(allowed, *line))
			return (0);
		line++;
	}
	return (1);
}
