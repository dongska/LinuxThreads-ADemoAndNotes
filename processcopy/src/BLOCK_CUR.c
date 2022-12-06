#include<process_copy.h>

int BLOCK_CUR(char* SFile,int proNo){
	
	int fd;
	if((fd = open(SFile,0,O_RDWR)) == -1){
	
		printf("Call check_arg faik, sfile not exist\n");
		exit(0);

	}
	int fsize ;
	fsize = lseek(fd,0,SEEK_END);
	 
	if(fsize % proNo == 0){
		return fsize / proNo;
	}
	else{
  		return fsize / proNo + 1;

	}
}
