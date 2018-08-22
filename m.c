/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:42:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/22 09:14:46 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

int		main(void)
{
	int				i = 60;
	long			l = 654354545;
	unsigned long 	ul =154465469;
	char	c = 'a';
	char	*s = "STRING";

	ft_printf("%d,%c,%o,%u,%lx,%p,%s,%D,%O", i, c, i, i, ul, &c, s, l, l);
	printf("\n%d,%c,%o,%u,%lx,%p,%s,%D,%O", i, c, i, i, ul, &c, s, l, l);
}