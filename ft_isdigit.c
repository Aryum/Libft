/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:34:48 by ricardo-san       #+#    #+#             */
/*   Updated: 2025/04/11 12:06:20 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	isclass(int c, int lower, int upper)
{
	return (c >= lower && c <= upper);
}

int	ft_isdigit(int c)
{
	if (isclass(c, '0', '9'))
		return (2048);
	return (0);
}
