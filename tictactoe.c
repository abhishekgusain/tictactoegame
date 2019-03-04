#include<stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};


void gamename()
{
    printf("\n\t\t\tTIC TAC TOE GAME: by DOMINATOR\n");
}


void show()
{
    printf("\n\n\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
    printf("\t\t\t---|---|---\n");
      printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t---|---|---\n");
      printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
    printf("\t\t\t---|---|---\n");
}


void inputSymbol()
{

    printf("\n Player 1 Symbol :x:");
    printf("\n Player 2 Symbol :0:");

}


void start()
{
    char pa;
    printf("\nPlz enter who wants to start the game player 1 or player 2\n");
    scanf("%c",&pa);

}

int count=0;
void play()
{
    char p,s;
    //p for position and s for symbol
    printf("enter the position and your symbol\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    count++;
    check(p,s);
}

void check(char P,char S)
{
    int i;
    for(i=0;i<=8;i++)
        if(a[i]==P)
        a[i]=S;

}

int end()
{
    //for x
    if(a[0]=='x'&&a[1]=='x'&&a[2]=='x'||a[0]=='x'&&a[3]=='x'&&a[6]=='x'||a[0]=='x'&&a[4]=='x'&&a[8]=='x')
        return(100);
     //for 0
     else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0'||a[0]=='0'&&a[3]=='0'&&a[6]=='0' || a[0]=='0'&&a[4]=='0'&&a[8]=='0')
        return(200);

        else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
            return(100);
        else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
            return(200);

             else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
            return(100);
        else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
            return(200);

             else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
            return(100);
        else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
            return(200);

             else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
            return(100);
        else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
            return(200);
            //draw condn
            return(300);








}



void main()
{
    int k;
    char ch;
    label1:
    gamename();
    show();
    inputSymbol();
    start();
    play();

    label:
    system("cls");
    show();
    play();
    k=end();
    system("cls");
    show();

    if(count<9)
    {
         if(k==100)
         {
             printf("player 1 won\n");
            count=0;
         }

    else if(k==200)
    {
         printf("player 2 won\n\n\n");
        count=0;
    }

    else
        goto label;
    }

    else
        {
           printf("game draw\n");
            count=0;
        }



printf("DO you Want to Play Continue :Enter y for Yes and n for No");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {

        //reinitialization of old array into new one
        a[0]='1';
        a[1]='2';
        a[2]='3';
        a[3]='4';
        a[4]='5';
        a[5]='6';
        a[6]='7';
        a[7]='8';
        a[8]='9';
         goto label1;
    }
    else
        printf("enter to exit\n");

}
