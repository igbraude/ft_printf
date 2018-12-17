/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main_%f.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: igbraude <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/12/14 13:52:34 by igbraude     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/15 15:18:44 by igbraude    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int main ()
{
	double floa = 5.51;
	double f = 625.65495594;
	long double lf = 987654.154;
	/*
	**		Tout les test avec float
	*/
	dprintf(1, "dtoa : %s\n", ft_dtoa(floa, 16));

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

	dprintf(1, "real %%# 0.15f: %# 8.15f|\n", f);
	ft_printf("Mine %%# 0.15f: %# 8.15f|\n", f);
}
