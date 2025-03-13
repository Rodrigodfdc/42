/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:55:27 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/02/26 23:31:46 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		a;
	char	chr;

	a = 0;
	while (a <= 9)
	{
		chr = a + '0';
		write(1, &chr, 1);
		a++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
