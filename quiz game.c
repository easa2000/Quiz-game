// program to implement a quiz program

#include<stdio.h>
#include<string.h>
void main()
{
    char question[5][100];
    char option1[3][20], option2[3][20], option3[3][20], option4[3][20], option5[3][20];
    int response[5], correct_ans[5], option, i, marks;

    // first question
    strcpy(question[0],"Name the capital of India");
    strcpy(option1,"1. Mumbai");
    strcpy(option2,"2. New Delhi");
    strcpy(option1,"3. Chennai");
    correct_ans[0] = 1;

    // second question
    strcpy(question[1],"Name the national bird: ");
    strcpy(option1,"1. Peacock");
    strcpy(option2,"2. Sparrow");
    strcpy(option1,"3. Parrot");
    correct_ans[1] = 0;

    // third question
    strcpy(question[2],"Name the first prime minsiter of india: ");
    strcpy(option1,"1. M D Gandhi");
    strcpy(option2,"2. S D Sharma");
    strcpy(option1,"3. J L Nehru");
    correct_ans[2] = 2;

    // fourth question
    strcpy(question[3],"Name the first femal president of india: ");
    strcpy(option1,"1. Pratiba patil");
    strcpy(option2,"2. Sonia Gandhi");
    strcpy(option1,"3. Indra gandhi");
    correct_ans[3] = 0;

    // fifth question
    strcpy(question[1],"Name the Youngest prime minister of india: ");
    strcpy(option1,"1. Rajiv Gandhi");
    strcpy(option2,"2. sanjay Gandji");
    strcpy(option1,"3. Rahul Gandji");
    correct_ans[4] = 0;

    do{
        printf("\n\n\n\n QUIZ PROGRAM");
        printf("\n***************************");
        printf("\n <1> Display Questions");
        pritnf("\n <2> Display Correct Answers");
        printf("\n <3> Display Result");
        printf("\n <4> Exit");
        printf("\n****************************");
        printf("\n\n\n Enter your option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("\n %s\n",question[0]);
            for(i=0;i<3;i++)
            printf("\n %s",option1[i]);
            printf("\n\n Enter your answer number: ");
            scanf("%d",response[0]);

            printf("\n %s\n",question[1]);
            for(i=0;i<3;i++)
            printf("\n %s",option2[i]);
            printf("\n\n Enter your answer number: ");
            scanf("%d",response[1]);

            printf("\n %s\n",question[2]);
            for(i=0;i<3;i++)
            printf("\n %s",option3[i]);
            printf("\n\n Enter your answer number: ");
            scanf("%d",response[2]);

            printf("\n %s\n",question[3]);
            for(i=0;i<3;i++)
            printf("\n %s",option4[i]);
            printf("\n\n Enter your answer number: ");
            scanf("%d",response[3]);

            printf("\n %s\n",question[4]);
            for(i=0;i<3;i++)
            printf("\n %s",option5[i]);
            printf("\n\n Enter your answer number: ");
            scanf("%d",response[4]);

            break;

            case 2:
            printf("\n\n CHECK THE CORRECT ANSWERS");
            printf("\n *********************************");

            printf("\n %s \n %s",question[0],option1[correct_ans[0]]);

            printf("\n\n %s \n %s",question[1],option2[correct_ans[1]]);

            printf("\n\n %s \n %s",question[2],option3[correct_ans[2]]);

            printf("\n\n %s \n %s",question[3],option4[correct_ans[3]]);

            printf("\n\n %s \n %s",question[4],option4[correct_ans[4]]);

            break;

            case 3:

            marks = 0;
            for(i=0;i<=4;i++)
            {
                if(correct_ans[i] + 1 == response[i])
                marks++;
            }
            printf("\n Out of 5 you score %d",marks);
            break;

        }
    }while(option!=4);

}
