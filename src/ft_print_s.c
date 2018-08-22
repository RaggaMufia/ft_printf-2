/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:13:08 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/22 12:11:32 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_s(char *str, t_data *d)
{
	if (str)
	{
		ft_putstr(str);
		d->rtn += ft_strlen(str);
	}
	else
	{
		ft_putstr("(null)");
		d->rtn += 6;
	}
}