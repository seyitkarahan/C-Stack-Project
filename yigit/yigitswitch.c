#include <stdio.h>

#define boyut 10

int yigit[boyut];
int top = -1;

void push(int veri) {
    if(top+1 == boyut) {
        printf("Stack dolu.");
    }
    else {
        top++;
        yigit[top] = veri;
    }
}

void pop() {
    if(top == -1 ) {
        printf("Stack zaten bos.");
    }
    else {
        top--;
    }
}

int peek() {
    return yigit[top];
}

void yazdir() {
    int i;
    for(i = 0; i < top; i++) {
        printf("%d", yigit[i]);
    }
}

int main() {
    int i, secim, sayi;
    while(i >= secim) {
        printf("\n1- Ekleme");
        printf("\n2- Cikarma");
        printf("\n3- Yazdir");
        printf("\n4- En ustteki elemani yazdir");
        printf("\n5- cikis");

        printf("\n Lutfen seciminizi giriniz: ");
        scanf("%d",& secim);
        switch (secim)
        {
        case 1:
            printf("\n Bir sayi giriniz: ");
            scanf("%d",&sayi);
            push(sayi);
            yazdir();
            break;
        
        case 2:
            pop();
            yazdir();
            break;

        case 3:
            yazdir();
            break;

        case 4:
            printf("\n En ustteki yigit degeri: %d", peek());
            break;    

        default:
            break;
        }
    }
}