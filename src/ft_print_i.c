/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:47:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 14:20:36 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_i(intmax_t n, t_data *d)
{
	char	*new;

	new = ft_lltoa_flag(n);
	d->rtn += ft_strlen(new);
	ft_check_width(new, d);
	if (d->minus == 1)
		ft_print_width(d);
	ft_putstr(new);
	free(new);
}