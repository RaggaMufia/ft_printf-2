/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:47:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/22 12:14:21 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_i(long long n, t_data *d)
{
	char	*new;

	ft_check_flags(d);
	new = ft_lltoa(n);
	d->rtn += ft_strlen(new);
	ft_putstr(new);
	free(new);
}