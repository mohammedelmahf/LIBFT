/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:33:46 by maelmahf          #+#    #+#             */
/*   Updated: 2024/11/06 16:14:21 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d > s && d < s + len)
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		while (len--)
			*(d++) = *(s++);
	}
	return (dst);
}
