#include <stdio.h>

#define BOYUT 5

int Yigit[BOYUT];
int top = -1;

void Push(int x)
{ // Yığıtı eekle
    if (top == BOYUT - 1)
    {
        printf("Yigit Dolu.");
    }
    else
    {
        top++;
        printf("%d eklendi\n",x);
        Yigit[top] = x;
        // Yigit[++top] = x;
    }
}

int Pop() // silme - veri çekme
{
    // Yıgıtta bos mu kontrolu
    if (top == -1)
    {
        printf("Yigit Bos.");
    }
    else
    {
        int x = Yigit[top];
        top--;
        return x;
    }
}

void Yazdir()
{ // Yıgıt dizisini yazdir.
    int i;
    for (i = 0; i < top; i++)
    { // eleman sayisina kadar
        printf("%d", Yigit[i]);
    }
}

int main()
{
    Push(8);
    Push(10);
    Push(5);
    Push(4);
    Push(3);
    Push(12);
    int a = Pop();
    printf("pop sonucu: %d\n", a);
    int b = Pop();
    printf("pop sonucu: %d", b);
}