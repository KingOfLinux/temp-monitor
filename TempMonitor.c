#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>


/* It's all done in main */
int main(int argc, char **argv)
{
  printf("Temp Monitor \n");
  while(1)
    {
    if (system("sensors") == -1)
    {
    perror("program failed");
    }
    sleep(1);
  }
}
