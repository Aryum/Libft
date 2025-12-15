/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:09:35 by ricardo-san       #+#    #+#             */
/*   Updated: 2025/04/11 14:17:12 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isclass(int c, int lower, int upper)
{
	return (c >= lower && c <= upper);
}

int	ft_isalpha(int c)
{
	if (isclass(c, 'a', 'z') || isclass(c, 'A', 'Z'))
		return (1024);
	return (0);
}
