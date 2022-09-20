/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:34:11 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/24 10:34:12 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(((char *)src)));
	while (((char *)src)[i] && i < dstsize - 1)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	((char *)dst)[i] = '\0';
	return (ft_strlen(((char *)src)));
}
