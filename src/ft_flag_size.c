/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:16:06 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/25 11:26:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_size(char *str, t_data *d)
{
	char		c;
	d->fw -= ft_strlen(str);
	d->pw -= ft_strlen(str);
	c = d->conv;
	if (d->space == 1 && d->plus == 0)
		d->fw--;
	if (d->plus != 0 && (c == 'i' || c == 'd'))
		d->fw--;
	if (d->sharp == 1 && c == 'o' && d->pw <= 0)
		d->fw--;
	if (d->pre == 1 && d->pw > 0 && (c == 'i' || c == 'd'))
		d->fw -= d->pw;
	else if (d->sharp == 1 && (c == 'x' || c == 'X') && str[0] != '0')
		d->fw -= 2;
}