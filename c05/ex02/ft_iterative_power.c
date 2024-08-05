/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asqel <asqel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 07:27:59 by asqel             #+#    #+#             */
/*   Updated: 2024/07/30 07:38:02 by asqel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	if (power < 0)
		return (0);
	res = 1;
	i = 0;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
