/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricsanto <ricsanto@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:03:55 by ricsanto          #+#    #+#             */
/*   Updated: 2025/04/17 19:33:52 by ricsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	ret;

	i = 0;
	ret = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == '\0' || s[i + 1] == c))
			ret++;
		i++;
	}
	return (ret);
}

static size_t	countwordlen(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	freearr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill(char const *s, char c, char **ret, size_t wordcount)
{
	size_t	i;
	size_t	h;
	size_t	wordlen;

	i = 0;
	h = 0;
	while (h < wordcount)
	{
		while (s[i] == c)
			i++;
		wordlen = countwordlen((char *)&s[i], c);
		ret[h] = ft_substr(&s[i], 0, wordlen);
		if (ret[h] != NULL)
		{
			i += wordlen;
			h++;
		}
		else
		{
			freearr(ret);
			return (0);
		}
	}
	ret[h] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	wordcount;

	if (s == NULL)
		return (NULL);
	wordcount = countwords(s, c);
	ret = ft_calloc(wordcount + 1, sizeof(char *));
	if (ret != NULL)
	{
		if (!fill(s, c, ret, wordcount))
			return (NULL);
	}
	return (ret);
}
