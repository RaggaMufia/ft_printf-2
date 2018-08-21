/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 07:48:29 by cterblan          #+#    #+#             */
/*   Updated: 2018/08/19 14:08:51 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define FLAGS "hljz#0-+ ."
# define VALID "cCdDioOpsSuUxX"

# include "../lib/libft/inc/libft.h"
# include <stdarg.h>

typedef struct	s_data
{
	int			i;
	int			rtn;
	char		conv;
	int			h;
	int			l;
	int			j;
	int			z;
	int			sharp;
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			fw;
	int			pre;
	int			pw;
}				t_data;

int				ft_printf(char *str, ...);

void			ft_quit(char *str);
void			ft_check_conv(char *str, va_list list, t_data *d);
void			ft_rset_flag(t_data *d);
void			ft_set_flag(char *str, t_data *d);
void			ft_check_flags(t_data *d);

void			ft_print_loose(char *str, t_data *d);
void			ft_print_i(long long n, t_data *d);

#endif