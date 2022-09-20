/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 01:32:42 by mosharif          #+#    #+#             */
/*   Updated: 2022/08/11 01:32:44 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res;
	void	*x;

	if (lst == NULL)
		return (0);
	res = 0;
	while (lst != NULL)
	{
		x = f(lst->content);
		new = ft_lstnew(x);
		if (new == NULL)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	new = 0;
	return (res);
}
