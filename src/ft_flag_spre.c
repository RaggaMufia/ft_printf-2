/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_spre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 10:59:52 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/27 07:28:06 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_flag_spre(char **str, t_data *d)
{
	if (*str && d->conv == 's' && d->pw < (int)ft_strlen(*str))
	{
		*str = ft_strsub(*str, 0, d->pw);
	}
	else if (!*str && d->conv == 's' && d->pw < 5)
	{
		*str = ft_strsub("(null)", 0, d->pw);
	}
}
