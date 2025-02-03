/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femontei <femontei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:18:29 by femontei          #+#    #+#             */
/*   Updated: 2025/01/27 18:50:03 by femontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	is_safe(int board[11], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row
			|| board[i] - i == row - col
			|| board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print(int board[11])
{
	char	c;
	int		i;

	i = 0;
	while (i < 11)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_solve(int board[11], int col, int *sol)
{
	int	row;

	if (col == 11)
	{
		ft_print(board);
		(*sol)++;;
		return ;
	}
	row = 0;
	while (row < 11)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			ft_solve(board, col + 1, sol);
			board[col] = -1;
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[11];
	int	i;
	int	sol;

	sol = 0;
	i = 0;
	while (i < 11)
	{
		board[i] = -1;
		i++;
	}
	ft_solve(board, 0, &sol);
	return (sol);
}

int	main(void)
{	
	int i;
	i = ft_ten_queens_puzzle();
	printf("%d", i);
	return (0);
}
