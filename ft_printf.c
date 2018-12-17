/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/06 09:08:30 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/16 15:35:50 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

/*
**			Function to print char and find %. Return Booeliens
*/

int		ft_check_for_arg(t_funct *args, const char *format)
{
	int i;

	i = 0;
	while (*format != '%' && *format != '\0')
	{
		ft_putchar(*format);
		format++;
		args->charprint = args->charprint + 1;
	}
	if (*format == '%' && *(format + 1) == '%')
	{
		ft_putchar ('%');
		format += 2;
		ft_check_for_arg(args, format);
		args->charprint += 1;
	}
	else if (*format == '%' && *(format + 1) != '\0')
	{
		format += 1; // incrementation a ne pas oublier en fonction du nobmre d'argument
		//ft_index_modif_len_flag_funct(args, &format); // index des fonction pour conversion
		//	ft_index_conv_funct(args, &format); // index des fonction, check si besoin d'un retour
		
		ft_index_flag_funct(args, &format);
		format += 1;
		ft_reset_struct(args);
		ft_check_for_arg(args, format);

	}
	return (0);
}

int		ft_printf(const char *format, ...)
{
	t_funct		args;

	args.charprint = 0;
	args.precision = -1;
	args.size = -1;
	args.precision2 = -1;
	args.size2 = -1;
	args.flag_sharp = 0;
	args.flag_min = 0;
	args.flag_add = 0;
	args.flag_aq_aq = 0;
	args.flag_0 = 0;
	args.swap = 0;
	args.conv = "..";
	va_start(args.va, format);
	ft_check_for_arg(&args, format);
	va_end(args.va);
	return (args.charprint);
}
