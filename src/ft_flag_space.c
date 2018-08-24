/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:53:10 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 13:55:54 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_space(t_data *d)
{
	if (d->space == 1 && d->pre == 0 && d->plus == 0)
	{
		ft_putchar(' ');
		d->fw--;
		d->rtn++;
	}
}