/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_helper.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:35:22 by vincent           #+#    #+#             */
/*   Updated: 2020/10/13 22:28:12 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HELPER_H
# define FILE_HELPER_H
# include <libft.h>
# include <get_next_line.h>
# define INC_PATH 0

typedef struct	s_line
{
	struct s_line	*next;
	struct s_line	*prev;
	char			*str;
}				t_line;

typedef struct	s_read
{
	int				w;
	int				h;
	char			**matrix;
	struct s_line	*lines;
	
}				t_read;

t_read			*matrix_from_file(char c, char *file, int fd);
t_read			*read_file(char *file, int fd);
char			**make_matrix(char c, t_read *read);

# endif
