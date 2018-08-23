/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/23 09:12:14 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"
static void ft_use_flags_two(t_data *d)
{
	if (d->pre == 1 && d->pw > 0)
		while (d->pw-- > 0)
		{
			ft_putchar('0');
			d->fw--;
			d->rtn++;
		}
}

static void	ft_use_flags(t_data *d)
{
	if (d->minus == 0)
		ft_print_width(d);
	ft_use_flags_two(d);
}
void	ft_print_lx(unsigned long long n, t_data *d)
{
	char	*new;
	int		i;
	
	i = 0;
	new = ft_ulltoa_base(n, 16);
	while (new[i] != '\0')
	{
		new[i] = ft_toupper(new[i]);
		i++;
	}	
	d->pw -= ft_strlen(new);
	d->fw -= ft_strlen(new);
	d->rtn += ft_strlen(new);
	if (new[0] != '0' && d->sharp == 1)
	{
		d->rtn += 2;
		d->fw -= 2;
	}
	if (d->pw < d->fw && d->pw > 0 && d->minus == 0)
	{
		d->fw -= d->pw;
		ft_print_width(d);
	}
	if (new[0] != '0' && d->sharp == 1)
		ft_putstr("0X");
	ft_use_flags(d);
	ft_putstr(new);
	if (d->minus == 1)
		ft_print_width(d);
	free(new);
}