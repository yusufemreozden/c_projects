/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:20:46 by yozden            #+#    #+#             */
/*   Updated: 2023/04/11 10:24:54 by yozden           ###   ########.tr       */
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

	i = arc - 1;
	while (i > 0)
	{
		j = 0;
		while (arv[i][j] != '\0' && arc)
		{
			ft_putchar(arv[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
