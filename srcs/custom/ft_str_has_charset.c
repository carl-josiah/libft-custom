/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_has_charset.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 06:47:16 by ccastro           #+#    #+#             */
/*   Updated: 2026/03/16 16:50:54 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

int	ft_str_has_charset(char *line, const char *allowed)
{
	while (*line)
	{
		if (!ft_strchr(allowed, *line))
			return (0);
		line++;
	}
	return (1);
}
