#include <stdio.h>
#include <unistd.h>

int main(void) {
        for(int i = 0; 1; i++) {
                printf("iteration %d\n", i); 
		//syslog(LOG_INFO, "iteration: %d", i);
                sleep(1);
        }
}

