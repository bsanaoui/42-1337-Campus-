/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 21:36:01 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/12 21:36:03 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	void *s;

	s = malloc(count * size);
	if (!(s = malloc(count * size)))
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
