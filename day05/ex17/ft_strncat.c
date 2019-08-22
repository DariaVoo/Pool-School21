/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snorcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 12:29:01 by snorcros          #+#    #+#             */
/*   Updated: 2019/08/06 22:46:45 by snorcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (nb > 0)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		nb--;
	}
	dest[i] = '\0';
	return (dest - i);
}