#include "../include/minishell.h"

/*
getcwd: permet d'obtenir le répertoir courant
chdir : changer le répertoir courant
*/

int		main(void)
{
	char *cmd;
	int	ret;

	while (42)
	{
		ft_printf("minishell$ ");
		if ((ret = get_next_line(0, &cmd)) == -1)
			exit(0);
		if (!(ft_strncmp(cmd, "exit", 10)))
		{
			free(cmd);
			exit(0);
		}
	}
	return (0);
}
