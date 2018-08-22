/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:39:54 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/22 09:29:59 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

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
	d->rtn += ft_strlen(new);
	ft_putstr(new);
}