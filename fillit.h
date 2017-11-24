/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: volivry <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 14:19:58 by volivry      #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 15:03:24 by volivry     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>

typedef struct		s_tetris
{
	int				x[4];
	int				y[4];
	char			count;
	struct s_tetris	*next;
}					t_tetris;

t_tetris	*ft_check_file(char *str);

t_tetris	*ft_read_file(char *filename);



#endif
