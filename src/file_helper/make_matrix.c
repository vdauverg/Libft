/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 11:38:09 by vincent           #+#    #+#             */
/*   Updated: 2020/10/13 17:03:26 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <file_helper.h>

char	**make_matrix(char c, t_read *read)
{
	int		i;
	char	**mat;
	t_line	*line;

	if (!(mat = ft_memalloc(sizeof(char *) * read->h)))
		return (NULL);

	i = 0;
	while (i < read->h)
		if (!(mat[i] = ft_strnew(read->w)))
			return (NULL);

	line = read->lines;
	while (i < read->h)
	{
		ft_strchr(mat[i], (int)c);
		ft_strcpy(mat[i], line->str);
		line = line->next;
	}

	read->matrix = mat;
	return (mat);
}

t_read	*matrix_from_file(char c, char *file)
{
	t_read	*read;

	if (!(read = read_file(file)))
		return (NULL);
	if (!(read->matrix = make_matrix(c, read)))
		return (NULL);
	
	return (read);
}
