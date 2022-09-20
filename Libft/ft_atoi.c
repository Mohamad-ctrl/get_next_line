/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:19:08 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/12 14:19:10 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	num;
	long	sn;

	sn = 1;
	num = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sn = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while ((*str != '\0') && ('0' <= *str) && (*str <= '9'))
	{
		num = (num * 10) + (*str - '0');
		if (num > 9223372036854775807 && sn == -1)
			return (0);
		str++;
	}
	return (num * sn);
}
