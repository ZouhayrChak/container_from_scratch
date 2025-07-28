#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){


int pid = fork();
char *args[] = {"./namespace_conf",NULL};

if (pid != 0){
	execvp(args[0],args);

}else{
	sleep(1);
	char * argsl[] = {"./cgroup_conf",NULL};
	execvp(argsl[0],argsl);
}


return 0;
}


