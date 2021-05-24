// using strtok()
#include <stdio.h>
#include <string.h>
  int main()
{
    char str[] = "SunBeam_Precat_OM19";
  
    // Returns first token
    char* token = strtok(str, "_");
  
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, "_");
    }
  
    return 0;
}