/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:37:03 by axlleres          #+#    #+#             */
/*   Updated: 2024/08/02 12:38:22 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = argc - 1;
	while (i >= 1)
	{
		k = 0;
		while (argv[i][k] != '\0')
		{
			write(1, &(argv[i][k]), 1);
			k++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
