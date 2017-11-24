/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_read_file.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: volivry <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:59:36 by volivry      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 15:17:09 by volivry     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./fillit.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 512

t_tetris	*ft_read_file(char *filename)
{
	int		fd;
	int		br;
	char	buf[BUF_SIZE];
	int		i;
	char	*file_cpy;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	br = read(fd, buf, BUF_SIZE);
	if (br < 0)
		return (NULL);
	file_cpy = (char*)malloc(br + 1);
	file_cpy[br] = '\0';
	ft_strncpy(buf, file_cpy, br);
	return (ft_check_file(file_cpy));
}
