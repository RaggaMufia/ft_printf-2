/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:13:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 11:11:59 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_use_flags(t_data *d)
{
	if (d->minus == 0)
		ft_print_width(d);
}


void	ft_print_c(int	c, t_data *d)
{
	d->fw--;
	ft_use_flags(d);
	ft_putchar(c);
	d->rtn++;
	if (d->minus == 1)
		ft_print_width(d);
}