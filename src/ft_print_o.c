/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 13:31:11 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_o(unsigned long long n, t_data *d)
{
	char	*new;

	new = ft_ulltoa_base(n, 8);
	ft_flag_size(ft_strlen(new), d);
	ft_flag_width(d);
	ft_flag_pre(new, d);
	d->rtn += ft_strlen(new);
	ft_putstr(new);
	ft_flag_width(d);
	free(new);
}