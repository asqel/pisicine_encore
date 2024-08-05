/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asqel <asqel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 07:32:21 by asqel             #+#    #+#             */
/*   Updated: 2024/07/30 07:38:49 by asqel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
