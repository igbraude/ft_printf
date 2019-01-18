/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_conv_index.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/11 16:08:11 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 18:58:26 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int		check_conv_index_none2(t_funct *args, const char **format)
{
	int i;

	i = -1;
	if (ft_strcmp(args->conv, "..") == 0)
	{
		if (args->flag_aq_aq == 0)
			args->size -= 1;
		if (**format == '%')
		{
			while (++i < args->size && args->flag_min == 0)
			{
				ft_putchar(' ');
				args->charprint += 1;
			}
			ft_putchar('%');
			args->charprint += 1;
			while (++i < args->size && args->flag_min == 1)
			{
				ft_putchar(' ');
				args->charprint += 1;
			}
		}
		return (0);
	}
	return (1);
}

void	check_conv_index_none(t_funct *args, const char **format)
{
	if (!(check_conv_index_none2(args, format)))
		return ;
	if (ft_strcmp(args->conv, "..c") == 0)
		get_c_conv(args);
	if (ft_strcmp(args->conv, "..d") == 0)
		get_d_conv(args);
	if (ft_strcmp(args->conv, "..i") == 0)
		get_d_conv(args);
	if (ft_strcmp(args->conv, "..s") == 0)
		get_s_conv(args);
	if (ft_strcmp(args->conv, "..o") == 0)
		get_o_conv(args);
	if (ft_strcmp(args->conv, "..x") == 0)
		get_x_conv(args);
	if (ft_strcmp(args->conv, "..X") == 0)
		get_x_maj_conv(args);
	if (ft_strcmp(args->conv, "..u") == 0)
		get_u_conv(args);
	if (ft_strcmp(args->conv, "..f") == 0)
		get_f_conv(args);
	if (ft_strcmp(args->conv, "..p") == 0)
		get_p_conv(args);
	check_conv_index_h(args);
}

void	check_conv_index_h(t_funct *args)
{
	if (ft_strcmp(args->conv, "hhd") == 0)
		get_d_conv(args);
	if (ft_strcmp(args->conv, "hhi") == 0)
		get_d_conv(args);
	if (ft_strcmp(args->conv, "hho") == 0)
		get_o_conv(args);
	if (ft_strcmp(args->conv, "hhx") == 0)
		get_x_conv(args);
	if (ft_strcmp(args->conv, "hhX") == 0)
		get_x_maj_conv(args);
	if (ft_strcmp(args->conv, "hhu") == 0)
		get_u_conv(args);
	if (ft_strcmp(args->conv, ".hd") == 0)
		get_d_conv(args);
	if (ft_strcmp(args->conv, ".hi") == 0)
		get_i_conv(args);
	if (ft_strcmp(args->conv, ".ho") == 0)
		get_o_conv(args);
	if (ft_strcmp(args->conv, ".hx") == 0)
		get_x_conv(args);
	if (ft_strcmp(args->conv, ".hX") == 0)
		get_x_maj_conv(args);
	if (ft_strcmp(args->conv, ".hu") == 0)
		get_u_conv(args);
	check_conv_index_l(args);
}

void	check_conv_index_ll(t_funct *args)
{
	if (ft_strcmp(args->conv, "lld") == 0)
		get_lld_conv(args);
	if (ft_strcmp(args->conv, "lli") == 0)
		get_lld_conv(args);
	if (ft_strcmp(args->conv, "llo") == 0)
		get_llo_conv(args);
	if (ft_strcmp(args->conv, "llx") == 0)
		get_llx_conv(args);
	if (ft_strcmp(args->conv, "llX") == 0)
		get_llx_maj_conv(args);
	if (ft_strcmp(args->conv, "llu") == 0)
		get_llu_conv(args);
}

void	check_conv_index_l(t_funct *args)
{
	if (ft_strcmp(args->conv, ".lc") == 0)
		get_c_conv(args);
	if (ft_strcmp(args->conv, ".ld") == 0)
		get_ld_conv(args);
	if (ft_strcmp(args->conv, ".li") == 0)
		get_ld_conv(args);
	if (ft_strcmp(args->conv, ".lo") == 0)
		get_lo_conv(args);
	if (ft_strcmp(args->conv, ".lx") == 0)
		get_lx_conv(args);
	if (ft_strcmp(args->conv, ".lX") == 0)
		get_lx_maj_conv(args);
	if (ft_strcmp(args->conv, ".lu") == 0)
		get_lu_conv(args);
	check_conv_index_ll(args);
	if (ft_strcmp(args->conv, ".lf") == 0)
		get_lf_conv(args);
	if (ft_strcmp(args->conv, ".Lf") == 0)
		get_Lf_conv(args);
}
