/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:03:46 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/13 11:04:08 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (((char *)dst)[i] && i < dstsize)
		i++;
	j = i;
	while (((char *)src)[i - j] && i + 1 < dstsize)
	{
		((char *)dst)[i] = ((char *)src)[i - j];
		i++;
	}
	if (j < dstsize)
		((char *)dst)[i] = '\0';
	return (j + ft_strlen(((char *)src)));
}
