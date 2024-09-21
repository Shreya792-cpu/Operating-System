#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
printf("Shreya Verma\n 1AY23AI109");
pid_t p=fork();
if(p==0){
        printf("I am a child process with id: %d",getpid());
        printf("My parent id is: %d",getppid());
}
else{
             printf("I am a parent process with id: %d",getpid());
             printf("My child process is: %d",p);
}


}

    

