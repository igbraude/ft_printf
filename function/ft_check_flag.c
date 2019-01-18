/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_var.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 13:29:10 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:30:04 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

void	ft_check_flag_aq_aq(t_funct *args)
{
	ft_putchar(' ');
	args->charprint += 1;
}

void	ft_check_flag_add(t_funct *args)
{
	ft_putchar('+');
	args->charprint += 1;
}

void	ft_check_flag_sharp(t_funct *args, char *str)
{
	if ((args->conv[2] != 'X' && args->conv[2] != 'x') || (str[0] == '0' &&
				args->precision2 != 0))
	{
		ft_putchar('0');
		args->charprint += 1;
	}
	if (args->conv[2] == 'x' && str[0] != '0')
	{
		ft_putchar('0');
		ft_putchar('x');
		args->charprint += 2;
		return ;
	}
	if (args->conv[2] == 'X' && str[0] != '0')
	{
		ft_putchar('0');
		ft_putchar('X');
		args->charprint += 2;
		return ;
	}
}
