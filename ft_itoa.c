/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:35:27 by ricsanto          #+#    #+#             */
/*   Updated: 2025/11/11 11:17:42 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbcount(long int n)
{
	int	i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n / 10 > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ret;
	long	nbr;

	nbr = (long)n;
	len = nbcount(nbr);
	if (nbr < 0)
		len++;
	ret = ft_calloc(len + 1, sizeof(char));
	if (ret != NULL)
	{
		len -= 1;
		if (nbr < 0)
		{
			ret[0] = '-';
			nbr *= -1;
		}
		while (len >= 0 && ret[len] != '-')
		{
			ret[len] = nbr % 10 + '0';
			len -= 1;
			nbr /= 10;
		}
	}
	return (ret);
}
