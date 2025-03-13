/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:56:43 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/13 19:30:08 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i++;
	}
}

char	*ft_order_array(char **argv, int i, int j)
{
	char	*compare;
	int		k;

	k = 0;
	while (argv[i][k] != '\0' && argv[j][k] != '\0')
	{
		if (argv[i][k] > argv [j][k] != '\0')
		{
			compare = argv[i];
			argv[i] = argv[j];
			argv[j] = compare;
		}
		k++;
	}
	return (*argv);
}

char	*ft_order(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			ft_order_array(argv, i, j);
			j++;
		}
		i++;
	}
	return (*argv);
}

int	main(int argc, char *argv[])
{
	ft_order(argc, argv);
	ft_write(argv);
	return (0);
}
