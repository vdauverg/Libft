/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitespacestart.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdauverg <vdauverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 12:35:37 by vdauverg          #+#    #+#             */
/*   Updated: 2020/09/09 12:49:51 by vdauverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_whitespacestart(const char *str)
{
	if (!str || !*str)
		return (NULL);

	while (*str && !ft_iswhitespace(*str))
		str++;

	return ((char *)str);
}
