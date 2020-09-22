#ifndef STRUCT_MINISHELL_H
# define STRCT_MINISHELL_H

typedef struct	s_cmd
{
	char		*cmd;
	char		*arg;
	t_list		*pipe;
}

typedef struct	s_shell
{
	char		*line;
	t_list		*cmd;
}				t_shell;

#endif
