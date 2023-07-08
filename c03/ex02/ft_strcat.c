/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:46:33 by yozden            #+#    #+#             */
/*   Updated: 2023/04/08 14:18:58 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i ++;
		x ++;
	}
	dest[i] = '\0';
	return (dest);
}