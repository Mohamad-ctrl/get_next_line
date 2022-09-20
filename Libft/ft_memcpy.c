/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:42:50 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/18 19:42:53 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;

	if (!dst && !src)
		return (0);
	x = 0;
	while (x < n)
	{
		((char *)dst)[x] = ((char *)src)[x];
		x++;
	}
	return (dst);
}
