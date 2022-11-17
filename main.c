#include <stdio.h>
#include <stdlib.h>

int main()
{

    int marks, component_marks;

    char PASS,FAIL,Technical_Fail;


    printf("Enter marks scored on both components:\n");
    scanf("%d", &marks);

    if(marks < 40)
           printf("FAIL\n");

    else if(marks == 40)
            printf("PASS\n");

            if(marks <=39)
    {
      printf("Grade F\n");
    }


    else if(marks >= 40 && marks <= 49)

             printf("Grade D\n");

    else if(marks > 50 && marks <= 59)

             printf("Grade C\n");


    else if(marks > 60 && marks <=69)

             printf("Grade B\n");


    else if(marks > 70 && marks <=100)

             printf("Grade A\n");

    do {

    printf("Enter marks scored on either of the two components:\n");
    scanf("%d", &component_marks);


    }while (marks <= 14);
    printf("Technical_Fail\n");


}
