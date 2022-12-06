#include<process_copy.h>

int CHECK_ARG(char* SFile,int argc,int proNo){
	if(argc < 3){
		printf("Error: can shu yi chang \n");
		exit(0);
	}
	else{
		if(access(SFile,F_OK) != 0){
			printf("ERROR:yuan wen jian bu cun zai \n");
			exit(0);
		}
		if(proNo <= 0 || proNo > 100){
			printf("ERROR:shu liang yi chang\n");
			exit(0);
		}
	}
	return 0;
}

