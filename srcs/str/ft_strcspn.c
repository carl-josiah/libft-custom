/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 17:51:28 by ccastro           #+#    #+#             */
/*   Updated: 2026/02/01 22:39:04 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

size_t	ft_strcspn(const char *str, const char *charset)
{
	size_t		i;

	i = 0;
	while (*str)
	{
		if (ft_strchr(charset, *str))
			return (i);
		str++;
		i++;
	}
	return (i);
}
