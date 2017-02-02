#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

int main(int argc, char* argv[])
{
	long size;
	if(argc <= 1) {
		printf("Usage: sudo %s <memory size to fill in GB>\n", argv[0]);
	} else {
		size = strtol(argv[1], NULL, 10);
		printf("try to fill %d GB\n",  size);
		
		if(0 != mlockall(MCL_FUTURE)) {
			printf("mlockall failed: %d\n", errno);
			exit(1);
		}
		void * buffer =  malloc ( size<<30 );
		if(NULL == buffer) {
			printf("malloc failed... Try run me as root.\n");
			exit(1);
		}

		printf("press enter to exit...");
		getchar();
		printf("bay!\n");
	}
}
