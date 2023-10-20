/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:36:52 by usanch            #+#    #+#             */
/*   Updated: 2023/10/17 13:48:47 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL || set = NULL)
	{
		return(NULL);
	}

	size_t len = ft_strlen(s1);
	size_t	start = 0;

	while (start < len && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}

	size_t	end = end - 1;
	while (end > start && ft_strchr (set, s1[end]) != NULL)
	{
		end--;
	}
	size_t trimmed_len = end - start + 1;

	char *trimmed_str = (char *) malloc(trimmed_len + 1);

	if (trimmed_str == NULL)
	{
		return (NULL);
	}
	
	ft_strncpy(trimmed_str, s1 + start, trimmed_len);
	
	trimmed_str[trimmed_len] = '\0';

return (trimmed_str);
}