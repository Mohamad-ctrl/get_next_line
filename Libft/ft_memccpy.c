/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:53:30 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/23 18:53:31 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
		size_t n)
{
	size_t			x;
	unsigned char	*s;
	unsigned char	*dis;

	s = (unsigned char *)src;
	dis = (unsigned char *)dst;
	x = 0;
	while (x < n)
	{
		dis[x] = s[x];
		if (dis[x] == (unsigned char)c)
			return (&dis[x + 1]);
		x++;
	}
	return (NULL);
}
