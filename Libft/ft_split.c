/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosharif <mohamad42acc@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:29:28 by mosharif          #+#    #+#             */
/*   Updated: 2022/07/30 13:29:29 by mosharif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	counter(const char *str, char c)
{
	int	x;
	int	triger;

	x = 0;
	triger = 0;
	while (*str)
	{
		if (*str != c && triger == 0)
		{
			triger = 1;
			x++;
		}
		else if (*str == c)
			triger = 0;
		str++;
	}
	return (x);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_subsplit(char const *s, char c, char **split)
{
	size_t	x;
	size_t	y;
	int		i;

	split = malloc((counter(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	x = 0;
	y = 0;
	i = -1;
	while (x <= ft_strlen(s))
	{
		if (s[x] != c && i < 0)
			i = x;
		else if ((s[x] == c || x == ft_strlen(s)) && i >= 0)
		{
			split[y++] = word_dup(s, i, x);
			i = -1;
		}
		x++;
	}
	split[y] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;

	mem = NULL;
	if (!s)
		return (NULL);
	return (ft_subsplit(s, c, mem));
}
