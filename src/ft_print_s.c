/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:13:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 14:11:47 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_s(char *str, t_data *d)
{
	if (str)
	{
		ft_flag_size(ft_strlen(str), d);
		ft_flag_width(d);
		ft_putstr(str);
		d->rtn += ft_strlen(str);
		ft_flag_width(d);
	}
	else
	{
		ft_putstr("(null)");
		d->rtn += 6;
	}
}