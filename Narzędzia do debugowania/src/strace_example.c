#include <stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include <signal.h>

void run(){
	while(1){
		printf("Program processing stuff here.\n");
		sleep(5);
	}
}
void sigsegv_handler(int signum){
	printf("Caught signal %d\n",signum);
	run();	
}
void sigint_handler(int signum){
	printf("Caught signal %d\n",signum);	
}

int main(){
	sleep(10);
	signal(SIGINT, sigint_handler);
	signal(SIGSEGV, sigsegv_handler);

	signal(SIGTERM, sigsegv_handler);
	int *ptr = NULL;
	*ptr = 1; // Segmentation fault
	
	return EXIT_SUCCESS;
}
