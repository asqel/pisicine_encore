/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:19:52 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/04 09:31:43 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_put_nbr(long long int x)
{
	char	c;

	if (x < 0)
	{
		x = -x;
		write(1, "-", 1);
	}
	if (x < 10)
	{
		c = x + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_put_nbr(x / 10);
		ft_put_nbr(x % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	k;

	i = 0;
	while (par[i].str)
	{
		k = 0;
		while (par[i].str[k])
			k++;
		write(1, par[i].str, k);
		write(1, "\n", 1);
		ft_put_nbr(par[i].size);
		write(1, "\n", 1);
		k = 0;
		while (par[i].copy[k])
			k++;
		write(1, par[i].copy, k);
		write(1, "\n", 1);
		i++;
	}
}
