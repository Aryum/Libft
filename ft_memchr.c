/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:39:38 by ricsanto          #+#    #+#             */
/*   Updated: 2025/04/14 10:21:28 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_c;
	unsigned char	c_c;

	i = 0;
	c_c = (unsigned char)c;
	s_c = (unsigned char *)s;
	while (i < n)
	{
		if (s_c[i] == c_c)
			return (&s_c[i]);
		i++;
	}
	return (NULL);
}
