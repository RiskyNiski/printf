/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mniski <mniski>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:56:50 by mniski            #+#    #+#             */
/*   Updated: 2022/09/01 22:48:47 by mniski           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	// int a;
	// int x = ft_printf("c: %c s: %s d: %d i: %i u: %u x: %x X: %X p: %p percent: %%\n", 'C', "abc", -256, INT_MAX, INT_MAX + 10000, 240, 240, &a);
	// int y = printf("c: %c s: %s d: %d i: %i u: %u x: %x X: %X p: %p percent: %%\n", 'C', "abc", -256, INT_MAX, INT_MAX + 10000, 240, 240, &a);
	
	// printf("mine: %i\norig: %i\n", x, y);

	// int x = ft_printf("my %s %s\n", NULL, "");
	// int y = printf("or %s %s\n", NULL, "");

	// printf("mine: %i\norig: %i\n", x, y);

	int x = ft_printf("my %y abc\n");
	int y = printf("or %y abc\n");

	printf("mine: %i\norig: %i\n", x, y);
}