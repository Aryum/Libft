/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 02:27:38 by ricsanto          #+#    #+#             */
/*   Updated: 2025/04/17 19:09:14 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_c;
	unsigned char	*s2_c;

	i = 0;
	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	return (0);
}
