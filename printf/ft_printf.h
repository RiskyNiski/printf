/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniski <mniski>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:21:10 by mniski            #+#    #+#             */
/*   Updated: 2022/09/01 21:56:15 by mniski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int			ft_printf(const char *string, ...);
void		ft_put_str(char *str);
int			ft_putchar(char c);
int			ft_hex_len(unsigned int num);
void		ft_put_hex(unsigned int num, const char format);
int			ft_print_hex(unsigned int num, const char format);
int			ft_print_str(char *str);
int			ft_print_nbr(int n);
int			ft_print_percent(void);
int			ft_ptr_len(unsigned long num);
void		ft_put_ptr(unsigned long num);
char		*ft_itoa(int n);
int			ft_num_len(unsigned int num);
char		*ft_u_itoa(unsigned int n);
int			ft_print_unsigned(unsigned int n);
int			ft_print_ptr(unsigned long long ptr);
int			ft_check_id(va_list *args, char id);

#endif
