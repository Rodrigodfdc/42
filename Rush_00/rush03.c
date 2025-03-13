/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ferperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:37:30 by ferperez          #+#    #+#             */
/*   Updated: 2025/02/22 13:37:30 by ferperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_char(int col, int row, int x, int y)
{
	if ((col == 0 && row == 0) || (col == 0 && row == y - 1))
	{
		ft_putchar('A');
	}
	else if ((col == x - 1 && row == 0) || (col == x - 1 && row == y - 1))
	{
		ft_putchar('C');
	}
	else if (col == 0 || row == 0 || col == x - 1 || row == y - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (row <= y - 1)
	{
		col = 0;
		while (col <= x - 1)
		{
			write_char(col, row, x, y);
			if (col == x - 1)
			{
				write(1, "\n", sizeof(char));
			}
			col++;
		}
		row++;
	}
}
