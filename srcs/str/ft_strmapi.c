/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 09:44:23 by ccastro           #+#    #+#             */
/*   Updated: 2025/08/28 18:19:46 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*s1;

	i = -1;
	s1 = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s || !f)
		return (NULL);
	if (s1 == NULL)
		return (NULL);
	while (s[++i])
		s1[i] = (*f)(i, s[i]);
	s1[i] = '\0';
	return (s1);
}
