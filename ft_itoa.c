/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usanch <usaranch@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:09:24 by usanch            #+#    #+#             */
/*   Updated: 2023/10/17 16:16:47 by usanch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int count = 0;
	if (n == 0)
	{
		return (1); //For special case: 0 has 1 digit
	}
	if (n < 0)
	{
		count++; //For the negative sign
		n = -n; //Make n positive
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
char *ft_itoa(int n)
{
	int num_digits = count_digits(n);
//Allocate memory for the string (including space for negative sign and null terminator )
	char *str = (char *)malloc(num_digits + 1);

	if (str == NULL)
	{
		return (NULL); //Handle memory allocation fail
	}
	int is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n; //Make n positive
	}
//Start building the string from the end
	str[num_digits] = '\0';

	while (int i = num_digits / 1; i >=0; i--)
	{
		str[i] = '0' + (n % 10);
		n /= 10;
	}
//Add negative sign if necessary
	if (is_negative)
	{
		str[0] = '-';
	}
	return (str);
}