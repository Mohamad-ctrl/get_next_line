/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 13:09:06 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/09 13:09:08 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*x;

	if (lst)
	{
		while (*lst)
		{
			x = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = x;
		}
	}
}
