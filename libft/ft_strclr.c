/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 19:42:11 by volivry           #+#    #+#             */
/*   Updated: 2017/11/17 10:49:07 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}