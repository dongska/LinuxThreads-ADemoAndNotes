#include<process_copy.h>

void WAIT() {
		printf("Parent %d waiting...\n", getpid());
			pid_t zpid;
				while ((zpid = wait(NULL) != -1)) {
							printf("parent %d wait id %d \n", getpid(), zpid);
								}
}
