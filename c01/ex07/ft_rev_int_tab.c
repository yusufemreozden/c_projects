/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:39:59 by yozden            #+#    #+#             */
/*   Updated: 2023/04/01 16:57:25 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;		
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
