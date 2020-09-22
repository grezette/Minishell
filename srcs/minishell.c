#include "../include/minishell.h"

/*
getcwd: permet d'obtenir le répertoir courant
chdir : changer le répertoir courant
*/

void	ft_split_cmd(t_shell *shell)
{
	int		i;
	int		j;

	i = -1;
	while (shell->line[++i] && (j = i) == i)
	{
		
	}
}

int		main(void)
{
	t_shell	shell;
	int		ret;

	while (42)
	{
		ft_printf("minishell$ ");
		if ((ret = get_next_line(0, &shell.line)) == -1)
			exit(0);
		if (!(ft_strncmp(shell.line, "exit", 10)))
		{
			free(shell.cmd);
			exit(0);
		}
		ft_split_cmd(&shell);
	}
	return (0);
}
