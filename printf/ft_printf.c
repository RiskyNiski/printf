/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniski <mniski>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:09:07 by mniski            #+#    #+#             */
/*   Updated: 2022/09/01 22:50:03 by mniski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printc(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_check_id(va_list *args, char id)
{
	int	len;

	len = 0;
	if (id == 'c')
		len += ft_printc(va_arg(*args, int));
	else if (id == 's')
		len += ft_print_str(va_arg(*args, char *));
	else if (id == 'd' || id == 'i')
		len += ft_print_nbr(va_arg(*args, int));
	else if (id == 'u')
		len += ft_print_unsigned(va_arg(*args, unsigned long));
	else if (id == 'x' || id == 'X')
		len += ft_print_hex(va_arg(*args, unsigned int), id);
	else if (id == '%')
		len += ft_print_percent();
	else if (id == 'p')
		len += ft_print_ptr(va_arg(*args, unsigned long long));
	else
		len += ft_printc(id);
	return (len);
}

int	ft_printf(const char *string, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			count += ft_check_id(&args, string[i + 1]);
			i++;
		}
		else
			count += ft_printc(string[i]);
		i++;
	}
	va_end(args);
	return (count);
}
