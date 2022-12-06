#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/wait.h>

int BLOCK_CUR( char *SFile,int ProNo);
int PROCESS_CREATE(char* SFile, char* DFile,int Blocksize,int Pos);
int CHECK_ARG( char* SFile,int argc,int ProNo);
void WAIT();
