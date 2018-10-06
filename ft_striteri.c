/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnemangw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 16:56:42 by tnemangw          #+#    #+#             */
/*   Updated: 2018/06/16 16:32:13 by tnemangw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	cnt;

	if (!s || !f)
		return ;
	cnt = 0;
	while (s[cnt] != '\0')
	{
		f(cnt, s + cnt);
		cnt++;
	}
}
