/* ch08-getcwd.c --- demonstrates getcwd().
                     Error checking omitted for brevity */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <linux/limits.h>

int main(void)
{
	char buf[PATH_MAX];
	char *cp;

	cp = getcwd(buf, sizeof(buf));
	printf("Current dir: %s\n", buf);

	printf("Change to ..\n");
	chdir(".."); /* 'cd ..' */

	cp = getcwd(buf, sizeof(buf));
	printf("Current dir is now: %s\n", buf);

	return 0;
}

