/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfreelast.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdauverg <vdauverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 10:25:27 by vdauverg          #+#    #+#             */
/*   Updated: 2020/09/09 11:52:23 by vdauverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoinfreelast(const char *s1, char *s2)
{
	char	*new;

	if ((new = ft_strjoin(s1, s2)))
	{
		ft_strdel(&s2);
		return (new);
	}

	return (NULL);
}
