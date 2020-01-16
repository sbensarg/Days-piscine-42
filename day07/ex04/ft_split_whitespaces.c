/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbensarg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 23:43:04 by sbensarg          #+#    #+#             */
/*   Updated: 2019/09/13 01:45:03 by sbensarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_strlen(*str)
{
	int i;
	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return(i);
}
int ft_count_words(char *str)
{
	int i;
	int j;
	int ctr;

	i = 0;
	j = 0;
	ctr = 0;
	while ( i <= ft_strlen(str))
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i]  == '\0')
		{
			ctr++;
			j = 0;
		}
		else
		{
			j++;
		}
	}
return (j);
}
char	**ft_split_whitespaces(char *str)
{
	char **tab;
	int i;
	int j;
	int is_ws;

	i = -1;
	j = 0;
	is_ws = 1;
	if(!(tab= (char**)malloc(sizeof(char*) * (ft_count_words(str) +1))))
		return (0);
	while(str[++i])
	{
		if(is_ws && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{

		}
	}
}
