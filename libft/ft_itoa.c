/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:04:23 by volivry           #+#    #+#             */
/*   Updated: 2017/11/21 14:57:48 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_countchar(int n)
{
	int	count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	long_n;

	long_n = (long)n;
	len = ft_countchar(n);
	if (n < 0)
	{
		long_n = -(long)n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = '0' + (long_n % 10);
	while (long_n /= 10)
		str[--len] = '0' + (long_n % 10);
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
