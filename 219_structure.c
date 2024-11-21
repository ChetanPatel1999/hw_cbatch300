// student managamnet system
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int rno;
    float per;
};
void inserstudent(struct student s[], int index)
{
    printf("enter info %d student : \n", index + 1);
    printf("enter name : ");
    scanf("%s", s[index].name);
    printf("enter rno : ");
    scanf("%d", &s[index].rno);
    printf("enter percentage : ");
    scanf("%f", &s[index].per);
    printf("\nstudent register succesfully \n\n");
}
void display_student_result(struct student s[], int index)
{
    int i;
    if (index == 0)
    {
        printf("\nthere are no one students\n\n");
    }
    else
    {
        for (i = 0; i < index; i++)
        {
            printf("\n%d student result ....\n", i + 1);
            printf("student name : %s\n", s[i].name);
            printf("student rno : %d\n", s[i].rno);
            printf("student per : %.2f\n", s[i].per);
            if (s[i].per > 33)
            {
                printf("student pass \n");
            }
            else
            {
                printf("student fail \n");
            }
            printf("______________________________________\n");
        }
    }
}
void display_pass_result(struct student s[], int index)
{
    int i;
    if (index == 0)
    {
        printf("\nthere are no one students\n\n");
    }
    else
    {
        for (i = 0; i < index; i++)
        {
            if (s[i].per > 33)
            {
                printf("\n%d student result ....\n", i + 1);
                printf("student name : %s\n", s[i].name);
                printf("student rno : %d\n", s[i].rno);
                printf("student per : %.2f\n", s[i].per);
                if (s[i].per > 33)
                {
                    printf("student pass \n");
                }
                else
                {
                    printf("student fail \n");
                }
                printf("______________________________________\n");
            }
        }
    }
}
void display_fail_result(struct student s[], int index)
{
    int i;
    if (index == 0)
    {
        printf("\nthere are no one students\n\n");
    }
    else
    {
        for (i = 0; i < index; i++)
        {
            if (s[i].per < 33)
            {
                printf("\n%d student result ....\n", i + 1);
                printf("student name : %s\n", s[i].name);
                printf("student rno : %d\n", s[i].rno);
                printf("student per : %.2f\n", s[i].per);
                if (s[i].per > 33)
                {
                    printf("student pass \n");
                }
                else
                {
                    printf("student fail \n");
                }
                printf("______________________________________\n");
            }
        }
    }
}
void display_individul_result(struct student s[], int index)
{
    int i;
    if (index == 0)
    {
        printf("\nthere are no one students\n\n");
    }
    else
    {
        int r, f = 0;
        printf("enter rno : ");
        scanf("%d", &r);
        for (i = 0; i < index; i++)
        {
            if (r == s[i].rno)
            {
                f = 1;
                printf("\n%d student result ....\n", i + 1);
                printf("student name : %s\n", s[i].name);
                printf("student rno : %d\n", s[i].rno);
                printf("student per : %.2f\n", s[i].per);
                if (s[i].per > 33)
                {
                    printf("student pass \n");
                }
                else
                {
                    printf("student fail \n");
                }
                printf("______________________________________\n");
            }
        }
        if (f == 0)
        {
            printf("\nenter correct rno \n\n");
        }
    }
}
void main()
{
    int num, index = 0;
    struct student s[20];

    while (1)
    {
        printf("student managment system \n");
        printf("____________________________________\n\n");
        printf("press 1 for enter new student  \n");
        printf("press 2 for dispaly student  \n");
        printf("press 3 for dispaly only passing student \n");
        printf("press 4 for dispaly only Fail student \n");
        printf("press 5 for dispaly indivul student  \n");
        printf("press 6 for exit \n");
        printf("choose any option : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            inserstudent(s, index);
            index++;
            break;
        case 2:
            display_student_result(s, index);
            break;
        case 3:
            display_pass_result(s, index);
            break;
        case 4:
            display_fail_result(s, index);
            break;
        case 5:
            display_individul_result(s, index);
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("choose write option");
            break;
        }
    }
}