/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asqel <asqel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 20:19:02 by asqel             #+#    #+#             */
/*   Updated: 2024/07/30 07:38:22 by asqel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
		return (0);
	res = 1;
	i = 2;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	int	n;

	n = 5;
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	return (0);
}
*/