/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:09:57 by yozden            #+#    #+#             */
/*   Updated: 2023/04/11 10:19:29 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int arc, char **arv)
{
	int	i;
	int	j;

	j = 1;
	while (j < arc)
	{
		i = 0;
		while (arv[j][i] != '\0')
		{
			ft_putchar(arv[j][i]);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
