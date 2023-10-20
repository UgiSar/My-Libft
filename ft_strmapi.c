/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:44:58 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_strlen(char const *str)
{
	size_t i;

	i = 0;
	while (*(str + 1))
	{
		i++;
	}
	return (i);
}

static char	*str_new(size_t n)
{
	char *str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
	{
		return (NULL);
	}
	return (str);
}

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if(!s)
	{
		return (NULL);
	}
	str = str_new(ft_strlen(s));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	result = str;
	while (*s)
	{
		*str++ = f(i++, *s++);
	}
	*str = '\0';
	return (result);	
}
//This function creates a new string by applying the specified function to each character of the input string. 