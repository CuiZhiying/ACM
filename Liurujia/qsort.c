#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Student{
    char  num[10];
    char  name[20];
    float score;
}Student;

int compare_by_num( const void *first, const void *next){
    const Student *a = first;
    const Student *b = next;

    
    return strcmp(a->num, b->num);
}

int main()
{
    Student students[MAX];
    int i, num;
    int choice;
    freopen( "qsort.c.input", "r", stdin);
    while( scanf("%d", &num) != EOF && num){
        for( i = 0; i < num; i++)
            scanf("%s %s %f", students[i].num, students[i].name, &students[i].score);
        qsort( students, num, sizeof(Student), compare_by_num);
        for( i = 0; i < num; i++)
            printf("%s\t%s\t%f\n", students[i].num, students[i].name, students[i].score);
    }
    return 0;
}

/*
int compareInt( const void *first, const void *next)
{
    const int *a = first;
    const int *b = next;
    return *a - *b;
}

int main()
{
    int numbers[10] = {9, 7, 3, 3, 4, 1, 3, 2, 100, 10};
    
    int i;

    qsort( numbers, 10, sizeof(numbers[0]), compareInt);
    for( i = 0; i < 10; i++)
        printf("%d\t", numbers[i]);
    putchar('\n');
    
    return 0;
}

*/
