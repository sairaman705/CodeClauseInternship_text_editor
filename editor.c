#include<stdio.h>
#include<conio.h>

void main(){
    FILE *fp;
    char in, file_name[35], cho;

    printf("Text-Editor \n");
    printf("\n \t\t Enter file name : ");
    gets(file_name);
    printf("\n Enter your choise : ");
    printf("\n create new file:w/view the file:r/open the file:a");
    scanf("%c", &cho);

    if(cho=='r'){
        fp = fopen(file_name,"r");

        while((in=fgetc(fp))!=EOF){  
            printf("%c",in);  
        }
        fclose(fp);  
    }
    else if(cho=='w'){
        fp = fopen(file_name,"w");

        while((in=getchar())!=EOF){  
            putc(in, fp);
        }
        fclose(fp); 

    }
    else if(cho=='a'){
        fp = fopen(file_name,"a");

        while((in=getchar())!=EOF){  
            putc(in, fp);
        }
        fclose(fp); 

    }

    getch();

}