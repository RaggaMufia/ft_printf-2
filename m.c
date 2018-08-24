/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 08:42:32 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/24 10:53:55 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include <limits.h>

int		main(void)
{
	int				i = -42;
	long			l = 654354545;
	unsigned long 	ul =154465469;
	char			c = 'a';
	wint_t			wc = L'¶';
	char			*s = "STRING";
	wchar_t			ws = L"¶¶¶STRING¶¶¶";

	ft_printf("%%%%%20d,%c,%o,%u,%lx,%p,%s,%D,%O,%X,%U,%C%S", l, c, i, i, ul, &c, s, l, l, ul, ul, wc, ws);
	printf("\n%%%%%20d,%c,%o,%u,%lx,%p,%s,%D,%O,%X,%U,%C%S", l, c, i, i, ul, &c, s, l, l, ul, ul, wc, ws);
}