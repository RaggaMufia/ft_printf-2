/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 13:40:00 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_p(void *addr, t_data *d)
{
	char	*new;

	new = ft_ulltoa_base((long long)addr, 16);
	ft_flag_size(ft_strlen(new), d);
	d->fw -= 2;
	ft_flag_width(d);
	ft_putstr("0x");
	d->rtn += ft_strlen(new) + 2;
	ft_flag_pre(new, d);
	ft_putstr(new);
	ft_flag_width(d);
	free(new);
}