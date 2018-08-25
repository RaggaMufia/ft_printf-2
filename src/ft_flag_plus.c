/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:46:18 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 10:45:05 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_plus(t_data *d)
{
	if (d->plus == -1)
		ft_putchar('-');
	else if (d->plus == 1)
		ft_putchar('+');
	if (d->plus == -1 || d->plus == 1)
		d->rtn++;
}