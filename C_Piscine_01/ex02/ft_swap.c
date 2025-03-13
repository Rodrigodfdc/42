/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:02:54 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/03 19:19:18 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_swap (&a, &b);
	printf("El valor de a es: %d ", a);
	printf("El valor de b es: %d ", b);
	return (0);
}*/
