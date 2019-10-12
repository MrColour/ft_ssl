/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 21:54:25 by kmira             #+#    #+#             */
/*   Updated: 2019/10/10 22:12:50 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ssl_main.h"

void	print_chunk(t_512_chunk *chunk)
{
	int i;

	i = 0;
	while (i < 16)
	{
		printf("BLOCK[%2d]: %10u\n", i, chunk->block[i]);
		i++;
	}
}