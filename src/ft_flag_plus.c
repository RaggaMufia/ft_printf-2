/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:46:18 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 13:54:19 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_plus(intmax_t n, t_data *d)
{
	d->space = 0;
	if ( n < 0)
		ft_putchar('-');
	else if (d->plus == 1)
		ft_putchar('+');
	if (n < 0 || d->plus == 1)
	{
		d->fw--;
		d->rtn++;
	}
}