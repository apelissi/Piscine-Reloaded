/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apelissi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:10:56 by apelissi          #+#    #+#             */
/*   Updated: 2017/11/29 10:13:32 by apelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	j = 0;
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
