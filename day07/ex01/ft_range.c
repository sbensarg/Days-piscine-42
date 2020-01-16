/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 11:07:58 by sbensarg          #+#    #+#             */
/*   Updated: 2019/09/12 22:51:05 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int interval;
	int i;

	i = 0;
	interval = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	range = (int*)malloc(sizeof(int) * (interval + 1));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
