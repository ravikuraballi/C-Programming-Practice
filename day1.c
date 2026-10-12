//what si c programning?//
//c is a general - purpose programming language used to develop software systems,operating systems, embedded systems, and other applications//
//ex:calculator, operating system//
#include<stdio.h>
int main()
{
    printf("hello world");

    return 0;
}

//understand each line//
//code//                   //meaning//
//#include<stdio.h>       //allowes input and output functions//
//int main()//           //starting point of the program//
//{}//                   // marks the beginning and end of the a block//
//return 0;//            //ends the program successfully//




//variables and data types//
//a variables is a named memory location used to store a value//
//int age =20;
//float marks = 85.5;
//char grade = 'A;


//4.learn printf() and scanf()//
#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    printf("your number is %d",a);
    return 0;
}

