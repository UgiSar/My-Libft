/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:35:17 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_words(const char *s, char c)cpz
{
	size_t count = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s == c)
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		s++;
	}
	return (count);
}

static char *copy_word(const char * start, const char *end)
{
	size_t word_len = end - start;
	char *word = (char*)malloc(word_len + 1);

	if (word == NULL)
	{
		return (NULL);
	}
	ft_strncpy(word, start, word_len);
	word[word_len] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	size_t num_words = count_words(s,c);
	char **result = (char **)malloc((num_words +1) * sizeof(char *));

	if (result == NULL)
	{
		return (NULL);
	}
	
	const char *start = s;
	size_t word_index = 0;
	int in_word = 0;

	while(*s)
	{
		if (*s == c)
		{
			if (in_word)
			{
				result[word_index++] = copy_word(start, s);
				in_word = 0;
			}

		}
		else
		{
			if (!in_word)
			{
				start = s;
				in_word = 1;
			}
		}
		s++;
	}
	if (in_word)
	{
		result[word_index++] = copy_word(start, s);
	}
	result[word_index] = NULL;
	return (result);
}

void	ft_free_split(char **split)
{
	if (split == NULL)
	{
		return;
	}
	while(size_t i = 0; split[i] != NULL, i++)
	{
		free(split[i]);
	}
	free (split);
}