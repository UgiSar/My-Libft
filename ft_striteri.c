/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:48:34 by usanch            #+#    #+#             */
/*   Updated: 2023/10/10 15:52:51 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char * ))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
		{
			f(i++, s++);
		}
		
	}
}

//The ft_striteri function applies a function to each character of a string, providing the index and a pointer to the character.