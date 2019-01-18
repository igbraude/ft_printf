/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_parsing_function_struct2.c                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/15 19:17:26 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/15 19:28:44 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		ft_index_modif_len_flag_funct2(t_funct *args, const char **format)
{
	if (**format == 'l' && *(*format + 1) == 'l')
	{
		*format += 2;
		args->conv = "ll";
		ft_index_conv_funct(args, format);
		return (0);
	}
	if (**format == 'l')
	{
		*format += 1;
		if (**format == 'f')
		{
			args->conv = "lf";
			get_lf_conv(args);
			ft_index_conv_funct(args, format);
			return (0);
		}
		args->conv = ".l";
		ft_index_conv_funct(args, format);
		return (0);
	}
	return (1);
}

int		ft_index_modif_len_flag_funct3(t_funct *args, const char **format)
{
	if (**format == 'L')
	{
		*format += 1;
		if (**format == 'f')
		{
			args->conv = "Lf";
			get_lf_conv(args);
			ft_index_conv_funct(args, format);
			return (0);
		}
		args->conv = ".L";
	}
	return (1);
}

void	ft_index_precision_funct2(t_funct *args, const char **format)
{
	if (args->size2 != -1 && args->precision2 != -1 && **format != 's')
		args->size = args->size - args->precision;
	if (args->flag_add == 1)
		args->size -= 1;
	if (args->flag_aq_aq == 1 && args->precision2 != 0)
		args->size -= 1;
	if (args->flag_0 == 1 && args->precision2 == -1)
	{
		args->swap = 1;
		ft_swap(&args->precision2, &args->size2);
		ft_swap(&args->precision, &args->size);
	}
	if (args->flag_sharp == 1)
		args->precision -= 1;
	if (args->flag_sharp == 1 && args->precision2 <= 0)
		args->size -= 1;
}
