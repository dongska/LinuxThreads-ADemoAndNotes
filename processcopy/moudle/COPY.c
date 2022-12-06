#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc, char** argv) {
		int pos = atoi(argv[3]);
			int blockSize = atoi(argv[4]);
				int Sfd, Dfd;
					if ((Sfd = open(argv[1], O_RDWR)) == -1) {
								perror("Copy call Failed open source fail");
										exit(0);
											}

												Dfd = open(argv[2], O_RDWR | O_CREAT, 0664);

													lseek(Sfd, pos, SEEK_SET);
														lseek(Dfd, pos, SEEK_SET);

															int len;
																char buffer[blockSize];
																	bzero(buffer, sizeof(buffer));
																		len = read(Sfd, buffer, sizeof(buffer));
																			write(Dfd, buffer, len);
																				printf("Copy child %d pos:%d blocksize:%d \n", getpid(), pos, blockSize);
																					close(Sfd);
																						close(Dfd);
																							exit(0);

																								return 0;
}
