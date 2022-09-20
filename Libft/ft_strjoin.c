/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 22:10:24 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/28 22:10:26 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		x;
	char	*nearray;

	if (s1 && s2)
	{
		nearray = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (nearray == NULL)
			return (NULL);
		x = 0;
		while (s1[x])
		{
			nearray[x] = s1[x];
			x++;
		}
		while (*s2)
		{
			nearray[x] = *s2++;
			x++;
		}
		nearray[x] = '\0';
		return (nearray);
	}
	return (NULL);
}
