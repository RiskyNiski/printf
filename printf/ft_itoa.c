/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniski <mniski>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:25:08 by mniski            #+#    #+#             */
/*   Updated: 2022/09/01 21:09:22 by mniski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ptr;
	long	num;

	num = n;
	size = ft_count(num);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (num < 0)
	{
		num = num * -1;
		ptr[0] = '-';
	}
	if (num == 0)
		ptr[0] = '0';
	ptr[size--] = '\0';
	while (num > 0)
	{
		ptr[size] = num % 10 + '0';
		size--;
		num = num / 10;
	}
	return (ptr);
}
