/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 08:07:40 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 14:14:31 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_width(t_data *d)
{
	if (d->zero == 1 && d->pre == 0 && d->minus == 0)
		while (d->fw-- > 0)
		{
			ft_putchar('0');
			d->rtn += 1;
		}
	else
		while (d->fw-- > 0)
		{
			ft_putchar(' ');
			d->rtn += 1;
		}
}