// Write another program using `fork()`. The child process should print "hello";
// the parent process should print "goodbye". You should ensure that the child
// process always prints first.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here
	int rc = fork();

	if (rc < 0) {
		printf("Fork failed...\n");
	} else if (rc == 0) {
		printf("hello\n");
	} else {
		waitpid(rc, NULL, 0);
		printf("goodbye\n");
	}

    return 0;
}
