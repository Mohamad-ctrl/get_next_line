/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:09:26 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/23 21:09:30 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (!dst && !src)
		return (0);
	if ((char *)dst > (char *)src)
	{
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (x < len)
		{
			((char *)dst)[x] = ((char *)src)[x];
			x++;
		}
	}
	return (dst);
}
