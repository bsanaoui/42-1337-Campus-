/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:56:49 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/16 19:49:27 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_copy(unsigned char *d, unsigned char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
		ft_copy(d, s, len);
	return (dst);
}
