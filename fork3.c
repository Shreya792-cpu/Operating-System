#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
printf("Shreya Verma \n	1AY23AI109");
pid_t p=fork();
if(p==0){
        printf("Child Process");
}
else{
             printf("Parent Process");
             wait(NULL);
             printf("Child has terminated");
}
printf("BYE");


}

