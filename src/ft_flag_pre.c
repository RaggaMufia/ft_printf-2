/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_pre.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:59:52 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 12:11:33 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_pre(char *str, t_data *d)
{
	char	c;

	c = d->conv;
	if (c == 'i' || c == 'd')
		while (d->pw > 0)
		{
			ft_putchar('0');
			d->pw--;
			d->rtn++;
		}
	else if (d->pw > 0 && (c == 's'))
		str[d->pw] = '\0';
}