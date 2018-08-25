/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 07:57:09 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 12:47:25 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_ls(wchar_t *ws, t_data *d)
{
	
	if (ws)
	{
		ft_flag_size(ft_wstrlen(ws), d);
		ft_flag_width(d);
		d->rtn += ft_putwstr(ws);
		ft_flag_width(d);
	}
	else
		d->rtn += ft_putwstr(L"(null)");
}