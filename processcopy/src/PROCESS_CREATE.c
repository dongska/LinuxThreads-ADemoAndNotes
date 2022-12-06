#include<process_copy.h>

int PROCESS_CREATE(char* SFile, char* DFile, int blockSize, int proNo) {
	pid_t pid;
	int i;
	for (i = 0; i < proNo; i++) {
			pid = fork();
				if (pid == 0) {
							break;
								}
	}
	if (pid > 0) { // 父进程
			WAIT();
	}
	else if (pid == 0) { // 拷贝进程
			int pos = i * blockSize;
				char str_pos[10];
					char str_blockSize[10];
						bzero(str_pos, sizeof(str_pos));
							bzero(str_blockSize, sizeof(str_blockSize));
								sprintf(str_pos, "%d", pos);
									sprintf(str_blockSize, "%d", blockSize);
										execl("/home/akunkun/akk/LinuxHigh/processcopy/moudle/copy", "copy", SFile, DFile, str_pos, str_blockSize,NULL);
	}
	else {
			perror("process create fail ,forl error");
				exit(0);
	}
	return 0;
}
