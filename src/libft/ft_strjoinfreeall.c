/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfreeall.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vincent <vincent@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 10:26:22 by vdauverg          #+#    #+#             */
/*   Updated: 2020/09/10 16:53:54 by vincent          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoinfreeall(char *s1, char *s2)
{
	char	*new;

	if ((new = ft_strjoin(s1, s2)))
	{
		ft_strdel(&s1);
		ft_strdel(&s2);
		return (new);
	}

	return (NULL);
}
