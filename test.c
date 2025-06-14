// ctrl + shift + b : 빌드
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
int main()
{
    int a=1, b=2, c=3;
    int *pi[3]={&a, &b, &c};
    int **ppi;

    ppi = pi; // ppi에 배열 pi연결

    printf("%d %d %d\n", *ppi[0],*ppi[1],*ppi[2]);

    //*pi[0] 과 어떤 차이일까?
    return 0;
}