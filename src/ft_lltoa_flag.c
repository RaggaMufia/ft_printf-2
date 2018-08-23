/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:14:38 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/23 10:48:11 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static size_t	ft_getlen(intmax_t n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

static void		ft_iszero(char *new, intmax_t n)
{
	if (n == 0)
		new[0] = '0';
}

char			*ft_lltoa_flag(intmax_t n)
{
	size_t				i;
	uintmax_t	tmp;
	char				*new;

	i = ft_getlen(n);
	if (n < 0)
		n *= -1;
	tmp = n;
	if (!(new = ft_strnew(i)))
		return (NULL);
	ft_iszero(new, n);
	while (i--)
	{
		new[i] = (tmp % 10) + '0';
		tmp /= 10;
	}
	return (new);
}
