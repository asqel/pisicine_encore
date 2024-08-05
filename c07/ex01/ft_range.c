/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:43:00 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/01 09:49:19 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	res = malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*tab;

	tab = ft_range(10, 34);
	for (int i = 0; i < 34 - 10; i++)
		printf("%d\n", tab[i]);
	free(tab);
	return (0);
}
*/