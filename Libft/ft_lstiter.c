/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 01:27:02 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/11 01:27:03 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nxt;

	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		nxt = lst;
		f(nxt->content);
		lst = nxt->next;
	}
}
