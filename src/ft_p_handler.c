/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:03:35 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/22 08:36:58 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_p_handler(va_list list, t_data *d)
{
	ft_check_flags(d);
	if(d->h == 1)
		ft_quit("\nERROR: Invalid Modifier for 'c'");
	else if (d->h == 2)
		ft_quit("\nERROR: Invalid Modifier for 'c'");
	else if (d->l == 1)
		ft_quit("\nERROR: Invalid Modifier for 'c'");
	else if (d->l == 2)
		ft_quit("\nERROR: Invalid Modifier for 'c'");
	else if (d->j == 1)
		ft_quit("\nERROR: Invalid Modifier for 'c'");
	else if (d->z == 1)
		ft_quit("\nERROR: Invalid Modifier for 'c'");
	else
		ft_print_p(va_arg(list, void *), d);
}