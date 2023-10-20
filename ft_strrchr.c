/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:55:48 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*i = NULL;
	
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			i = (char *)s;
		}
		s++;
	}
	return (i);
}
//The ft_strrchr function searches for the last occurrence of a specific character in a string.