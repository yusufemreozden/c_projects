/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:01:22 by yozden            #+#    #+#             */
/*   Updated: 2023/04/11 10:07:39 by yozden           ###   ########.tr       */
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

	i = 0;
	while (arv[0][i] != '\0' && arc)
	{
		ft_putchar(arv[0][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
