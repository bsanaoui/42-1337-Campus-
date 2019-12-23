/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:10:15 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/16 19:36:46 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	sr = (unsigned char *)src;
	ds = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		if (sr[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
