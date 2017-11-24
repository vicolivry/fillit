/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_file.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: volivry <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 14:53:17 by volivry      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 15:13:43 by volivry     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./fillit.h"

t_tetris	*ft_check_file(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '.' && str[i] != '#')
			return (NULL);
		i++;
	}
	if (str[i - 1] == '\n' && str[i - 2] == '\n')
		return (NULL);
	i = 0;

}
