/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:36:28 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/10 16:36:35 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (*((char *)s) != '\0')
	{
		if (*((char *)s) == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
