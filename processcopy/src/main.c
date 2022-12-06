#include<process_copy.h>


int main(int argc,char** argv){

	int proNo;
	int blockSize;
	if(argv[3] == 0){
		proNo = 5;
	}
	else{
		proNo = atoi(argv[3]);
	}
	//jiao yan can shu
	CHECK_ARG(argv[1],argc,proNo);
	//ren eu fen ge 
	blockSize = BLOCK_CUR(argv[1],proNo);
	//duo jin cheng mo xing 
	PROCESS_CREATE(argv[1],argv[2],blockSize,proNo);

	return 0;
}
