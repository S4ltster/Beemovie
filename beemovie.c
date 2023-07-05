// simple c program to read a file and print it to stdout line by line
#ifdef _MSC_VER
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;

#include <windows.h>
#define sleep(x) Sleep(x*1000)
#else
#include <sys/types.h>
#include <unistd.h>
#endif
#include <stdio.h>

int main(){
    FILE *fp;
    char line[42069];
    size_t len = 0;
    ssize_t read;

    fp = fopen("beemovie.txt", "r");
    if (fp == NULL){
      printf("Error opening file: beemovie.txt!\n");
      return 1;
    }

    // This code has to run on windows, so I can't use getline
    // I have to use fgets instead
    while (!feof(fp)){
      fgets(line, sizeof(line), fp);
        printf("%s", line);
        sleep(1);
    }
  return 0;
}
