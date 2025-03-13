/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:24:30 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/03 18:59:23 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*int	main(void)
{

	int	a;
	int	b;
	
	a = 7;
	b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("El valor de la division es: %d ", a);
	printf("El valor del resto es: %d ", b );

	return (0);
}*/
