/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:09:43 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/19 14:26:17 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_handl_conv(va_list list, t_data *d)
{
	if (d->conv == 'i' || d->conv == 'd')
		ft_print_i(va_arg(list, long long), d);
}

void	ft_check_conv(char *str, va_list list, t_data *d)
{
	ft_rset_flag(d);
	while (str[d->i] != '\0' && !(ft_iscfound(VALID,str[d->i])))
	{
		if (ft_iscfound(FLAGS,str[d->i]))
			ft_set_flag(str, d);
		else if (d->fw < ft_atoi(&str[d->i]) && (!(ft_isdigit(str[d->i - 1])||
			str[d->i - 1] == '0')) && str[d->i -1] != '.')
			d->fw = ft_atoi(&str[d->i]);
		else if (str[d->i - 1] == '.')
			d->pw = ft_atoi(&str[d->i]);
		d->i++;
	}
	if (ft_iscfound(VALID,str[d->i]))
	{
		d->conv = str[d->i++];
		ft_handl_conv(list, d);
	}
	else
		ft_quit("\nERROR: Invalid Conversion Operator");
	printf("\nrtn = %i\ni|%i| h|%i| l|%i| j|%i| z|%i| #|%i| 0|%i| -|%i| +|%i| sp|%i| fw|%i| pre|%i| pw|%i| conv|%c|\n",d->rtn, d->i, d->h, d->l, d->j, d->z, d->sharp, d->zero, d->minus, d->plus, d->space, d->fw, d->pre, d->pw, d->conv);
	fflush(stdout);
}