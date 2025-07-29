#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

enum options{
    STOP = 'S',
    CONTINUE = 'C',
    NEW = 'N',
    EDIT = 'E',
    DELETE = 'D',
};

int main(int argc,char **argv){
    /*char name[64] = { 0 };
    printf("Enter your name!: ");
    scanf("%64s",name);
    printf("\nYour name is %s\n",name);

    FILE *f = fopen("./Test.txt","a");
    if(f){
        //fwrite(name,1,64,f);
        //fputs("Hello\nLOL\n",f);
        fprintf(f,"%s\n",name);
        //fprintf(f,"End\n");
        fclose(f);
    }

    printf("Name: %s\n",name);

    if(remove("./Test.txt")==0){
        printf("Deleted");
    }
    system("color 74");
    for(int i = 0;i<40000;i++){
        printf("I LOVE C\3");
    }
    for(int i = 0;i<argc;i++){
        printf("arg %d: %s\n",i,argv[i]);
    }*/
    char name[16];
    printf("s: %i\n",(int)sizeof(name));
    scanf("%s",name);
    printf("s: %s\n",name);
    int i = 0;
    scanf("%s",(char*)(&i));
    printf("s: %s\n",(char*)(&i));
    return 0;
}