/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:29:04 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/10 13:31:03 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_check(char c)
{
	if (c == '\0')
	{
		return (1);
	}
	else if (c < '0' || c > '9')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	status;

	i = 0;
	status = 1;
	while (str[i] && status)
	{
		status = ft_check(str[i]);
		i++;
	}
	return (status);
}

int	main(void)
{
	char	str[] = "1$%$&%$243";

	ft_str_is_numeric(str);
	printf("value: %d", ft_str_is_numeric(str));
	return (0);
}
