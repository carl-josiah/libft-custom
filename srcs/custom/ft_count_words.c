/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 06:33:40 by ccastro           #+#    #+#             */
/*   Updated: 2026/01/28 06:34:27 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

size_t	ft_count_words(const char *s, const char *set)
{
	size_t	words;

	words = 0;
	while (ft_strchr(set, *s))
		s++;
	while (*s)
	{
		if (!ft_strchr(set, *s))
		{
			words++;
			while (*s && !ft_strchr(set, *s))
				s++;
		}
		else
			s++;
	}
	return (words);
}
