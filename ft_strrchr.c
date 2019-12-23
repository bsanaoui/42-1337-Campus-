/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:01:33 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/10 18:01:37 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen((char *)s);
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	while (len >= 0)
	{
		if (((char *)s)[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
