/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:09:11 by yozden            #+#    #+#             */
/*   Updated: 2023/04/12 16:20:07 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 1 || power < 1 || power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}
