// using strtok()
#include <stdio.h>
#include <string.h>
  int main(int argc, char *argv[])
{
    //char str[] = "SunBeam_Precat:OM19,pune,mumbai";
    char *str = argv[1];
    // Returns first token
    char* token = strtok(str, "_,:");
  
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "_,:");
    }
  
    return 0;
}