/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:19:23 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 14:26:59 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_check_width(char *str, t_data *d)
{
	d->fw -= ft_strlen(str);
	if (d->plus != 0)
		d->fw--;
	if (d->space == 1)
}