/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:18:05 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/03 19:10:12 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 7;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	printf("The result is: %d ", div);
	printf("The mod is: %d ", mod);
	return (0);
}*/
