#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
  	int fd,fdd;
      char buf;

     fd=open(argv[1],O_RDONLY);
      fdd= open(argv[2], O_WRONLY);
   if(fd<0)
   {
     perror("open");
   	 exit(0);

  
   }
   while(read(fd,&buf,1))
      write(1,&buf,1);
   

}
