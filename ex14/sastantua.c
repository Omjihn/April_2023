
#include "sastantua.h"

t_vars	ft_init(char *input)
{
	int	ipt;
	int	current_floor;
	int	start;
	int	curent_line_per_floor;
	int	line_per_floor;


	ipt = atoi(input); //etage cible
	current_floor = 0; //etages nombre de pyramides
	current_line_per_floor = 0;
	lines_per_floor = 2;
	start = 1;
	while (start <= ipt)
	{

		lines_per_floor++;
		while (lines_per_floor > current_floor)
		{
			start += 2;
			current_floor++;
		}
		start++;
	}





int	main(int argc, char **argv)
{
	int	i;
	t_vars	vars;

	if (argc != 2)
		return (0);
	vars = ft_init(argv[1])
