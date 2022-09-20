/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:09:41 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/13 11:09:42 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*needle)
		return (((char *)haystack));
	while (x < len && ((char *)haystack)[x] != '\0')
	{
		y = 0;
		if (((char *)haystack)[x] == ((char *)needle)[y])
		{
			while (haystack[x + y] == needle[y] && x + y < len)
			{
				y++;
				if (needle[y] == '\0')
				{
					return (((char *)haystack) + x);
				}
			}
		}
		x++;
	}
	return (NULL);
}
