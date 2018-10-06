/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnemangw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 18:02:44 by tnemangw          #+#    #+#             */
/*   Updated: 2018/05/30 10:01:37 by tnemangw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*j;

	j = (char *)b;
	while (len > 0)
	{
		j[len - 1] = c;
		len--;
	}
	return (b);
}