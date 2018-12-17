/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_check_var.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 13:29:10 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 18:42:30 by igbraude    ###    #+. /#+    ###.fr     */
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
	if (str[0] == '0')
		return ;
	ft_putchar ('0');
	args->charprint += 1;
	if (args->conv[2] == 'x')
	{
		args->charprint += 1;
		ft_putchar('x');
	}
	if (args->conv[2] == 'X')
	{
		args->charprint += 1;
		ft_putchar('X');
	}
}
