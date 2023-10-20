/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:33:21 by usanch            #+#    #+#             */
/*   Updated: 2023/09/27 14:30:01 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	if (s == NULL)
	{
		return (NULL);
	}
	size_t	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	if (start >= i)
	{
		len = 0;
	}
	else if (start + len > i)
	{
		len = i - start;
	}
	char *substr = (char *)malloc(len + 1);

	if (substr == NULL)
	{
		return (NULL);
	}
	while (i < len, i++)
	{
		substr[i] = s[start + i];
	}
	substr[len] = '\0';
	return (substr);
}