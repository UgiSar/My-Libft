/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:31:04 by usanch            #+#    #+#             */
/*   Updated: 2023/09/27 14:42:42 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
// Calculate the lengths of the input strings 's1' and 's2'
	size_t	len1 = ft_strlen(s1)
	size_t	len2 = ft_strlen(s2)
// Allocate memory for the new string (including the null terminator)
	char *new_str = (char *)malloc(len1 + len2 + 1);
	
	if (new_str == NULL)
	{
		return (NULL);
	}
// Copy 's1' and 's2' to the allocated memory
	ft_strcpy (new_str, s1);
	ft_strcpy (new_str, s2);	
	return (new_str);
}