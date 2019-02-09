/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arousse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 13:22:11 by arousse           #+#    #+#             */
/*   Updated: 2019/02/09 22:33:29 by arousse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = x;
	j = y;
	y = 1;
	while (j >= y)
	{
		x = 1;
		while (i >= x)
		{
			if ((x == 1 & y == 1) || (j == y && i == x && x >1 && y > 1))
				ft_putchar('A');
			else if ((x < i && x > 1) && (y < j && y > 1))
				ft_putchar(' ');
			else if ((x == i && y == 1) || (y == j && x == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
