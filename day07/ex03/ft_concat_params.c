/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:08:45 by sbensarg          #+#    #+#             */
/*   Updated: 2019/09/12 13:13:10 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
}

char ft_len(int argc, char **argv)
{
	int i;
	int size;
	int j;

	i = 0;
	size = 0;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	return (size);
}

char *ft_concat_params(int argc, char **argv)
{
	char *str;
	int i;
	int n;
	int j;

	i = 0;
	n = 0;
	str = (char*)malloc(sizeof(char) * (ft_len(argc, argv) - 1));
	while( i < argc)
	{
		j = 0;
		while(argv[i][j]  != '\0')
		{
			str[n] = argv[i][j];
			n++;
			j++;
		}
	if(i< argc -1)
			str[n] = '\n';
		n++;
		i++;
	}
	str[n] = '\0';
	return (str);
}
int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	printf("%s",ft_concat_params(argc, argv));
	return (0);
}

