/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/06 09:05:49 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/18 19:03:48 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>

typedef struct		s_funct
{
	va_list			va;
	int				neg;
	int				charprint;
	int				precision;
	int				precision2;
	int				size;
	int				size2;
	int				swap;
	int				flag_sharp;
	int				flag_min;
	int				flag_add;
	int				 flag_add2;
	int				flag_aq_aq;
	int				flag_aq_aq2;
	int				flag_0;
	char			*conv;
}					t_funct;

int		ft_printf(const char *format, ...);

/*
**		Fonction de conversion.(sans flag) + affichage
*/

void	ft_index_conv_funct(t_funct *args, const char **format);
int		get_d_conv(t_funct *args);
int		get_i_conv(t_funct *args);
int		get_s_conv(t_funct *args);
int		get_c_conv(t_funct *args);
int		get_u_conv(t_funct *args);
int		get_o_conv(t_funct *args);
int		get_x_conv(t_funct *args);
int		get_x_maj_conv(t_funct *args);
int		get_f_conv(t_funct *args);
int		get_p_conv(t_funct *args);

/*
**		Fonction modification de longueur
*/

void	ft_index_modif_len_flag_funct(t_funct *args, const char **format);
int		ft_index_modif_len_flag_funct2(t_funct *args, const char **format);
int		ft_index_modif_len_flag_funct3(t_funct *args, const char **format);
int		get_lc_conv(t_funct *args);
int		get_ls_conv(t_funct *args);
int		get_ld_conv(t_funct *args);
int		get_lu_conv(t_funct *args);
int		get_lo_conv(t_funct *args);
int		get_lx_conv(t_funct *args);
int		get_lx_maj_conv(t_funct *args);
int		get_lld_conv(t_funct *args);
int		get_llu_conv(t_funct *args);
int		get_llo_conv(t_funct *args);
int		get_llx_conv(t_funct *args);
int		get_llx_maj_conv(t_funct *args);
int		get_lf_conv(t_funct *args);
int		get_Lf_conv(t_funct *args);

/*
**		Fonction avec Flag
*/

void	ft_index_flag_funct(t_funct *args, const char **format);
void	ft_check_flag_add(t_funct *args);
void	ft_check_flag_aq_aq(t_funct *args);
void	ft_check_flag_sharp(t_funct *args, char *str);
void	ft_go_to_check_flag(t_funct *args, char *str);
void	ft_go_to_check_flag_unsigned(t_funct *args, char *str);
void	ft_go_to_check_flag_x_maj(t_funct *args, char *str);
void	ft_go_to_check_flag_x(t_funct *args, char *str);
void	ft_go_to_check_flag_o(t_funct *args, char *str);
void	ft_go_to_check_flag_f(t_funct *args, char *str, double i);
void	ft_go_to_check_flag_lf(t_funct *args, char *str, double i);
void	ft_go_to_check_flag_Lf(t_funct *args, char *str, long double i);

/*
**		Fonction pour les precision et size
*/

void	ft_index_precision_funct(t_funct *args, const char **format);
void	ft_index_precision_funct2(t_funct *args, const char **format);
void	ft_size_print(t_funct *args, char *str);
void	ft_precision_print(t_funct *args, char *str);
void	ft_no_precision_n_size(t_funct *args, char *str);
void	parsing_size_n_precision_neg(t_funct *args);
void	parsing_size_n_precision_for_x(t_funct *args, char *str);

/*
**		Autres
*/

void	ft_reset_struct(t_funct *args);
void	get_conv_string(t_funct *args, char *c);
void	check_conv_index_h(t_funct *args);
void	check_conv_index_l(t_funct *args);
void	check_conv_index_none(t_funct *args, const char **format);
void				ft_charprint_add(t_funct *args, char *str);
unsigned int		ft_negative_int(int n, unsigned int n2, t_funct *args);
unsigned long		ft_negative_long(long n, unsigned long n2, t_funct *args);
unsigned long long	ft_negative_long_long(long long n, unsigned long long n2, t_funct *args);
void				ft_negative_double(t_funct *args);

#endif
