/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 08:57:30 by ricsanto          #+#    #+#             */
/*   Updated: 2025/04/30 10:56:53 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd >= 0 && s != NULL)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
