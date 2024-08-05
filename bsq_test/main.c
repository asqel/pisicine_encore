/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 07:35:50 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/05 07:47:37 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	g_map[10][10] = {
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

char	get_at(int x, int y)
{
	return (g_map[y][x]);
}

void	set_at(int x, int y, char val)
{
	g_map[y][x] = val;
}

void	test_square(int x, int y, t_square *square)
{
	t_square	new_square;

	if (get_at(x, y) != 0)
		return ;
	new_square = (t_square){.size = 1, .x = x, .y = y};
	while (new_square.x + new_square.size - 1 < 10
		&& new_square.y + new_square.size - 1 < 10)
	{
		if (no_obstqcle)
			new_square.size++;
		else break
	}
}

int	main(void)
{
	t_square	biggest;
	int			i;
	int			k;

	biggest = (t_square){0};
	i = 0;
	while (i < 10)
	{
		k = 0;
		while (k < 10)
		{
			test_square(k, i, &biggest);
			k++;
		}
		i++;
	}
	return (0);
}
