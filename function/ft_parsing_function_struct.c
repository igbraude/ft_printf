/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   function_index.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/08 14:04:31 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:53:55 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

/*
**		Fonction parsing a renommer
*/

void	ft_index_conv_funct(t_funct *args, const char **format)
{
	if (**format == 'c')
		get_conv_string(args, "c");
	if (**format == 's')
		get_conv_string(args, "s");
	if (**format == 'd')
		get_conv_string(args, "d");
	if (**format == 'i')
		get_conv_string(args, "i");
	if (**format == 'u')
		get_conv_string(args, "u");
	if (**format == 'o')
		get_conv_string(args, "o");
	if (**format == 'x')
		get_conv_string(args, "x");
	if (**format == 'X')
		get_conv_string(args, "X");
	if (**format == 'p')
		get_conv_string(args, "p");
	if (**format == 'f')
		get_conv_string(args, "f");
	check_conv_index_none(args, format);
}

void	ft_index_modif_len_flag_funct(t_funct *args, const char **format)
{
	if (**format == 'h' && *(*format + 1) == 'h')
	{
		*format += 2;
		args->conv = "hh";
		ft_index_conv_funct(args, format);
		return ;
	}
	if (**format == 'h')
	{
		*format += 1;
		args->conv = ".h";
		ft_index_conv_funct(args, format);
		return ;
	}
	if (!(ft_index_modif_len_flag_funct2(args, format)))
		return ;
	if (!(ft_index_modif_len_flag_funct3(args, format)))
		return ;
	ft_index_conv_funct(args, format);
}

void	ft_index_flag_funct(t_funct *args, const char **format)
{
	while (**format == ' ' || **format == '-' || **format == '+' ||
			**format == '#' || **format == '0')
	{
		if (**format == ' ')
			args->flag_aq_aq = 1;
		if (**format == '-')
			args->flag_min = 1;
		if (**format == '+')
			args->flag_add = 1;
		if (**format == '#')
			args->flag_sharp = 1;
		if (**format == '0')
			args->flag_0 = 1;
		*format += 1;
	}
	if (args->flag_add == 1)
		args->flag_add2 = 1;
	if (args->flag_aq_aq == 1)
		args->flag_aq_aq2 = 1;
	if (args->flag_min == 1)
		args->flag_0 = 0;
	if (args->flag_add == 1)
		args->flag_aq_aq = 0;
	ft_index_precision_funct(args, format);
	ft_index_modif_len_flag_funct(args, format);
}

void	ft_index_precision_funct(t_funct *args, const char **format)
{
	int i;

	if (**format <= '9' && **format >= '0')
	{
		i = ft_atoi(*format);
		args->size2 = (int)i;
		args->size = args->size2;
		*format += ft_len_i(i, 10);
	}
	if (**format == '.')
	{
		*format += 1;
		i = ft_atoi(*format);
		args->precision2 = (int)i;
		args->precision = args->precision2;
		if (**format <= '9' && **format >= '0')
			*format += ft_len_i(i, 10);
		else
			args->precision2 = 0;
	}
	ft_index_precision_funct2(args, format);
}
