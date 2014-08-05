#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
  int cnt = 0;
  char buff[128] = {};
  
  //read from keybord
  cnt = read(fileno(stdin),buff,sizeof(buff)-1);
  buff[cnt] = '\0';
  
  //write to keyborad
  write(fileno(stdout),buff,strlen(buff));

  return 0;
}
