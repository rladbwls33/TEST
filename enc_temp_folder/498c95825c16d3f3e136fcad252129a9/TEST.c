#include<stdio.h>
#include<conio.h>

void gotoxy(int x, int y) {

    // �ֿܼ��� Ŀ���� (x, y) ��ġ�� �̵��ϴ� �Լ�

    printf("\033[%d;%dH", y, x);

  
}

int main()
{

    printf("\033[32m\033[91mInput>\033[0m");
    char a;
    int i = 1;
    while (i)
    {
        a = _getch();
        gotoxy(7, 1);
        printf("%c", a);
        if (a == 's') {
            i = 0;
        }

    }
    return 0;
}



