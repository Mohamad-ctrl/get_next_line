/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:07:44 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/22 14:07:46 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (((unsigned char *)s1)[x] != ((unsigned char *)s2)[x])
		{
			return (((unsigned char *)s1)[x] - ((unsigned char *)s2)[x]);
		}
		x++;
	}
	return (0);
}
