/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 17:19:26 by yozden            #+#    #+#             */
/*   Updated: 2023/04/12 18:47:14 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	r;

	r = 1;
	while (nb > 0)
	{
		r = r * nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (r);
}
