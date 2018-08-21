/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:10:17 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/19 14:18:04 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

size_t	ft_getlen(long long unsigned n,int base)
{
	size_t	i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

void		ft_iszero(char *new, long long unsigned n)
{
	if (n == 0)
		new[0] = '0';
}

char			*ft_ltoa(long long unsigned n, int	base)
{
	size_t				i;
	long long unsigned	tmp;
	long long			sign;
	char				*new;

	sign = 1;
	i = ft_getlen(n, base);
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		i++;
	}
	tmp = n;
	new = ft_strnew(i);
	ft_iszero(new, n);
	while (i--)
	{
		if (tmp % base >= 10)
			new[i] = (tmp % base) + 'a';
		else if (tmp % base < 10)
			new[i] = (tmp % base) + '0';
		tmp /= base;
	}
	if (sign == -1)
		new[0] = '-';
	return (new);
}
