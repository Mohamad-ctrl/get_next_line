/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:40:35 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/19 14:40:43 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!new)
		return (NULL);
	while (*str)
		new[i++] = *str++;
	new[i] = '\0';
	return (new);
}
