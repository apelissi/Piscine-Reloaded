/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:25:21 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/29 10:12:29 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	if (*s1)
		return (*s1 - *s2);
	else
		return (0);
}

void	ft_tri(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	j = 0;
	ft_tri(argc, argv);
	if (argc < 2)
		return (0);
	else
	{
		while (i < argc)
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			i++;
			j = 0;
			ft_putchar('\n');
		}
	}
	return (0);
}
