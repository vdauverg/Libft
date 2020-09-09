/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfreefirst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdauverg <vdauverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 09:00:35 by vdauverg          #+#    #+#             */
/*   Updated: 2020/09/09 11:52:11 by vdauverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoinfreefirst(char *s1, const char *s2)
{
	char	*new;

	if ((new = ft_strjoin(s1, s2)))
	{
		ft_strdel(&s1);
		return (new);
	}

	return (NULL);
}
