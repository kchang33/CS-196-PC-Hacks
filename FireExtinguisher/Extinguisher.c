#include<stdio.h>
#include <windows.h>

int main()
{

   FILE *fp;
    char str[] = "del \"C:\\Users\\USER\\Documents\\GitHub\\CS-196-PC-Hacks\\FireExtinguisher\\bin\\Debug\\FireExtinguisher.exe\" \r\ndel \"C:\\Users\\USER\\Documents\\GitHub\\CS-196-PC-Hacks\\FireExtinguisher\\bin\\Debug\\text.bat\"";

    fp = fopen( "text.txt" , "ab+" );
    fputs(str, fp);
    fclose(fp);

    int ret;
   char oldname[] = "text.txt";
   char newname[] = "text.bat";

   ret = rename(oldname, newname);
    Sleep(1000);
    //system("text.bat");
   return 0;
}
