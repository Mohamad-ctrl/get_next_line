/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 05:38:06 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/04 05:38:09 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		x;

	if (!s)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
