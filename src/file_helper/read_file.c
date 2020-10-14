/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 15:31:51 by vincent           #+#    #+#             */
/*   Updated: 2020/10/13 22:20:45 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <file_helper.h>

t_line	*assign_line(char *str, t_read *read, t_line *prev)
{
	int		len;
	t_line *line;

	len = ft_strlen(str);
	if (read->w < len)
		read->w = len;

	if (!(line = ft_memalloc(sizeof(t_line))))
		return (NULL);
	line->prev = prev;
	line->next = NULL;
	line->str = str;

	return (line);
}

t_read	*read_file(char *file, int fd)
{
	int		len;
	char	*str;
	t_read	*read;
	t_line	*line;

	if (file && (fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	len = 0;
	if (!(read = (t_read *)malloc(sizeof(t_read))))
		return (NULL);
	line = NULL;

	while (get_next_line(fd, &str) == 1)
	{
		if (!(line = assign_line(str, read, line)))
			return (NULL);
		ft_strdel(&str);
		len++;
	}

	line->next = NULL;
	read->h = len;

	return (read);
}
