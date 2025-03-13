/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 16:48:39 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/03 18:27:17 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	char	c;

	while (size > 0)
	{
		size --;
		c = tab[size] + '0';
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	int	arrayInt[] = {9,8,7,6,5,4,3,2,1};
	int	*tab;
	int	size;

	size = (sizeof(arrayInt)/sizeof(arrayInt[0]));
 
	tab = arrayInt;
	ft_rev_int_tab(tab, size);

	return (0);
}*/
