/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <sbensarg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:08:25 by sbensarg          #+#    #+#             */
/*   Updated: 2019/09/12 22:53:34 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int interval;
	int i;
	int *tab;

	i = 0;
	interval = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc(sizeof(int) * (interval + 1));
	while (i < interval)
	{
		tab[i] = min;
		min++;
		i++;
	}
	range = (int*)malloc(sizeof(int) * (interval + 1));
	*range = tab;
	return (interval);
}
