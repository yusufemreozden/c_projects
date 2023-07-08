/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:24:37 by yozden            #+#    #+#             */
/*   Updated: 2023/04/12 11:56:52 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	while (power > 1)
	{
		r = r * nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (r);
}
