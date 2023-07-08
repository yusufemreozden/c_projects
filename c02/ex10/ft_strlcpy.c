/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yozden <yozdeni@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:18:52 by yozden            #+#    #+#             */
/*   Updated: 2023/04/08 11:23:53 by yozden           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;	

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
