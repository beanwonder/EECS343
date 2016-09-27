/* process id, parent process id, state, size, name
 *	Here are some additional requirements:

 * 	Each process should be on a new line.
 *	Each piece of info on a line should be separated by two spaces.
 * 	The parent process id of the first process is meaningless. For this value, print -1.
 * 	The state must be printed as human-readable text in all caps (not an integer value).
 */


#include "types.h"
#include "stat.h"
#include "user.h"
#include "processInfo.h"
#include "param.h"

int main(int argc, char *argv[])
{
	int stdout = 1;
	// char *fmt = "%d  %d  %d  %s\n";
	if (argc > 1) {
		printf(stdout, "Usage: ps\n");
		exit();
	}
	// struct ProcessInfo procInfoTbl[NPROC];
	// printf(stdout, "here\n");
	// goto kernel
	int num_procs = getprocs1();
	printf(stdout, "numProcs: %d\n", num_procs);

	/* int i = 0;
	for (i = 0; i < numProcs; ++i) {
		printf(stdout, fmt, procInfoTbl[i].ppid, procInfoTbl[i].state, procInfoTbl[i].sz, procInfoTbl[i].name);
	}
	*/

	exit();
}