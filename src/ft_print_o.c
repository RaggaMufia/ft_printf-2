/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 11:39:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

/*static void ft_sharp(char *new, t_data *d)
{
	if (d->sharp == 1 && new[0] != '0')
	{
		ft_putchar('0');
		d->rtn++;
		d->fw--;
	}
}
*/
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
	if (d->plus == 1)
		ft_putchar('+');
	else if (d->plus == -1)
		ft_putchar('-');
	else if (d->space == 1 && d->plus == 0)
		ft_putchar(' ');
	if (d->plus != 0 || d->space != 0)
		d->rtn++;
	if (d->minus == 0)
		ft_print_width(d);
	ft_use_flags_two(d);
}

void	ft_print_o(unsigned long long n, t_data *d)
{
	char	*new;

	new = ft_ulltoa_base(n, 8);
	d->pw -= ft_strlen(new);
	d->fw -= ft_strlen(new);
	if (d->pw < d->fw && d->pw > 0 && d->minus == 0)
	{
		d->fw -= d->pw;
		ft_print_width(d);
	}
	ft_use_flags(d);
	d->rtn += ft_strlen(new);
	ft_putstr(new);
	free(new);
}