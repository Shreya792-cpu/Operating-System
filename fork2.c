#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
printf("Shreya Verma\n 1AY23AI109");
pid_t p=fork();
if(p<0){
        printf(" Child creation failure");
}
else if(p==0){
              printf("Child process created successfully!");
        
}
else{
             printf("I am a parent process");
}


}


