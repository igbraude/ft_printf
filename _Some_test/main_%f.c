/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_%f.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/14 13:52:34 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/11 17:46:56 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int main ()
{
	double floa = 5.51;
	double f = 975.654;
	long double lf = 3.1485;
	double fneg = -3.14;
	/*
	**		Tout les test avec float
	*/

	dprintf(1, "dtoa : %s\n", ft_dtoa(lf, 9));
	ft_putstr(ft_ldtoa(lf,10));
	dprintf (1, "\n\n\033[35m2- Some test with %%f :\n");

	/*
	**			%o only
	*/

	dprintf (1, "\n%%f test :\n");

	dprintf(1, "real %%f: %f|\n", f);
	ft_printf("Mine %%f: %f|\n", f);

	dprintf(1, "real %%#f: %#f|\n", f);
	ft_printf("Mine %%#f: %#f|\n", f);

	dprintf(1, "real %%#0f: %#0f|\n", f);
	ft_printf("Mine %%#0f: %#0f|\n", f);

	dprintf(1, "real %%#5f: %#15f|\n", f);
	ft_printf("Mine %%#5f: %#15f|\n", f);

	dprintf(1, "real %%#.5f: %#.5f|\n", f);
	ft_printf("Mine %%#.5f: %#.5f|\n", f);

	dprintf(1, "real %%#-f: %#-f|\n", f);
	ft_printf("Mine %%#-f: %#-f|\n", f);

	dprintf(1, "real %%#-5f: %-#5f|\n", f);
	ft_printf("Mine %%#-5f: %#-5f|\n", f);

	dprintf(1, "real %%#-.5f: %#-.5f|\n", f);
	ft_printf("Mine %%#-.5f: %#-.5f|\n", f);

	dprintf(1, "real %%#-9.2f: %#-9.2f|\n", f);
	ft_printf("Mine %%#-9.2f: %#-9.2f|\n", f);

	dprintf(1, "real %%#-2.9f: %#-2.9f|\n", f);
	ft_printf("Mine %%#-2.9f: %#-2.9f|\n", f);

	dprintf(1, "real %%#-5.0f: %#-5.0f|\n", f);
	ft_printf("Mine %%#-5.0f: %#-5.0f|\n", f);

	dprintf(1, "real %%f: %f|\n", (double)0);
	ft_printf("Mine %%f: %f|\n", (double)0);

	dprintf(1, "real %%#-3.0f: %#-3.0f|\n", (double)0);
	ft_printf("Mine %%#-3.0f: %#-3.0f|\n", (double)0);

	dprintf(1, "real %%#3.0f: %#0.3f|\n", (double)0);
	ft_printf("Mine %%#3.0f: %#0.3f|\n", (double)0);

	dprintf(1, "real %%0f: %0f|\n", f);
	ft_printf("Mine %%0f: %0f|\n", f);

	dprintf(1, "real %%0.12f: %0.12f|\n", f);
	ft_printf("Mine %%0.12f: %0.12f|\n", f);

	dprintf(1, "real %%+f: %+f|\n", f);
	ft_printf("Mine %%+f: %+f|\n", f);

	dprintf(1, "real %%+8.12f: %+8.12f|\n", f);
	ft_printf("Mine %%+8.12f: %+8.12f|\n", f);

	dprintf(1, "real %%+12.5f: %+12.5f|\n", f);
	ft_printf("Mine %%+12.5f: %+12.5f|\n", f);

	dprintf(1, "real %% f: % f|\n", f);
	ft_printf("Mine %% f: % f|\n", f);

	dprintf(1, "real %% 0f: % 0f|\n", f);
	ft_printf("Mine %% 0f: % 0f|\n", f);

	dprintf(1, "real %%# 0f: %# 0f|\n", f);
	ft_printf("Mine %%# 0f: %# 0f|\n", f);

	dprintf(1, "real %%# 15f: %# 15f|\n", f);
	ft_printf("Mine %%# 15f: %# 15f|\n", f);

	dprintf(1, "real %%# -15f: %# -15f|\n", f);
	ft_printf("Mine %%# -15f: %# -15f|\n", f);

	dprintf(1, "real %%# -f: %# -f|\n", f);
	ft_printf("Mine %%# -f: %# -f|\n", f);

	dprintf(1, "real %%# 8.15f: %# 8.12f|\n", f);
	ft_printf("Mine %%# 8.15f: %# 8.12f|\n", f);

	dprintf(1, "real %%# 8.15f: %# 8.5lf|\n", f);
	ft_printf("Mine %%# 8.15f: %# 8.5lf|\n", f);

	dprintf(1, "real %%8.5lf: %8.5lf|\n",f);
	ft_printf("Mine %%8.5lf: %8.5lf|\n", f);

	dprintf(1, "real %%Lf: %Lf|\n", lf);
	ft_printf("Mine %%Lf: %Lf|\n", lf);

	dprintf(1, "real %%#Lf: %#Lf|\n", lf);
	ft_printf("Mine %%#Lf: %#Lf|\n", lf);

	dprintf(1, "real %%#0Lf: %#0Lf|\n", lf);
	ft_printf("Mine %%#0Lf: %#0Lf|\n", lf);

	dprintf(1, "real %%#5Lf: %#15Lf|\n", lf);
	ft_printf("Mine %%#5Lf: %#15Lf|\n", lf);

	dprintf(1, "real %%#.5Lf: %#.5Lf|\n", lf);
	ft_printf("Mine %%#.5Lf: %#.5Lf|\n", lf);

	dprintf(1, "real %%#-Lf: %#-Lf|\n", lf);
	ft_printf("Mine %%#-Lf: %#-Lf|\n", lf);

	dprintf(1, "real %%#-5Lf: %-#5Lf|\n", lf);
	ft_printf("Mine %%#-5Lf: %#-5Lf|\n", lf);

	dprintf(1, "real %%#-.5Lf: %#-.5Lf|\n", lf);
	ft_printf("Mine %%#-.5Lf: %#-.5Lf|\n", lf);

	dprintf(1, "real %%#-9.2Lf: %#-9.2Lf|\n", lf);
	ft_printf("Mine %%#-9.2Lf: %#-9.2Lf|\n", lf);

	dprintf(1, "real %%#-2.9Lf: %#-2.9Lf|\n", lf);
	ft_printf("Mine %%#-2.9Lf: %#-2.9Lf|\n", lf);

	dprintf(1, "real %%#-5.0Lf: %#-5.0Lf|\n", lf);
	ft_printf("Mine %%#-5.0Lf: %#-5.0Lf|\n", lf);

	dprintf(1, "real %%Lf: %Lf|\n", (long double)0);
	ft_printf("Mine %%Lf: %Lf|\n", (long double)0);

	dprintf(1, "real %%#-3.0Lf: %#-3.0Lf|\n", (long double)0);
	ft_printf("Mine %%#-3.0Lf: %#-3.0Lf|\n", (long double)0);

	dprintf(1, "real %%#3.0Lf: %#0.3Lf|\n", (long double)0);
	ft_printf("Mine %%#3.0Lf: %#0.3Lf|\n", (long double)0);

	dprintf(1, "real %%0Lf: %0Lf|\n", lf);
	ft_printf("Mine %%0Lf: %0Lf|\n", lf);

	dprintf(1, "real %%0.12Lf: %0.12Lf|\n", lf);
	ft_printf("Mine %%0.12Lf: %0.12Lf|\n", lf);

	dprintf(1, "real %%+Lf: %+Lf|\n", lf);
	ft_printf("Mine %%+Lf: %+Lf|\n", lf);

	dprintf(1, "real %%+8.12Lf: %+8.12Lf|\n", lf);
	ft_printf("Mine %%+8.12Lf: %+8.12Lf|\n", lf);

	dprintf(1, "real %%+12.5Lf: %+12.5Lf|\n",lf);
	ft_printf("Mine %%+12.5Lf: %+12.5Lf|\n", lf);

	dprintf(1, "real %% Lf: % Lf|\n", lf);
	ft_printf("Mine %% Lf: % Lf|\n", lf);

	dprintf(1, "real %% 0Lf: % 0Lf|\n", lf);
	ft_printf("Mine %% 0Lf: % 0Lf|\n", lf);

	dprintf(1, "real %%# 0Lf: %# 0Lf|\n", lf);
	ft_printf("Mine %%# 0Lf: %# 0Lf|\n", lf);

	dprintf(1, "real %%# 15Lf: %# 15Lf|\n", lf);
	ft_printf("Mine %%# 15Lf: %# 15Lf|\n", lf);

	dprintf(1, "real %%# -15Lf: %# -15Lf|\n", lf);
	ft_printf("Mine %%# -15Lf: %# -15Lf|\n", lf);

	dprintf(1, "real %%# -Lf: %# -Lf|\n", lf);
	ft_printf("Mine %%# -Lf: %# -Lf|\n", lf);

	dprintf(1, "real %%# 8.15Lf: %# 8.12Lf|\n", lf);
	ft_printf("Mine %%# 8.15Lf: %# 8.12Lf|\n", lf);

	dprintf(1, "real %%# 8.15Lf: %# 8.5Lf|\n", lf);
	ft_printf("Mine %%# 8.15Lf: %# 8.5Lf|\n", lf);

	dprintf(1, "real %%8.5Lf: %8.5Lf|\n", lf);
	ft_printf("Mine %%8.5Lf: %8.5Lf|\n", lf);

	dprintf(1, "real %%Lf: %Lf|\n", (long double)fneg);
	ft_printf("Mine %%Lf: %Lf|\n", (long double)fneg);
}
