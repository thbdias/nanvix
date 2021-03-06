/*
 * Copyright(C) 2011-2014 Pedro H. Penna <pedrohenriquepenna@gmail.com>
 * 
 * init.c - System's init process.
 */

#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/*
 * Spawns other system process.
 */
int main(int argc, char **argv)
{
	pid_t pid;    /* Child process ID. */
	char *arg[2]; /* Child arguments.  */	

	((void)argc);
	((void)argv);

	arg[0] = "login";
	arg[1] = NULL;

	/* init never ends. */
	while (1)
	{
		pid = fork();
			
		/* Failed to fork. */
		if (pid < 0)
			return (-1);
			
		/* Child process. */
		if (pid == 0)
		{	
			setpgrp();
			
			/* Open standard output streams. */
			open("/dev/tty", O_RDONLY);
			open("/dev/tty", O_WRONLY);
			open("/dev/tty", O_WRONLY);
			
			_exit(execve("/bin/login", (char *const*)arg, (char *const*)environ));			
		}
		
		/* Wait child processes. */
		while (1)
		{
			if (pid == wait(NULL))
				break;
		}
		
		sync();
	}
	
	return (0);
}
