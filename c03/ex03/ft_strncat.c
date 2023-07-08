/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:52:00 by yozden            #+#    #+#             */
/*   Updated: 2023/04/09 15:37:06 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (x < nb && src[x] != '\0')
	{
		dest[i + x] = src[x];
		x ++;
	}
	dest[i + x] = '\0';
	return (dest);
}
