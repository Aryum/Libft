/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:39:01 by ricsanto          #+#    #+#             */
/*   Updated: 2025/05/18 19:27:08 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*cur_node;
	void	*cur_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	ret = NULL;
	while (lst != NULL)
	{
		cur_content = f((*lst).content);
		cur_node = ft_lstnew(cur_content);
		if (cur_node == NULL)
		{
			del(cur_content);
			ft_lstclear(&ret, del);
			break ;
		}
		ft_lstadd_back(&ret, cur_node);
		lst = ((*lst).next);
	}
	return (ret);
}
