#include<stdio.h>
#include<stdlib.h>
char name[30];
int userScore=0,countQ=0;
void calculateScore()
{
    if (userScore >= 80&&userScore <= 100)
    {
        printf("\nWOHOOO WELL DONE! %s CONGRATULATION YOU HAVE WON THE QUIZ.\n",name);
        printf("you got %d points.\n",userScore);
        printf("your %d Question iS correct.\n\n",countQ);
    }
    else if(userScore>=60&&userScore<80)
    {
        printf("WOHOOO!  WELL DONE  %s CONGRATULATION YOU HAVE WON THE QUIZ.\n",name);
        printf("you got %d points.\n",userScore);
        printf("your %d Question iS correct.\n\n",countQ);
    }
    else if(userScore>=40&&userScore<60)
    {
        printf("WOHOOOOO! WELL DONE  %s  CONGRATULATION YOU HAVE WON THE QUIZ.\n",name);
        printf("you got %d points.\n",userScore);
        printf("your %d Question is correct.\n\n",countQ);
    }
    else if(userScore>=10&&userScore<40)
    {
        printf("Sorry! %s You are loose the quiz.\n",name);
        printf("you got %d points.\n",userScore);
        printf("your only %d Question  correct.\n",countQ);
        printf("***************Better luck lext time,Please be Sitted And Try Again**************\n");
    }    
    exit(0);
}
char result(char choose,char correct)
{
    char next;
    if (choose==correct)
    {
        countQ++;
        userScore=userScore+10;
        printf("Answer is correct!\n");
        printf("Press (Y) to continue Quiz ");
        printf("If you want to end this Quiz then press (N)\n");
        fflush(stdin);
        scanf("%c",&next);
        return(next);
    }
    else
    {
        printf("Sorry Answer is wrong!\n");
        printf("Press (Y) to continue Quiz ");
        printf("If you want to end this Quiz then press (N)\n");
        fflush(stdin);
        scanf("%c",&next);        
        return(next);
    }
}
void question()
{
    char choose,correct;
    printf("1.Q-which data type store characters?\n");
    printf("\t(A).Int\t       (B).float\n");
    printf("\t(C).char\t(D).byte\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='c';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    } 
    printf("2.Q-How many types of DATA TYPES\n");
    printf("\t(A).3\t(B).6\n");
    printf("\t(C).2\t(D).8\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='a';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }   
    printf("3.Q-How many bytes consume Float data type in 64 bit OS?\n");
    printf("\t(A).6\t(B).4\n");
    printf("\t(C).2\t(D).8\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='b';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }   
    printf("4.Q-Which of these a string function to convert string to lowercase \n");
    printf("\t(A).strcmp\t(B).strchr\n");
    printf("\t(C).strrev\t(D).strlwr\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='d';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }   
    printf("5.Q-In c function for create a new file or open a existing file ?\n");
    printf("\t(A).fscan\t(B).fget\n");
    printf("\t(C).fopen\t(D).fcreate\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='c';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("6.Q-Which type of values is store in Int data type?\n");
    printf("\t(A).integer\t(B).floating point\n");
    printf("\t(C).character\t(D).string\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='a';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("7.Q-Which type of values is store in float data type?\n");
    printf("\t(A).integer\t(B).floating point\n");
    printf("\t(C).character\t(D).string\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose); 
    correct='b';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("8.Q-how many types of constants in c \n");
    printf("\t(A).3\t(B).2\n");
    printf("\t(C).4\t(D).1\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);  
    correct='b';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("9.Q-What is string?\n");
    printf("\t(A).Integer values\t(B).floating values\n");
    printf("\t(C).Character array\t(D).Array\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='c';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    printf("10.Q-What is structure?\n");
    printf("\t(A).Integer\t(B).float\n");
    printf("\t(C).Character\t(D).User defined data type\n");
    printf("Choose which option is correct:");
    fflush(stdin);
    scanf("%c",&choose);
    correct='d';  
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;   
    }
    calculateScore();
}
void menu()
{
    char ch;
    printf("\n>>>>>>>>>>>>>>>>>HELLO!>>>>>>>>>>>>>>>>>>>> %s\n",name);
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("Here are some rules of this Game given below \n");
    printf("1. You can choose any option.\n");
    printf("2. You need to answer 10 question\n");
    printf("3. Every question have 10 points\n");
    printf("4.Total points are 100\n");
    printf("5. ACCORDING To your performance you gonna lose or win \n");
    printf("Press (Y) for start quiz otherwise press (N)\n");
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
        question();
        calculateScore();
    }else
    {
        exit(0);
    }
}
void main()
{
    printf("\n***********************Welcome to Quiz Game******************************\n");
    printf(" Please Enter your name:");
    gets(name);
    menu();
}
