/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:42:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 07:47:40 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

int		main(void)
{
	int				i = 60;
	long			l = 654354545;
	unsigned long 	ul =154465469;
	char			c = 'a';
	wint_t			wc = L'¶';
	char			*s = "STRING";

	ft_printf("%%%%%ld,%c,%o,%u,%lx,%p,%s,%D,%O,%X,%U,%lc", l, c, i, i, ul, &c, s, l, l, ul, ul, wc);
	printf("\n%%%%%ld,%c,%o,%u,%lx,%p,%s,%D,%O,%X,%U,%lc", l, c, i, i, ul, &c, s, l, l, ul, ul, wc);
}