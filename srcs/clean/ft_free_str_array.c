/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 00:44:15 by ccastro           #+#    #+#             */
/*   Updated: 2026/01/08 00:56:01 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

void	ft_free_str_array(char ***arr)
{
	char	**tmp;

	if (!arr || !*arr)
		return ;
	tmp = *arr;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(*arr);
	*arr = NULL;
}
