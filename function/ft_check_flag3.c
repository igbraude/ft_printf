/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_flag3.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/14 16:48:14 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 19:11:04 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_go_to_check_flag_f(t_funct *args, char *str, double i)
{
	if(args->flag_sharp == 1 && args->precision2 == -1 && args->size2 > 0 && args->flag_min == 0 && args->flag_aq_aq == 0)
		args->size -= 1;
	if (args->flag_min == 1)
		args->size += 1;
	if (args->flag_aq_aq == 1)
		args->size -= 1;
	if (args->size2 > 0 && args->precision2 < 0)
		args->size += 1;
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->precision2 != -1)
	{
		if (args->flag_sharp == 1 && args->size2 > (int)ft_len_ld(i,args->precision2))
			args->size -= 1;
	}
	else if (args->precision2 == -1)
	{
		if (args->flag_sharp == 1 && args->size > (int)ft_len_ld(i, 6))
			args->size -= 1;
	}
	if (i < 0)
		ft_putchar ('-');
	ft_putstr(str);
	if (args->precision2 == 0)
		ft_putchar ('.');
	if (args->flag_min == 1)
		ft_size_print(args, str);
}

void	ft_go_to_check_flag_lf(t_funct *args, char *str, double i)
{
	if(args->flag_sharp == 1 && args->precision2 == -1 && args->size2 > 0 && args->flag_min == 0 && args->flag_aq_aq == 0)
		args->size -= 1;
	if (args->flag_min == 1)
		args->size += 1;
	if (args->flag_aq_aq == 1)
		args->size -= 1;
	if (args->size2 > 0 && args->precision2 < 0)
		args->size += 1;
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->precision2 != -1)
	{
		if (args->flag_sharp == 1 && args->size2 > (int)ft_len_ld(i,args->precision2))
			args->size -= 1;
	}
	else if (args->precision2 == -1)
	{
		if (args->flag_sharp == 1 && args->size > (int)ft_len_ld(i, 6))
			args->size -= 1;
	}
	if (i < 0)
		ft_putchar ('-');
	ft_putstr(str);
	if (args->precision2 == 0)
		ft_putchar ('.');
	if (args->flag_min == 1)
		ft_size_print(args, str);

}

void	ft_go_to_check_flag_Lf(t_funct *args, char *str, long double i)
{
	if(args->flag_sharp == 1 && args->precision2 == -1 && args->size2 > 0 && args->flag_min == 0 && args->flag_min == 0)
		args->size -= 1;
	if (args->flag_min == 1)
		args->size += 1;
	if (args->flag_aq_aq == 1)
		args->size -= 1;
	if (args->size2 > 0 && args->precision2 < 0)
		args->size += 1;
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->precision2 != -1)
	{
		if (args->flag_sharp == 1 && args->size2 > (int)ft_len_ld(i,args->precision2))
			args->size -= 1;
	}
	else if (args->precision2 == -1)
	{
		if (args->flag_sharp == 1 && args->size > (int)ft_len_ld(i, 6))
			args->size -= 1;
	}
	if (i < 0)
		ft_putchar ('-');
	ft_putstr(str);
	if (args->precision2 == 0)
		ft_putchar ('.');
	if (args->flag_min == 1)
		ft_size_print(args, str);
}
