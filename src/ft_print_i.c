/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:47:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 11:26:16 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_i(intmax_t n, t_data *d)
{
	char	*new;

	new = ft_lltoa_flag(n);
	if (n < 0)
		d->plus = -1;
	d->pw -= ft_strlen(new);
	ft_flag_size(new, d);
	ft_flag_width(d);
	ft_flag_plus(d);
	ft_flag_space(d);
	ft_flag_pre(d);
	d->rtn += ft_strlen(new);
	ft_putstr(new);
	ft_flag_width(d);
	free(new);
}