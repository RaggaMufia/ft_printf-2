/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:47:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/23 07:34:27 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	ft_use_flags(char *str, t_data *d)
{
	if (d->plus == 1)
		ft_putchar('+');
	else if (d->plus == -1)
		ft_putchar('-');
	else if (d->space == 1 && d->plus == 0)
		ft_putchar(' ');
	d->rtn += 1;

}

void	ft_print_i(long long n, t_data *d)
{
	char	*new;

	ft_check_flags(d);
	if (n < 0)
		d->plus = -1;
	new = ft_lltoa(n);
	ft_use_flags(new, d);
	d->rtn += ft_strlen(new);
	ft_putstr(new);
	free(new);
}