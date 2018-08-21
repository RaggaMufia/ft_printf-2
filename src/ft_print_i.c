/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 13:47:42 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/19 14:35:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_print_i(long long n, t_data *d)
{
	char	*new;

	new = ft_ltoa_base(n, 10);
	if (ft_strlen(new) < d->pw)
		d->pw -= ft_strlen(new);
	if (d->zero == 1 && d->pre == 0 && d->minus == 0)
	
	free(new);
}