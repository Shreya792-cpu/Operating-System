#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
printf("Shreya Verma\n 1AY23AI109");
char *cmnd="ls";
char *arg_list[]={"ls","-l",NULL};
printf("Before execvp()\n");
printf("Creating another process using fork()\n");
pid_t p=fork();
int staus=0;
if(p==0){
printf("Child Process\n");
int status=execvp(cmnd,arg_list);
if(status==-1){
printf("incorrect termination\n");
}
}
else{
printf("Parent process\n");
printf("Status:%d\n",status);
printf("now this line will be executed\n");
}
}
