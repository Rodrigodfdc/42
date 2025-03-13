/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:51:31 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/03 18:48:38 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		write(1, &str[cont], 1);
		cont ++;
	}
}
/*int	main(void)
{
	char array42[] = "Hola 42";
	char	*str;
	int		size;
 
	str = array42;
	ft_putstr(str);

	return (0);
}*/
