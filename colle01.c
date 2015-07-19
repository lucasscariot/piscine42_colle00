/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sganon <sganon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/11 16:37:17 by sganon            #+#    #+#             */
/*   Updated: 2015/07/13 13:06:21 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_nputchar(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
}

int		ft_head(int x)
{
	ft_putchar('/');
	if (x != 1)
	{
		ft_nputchar('*', x - 2);
		ft_putchar('\\');
	}
	ft_putchar('\n');
	return (0);
}

int		ft_tail(int x, int y)
{
	if (y > 1)
	{
		ft_putchar('\\');
		if (x > 1)
		{
			ft_nputchar('*', x - 2);
			ft_putchar('/');
		}
		ft_putchar('\n');
	}
	return (0);
}

int		colle(int x, int y)
{
	int ct;

	if (x > 0 && y > 0)
	{
		ct = 0;
		ft_head(x);
		while (y - 2 > ct)
		{
			ft_putchar('*');
			if (x != 1)
			{
				ft_nputchar(' ', x - 2);
				ft_putchar('*');
			}
			ft_putchar('\n');
			ct++;
		}
		ft_tail(x, y);
	}
	return (0);
}
