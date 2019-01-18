/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_flag2.c                                 .::    .:/ .      .::   */
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

void	ft_go_to_check_flag(t_funct *args, char *str)
{
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->neg == 1)
	{
		ft_putchar('-');
		args->charprint += 1;
	}
	if (args->flag_0 == 1 && args->precision > 0 && args->size2 == -1 &&
			args->neg == 1 && args->flag_aq_aq2 == 0 && args->flag_add2 == 0 &&
			args->swap == 1)
		args->precision -= 1;
	if (args->flag_add == 1)
		ft_check_flag_add(args);
	ft_precision_print(args, str);
	if (str[0] != '0' || args->precision2 != 0)
	{
		args->charprint += (int)ft_strlen(str);
		ft_putstr(str);
	}
	if (args->flag_min == 1)
		ft_size_print(args, str);
}

void	ft_go_to_check_flag_unsigned(t_funct *args, char *str)
{
	if (str[0] == '0' && args->size2 > 0)
		args->size += 1;
	if (str[0] == '0' && args->precision2 > 0)
		args->precision += 1;
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_print(args, str);
	ft_precision_print(args, str);
	if (args->precision != 0)
	{
		args->charprint += (int)ft_strlen(str);
		ft_putstr(str);
	}
	if (args->flag_min == 1)
		ft_size_print(args, str);
}

void	ft_go_to_check_flag_o(t_funct *args, char *str)
{
	if (str[0] == '0' && args->size2 > 0)
		args->size += 1;
	if (str[0] == '0' && args->precision2 > 0)
		args->precision += 1;
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_print(args, str);
	args->charprint += (int)ft_strlen(str);
	if ((str[0] != '0' || args->precision2  != 0))
	{
		if (str[0] != '0' || args->flag_sharp == 0)
		{
			args->charprint += (int)ft_strlen(str);
			ft_putstr(str);
		}
	}
	if (args->flag_min == 1)
		ft_size_print(args, str);
}

void	ft_go_to_check_flag_x(t_funct *args, char *str)
{
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_print(args, str);
	if (str[0] != '0')
	{
		args->charprint += (int)ft_strlen(str);
		ft_putstr(str);
	}
	if ((ft_strcmp(args->conv, ".hx") == 0 || ft_strcmp(args->conv, "hhx") == 0
					|| ft_strcmp(args->conv, ".lx") == 0 ||
					ft_strcmp(args->conv, "llx") == 0
					|| ft_strcmp(args->conv, "..x") == 0) && args->size2 == -1
			&& args->precision2 == -1 && str[0] == '0' && args->flag_sharp == 0)
	{
		args->charprint += 1;
		ft_putchar('0');
	}
	if (args->flag_min == 1)
		ft_size_print(args, str);
}

void	ft_go_to_check_flag_x_maj(t_funct *args, char *str)
{
	if (args->flag_aq_aq == 1)
		ft_check_flag_aq_aq(args);
	if (args->flag_min == 0)
		ft_size_print(args, str);
	if (args->flag_sharp == 1)
		ft_check_flag_sharp(args, str);
	ft_precision_print(args, str);
	if (str[0] != '0')
	{
		args->charprint += (int)ft_strlen(str);
		ft_putstr(str);
	}
	if ((ft_strcmp(args->conv, ".hx") == 0 || ft_strcmp(args->conv, "hhx") == 0
				|| ft_strcmp(args->conv, ".lX") == 0 ||
				ft_strcmp(args->conv, "..X") == 0
				|| ft_strcmp(args->conv, "llX") == 0) && args->size2 == -1 &&
			args->precision2 == -1 && str[0] == '0' && args->flag_sharp == 0)
	{
		args->charprint += 1;
		ft_putchar('0');
	}
	if (args->flag_min == 1)
		ft_size_print(args, str);
}
