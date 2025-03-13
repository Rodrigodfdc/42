/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodde-fr <rodde-fr@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 04:22:42 by rodde-fr          #+#    #+#             */
/*   Updated: 2025/03/08 22:02:55 by rodde-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && new_word)
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && !new_word)
		{
			str[i] += 32;
		}
		new_word = !(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= '0' && str[i] <= '9');
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "SALUT, coSDSDent tu vas ? 42M$ots cinquante+et+un";	
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
