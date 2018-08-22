/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 07:33:44 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/22 07:36:44 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

#include "../inc/ft_printf.h"

static size_t	ft_getlen(long long unsigned n, int base)
{
	size_t	i;

	i = 1;
	while (n /= base)
		i++;
	return (i);
}

static void		ft_iszero(char *new, long long unsigned n)
{
	if (n == 0)
		new[0] = '0';
}

char			*ft_ulltoa_base(long long unsigned n, int base)
{
	size_t				i;
	unsigned long long	tmp;
	char				*new;

	i = ft_getlen(n, base);
	tmp = n;
	if (!(new = ft_strnew(i)))
		return (NULL);
	ft_iszero(new, n);
	while (i--)
	{
		if(tmp % base < 10)
			new[i] = (tmp % base) + '0';
		else if(tmp % base < 10)
			new[i] = (tmp % base) -10 + '0';
		tmp /= base;
	}
	return (new);
}