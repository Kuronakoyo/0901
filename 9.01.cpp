// 9.01.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include<stdio.h>
#include <string.h>

//第１問(一問2点)
//以下の計算に2進数で答えよ。
//00101100 + 01010101
//=1001001001010000001
//10110000 + 00001111
//=1000001001001001001001
//第２問(一問2点)
//第１問の答えを10進数で答えよ
//299649
//2134601

//第３問(一問2点)
//char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
//charのバイトサイズは1バイト
//intのバイトサイズは4バイト
//floatのバイトサイズは4バイト
//doubleのバイトサイズは8バイト
//第４問(一問2点)
//char* 、int * 、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
//char*のバイトサイズは1バイト
//int　*のバイトサイズは4バイト
//float *のバイトサイズは4バイト
//double * のバイトサイズは8バイト

//第５問(20点)
//以下のプログラムを実行した場合、
//①～③のどの部分が実行されるか答えよ。
//②が実行される
/*int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        ①
    }
    else if (num == 2)
    {
        ②
    }
    else
    {
        ③
    }
}
*/

//第６問(25点)
//数値を2つ入力し、
//1番目に入力された値が奇数なら足し算、
//1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。

/*int main()
{
    int a;
    int b;
    
    printf("1番目の数値を入力してください:\n");
    scanf_s("%d", &a);
    printf("2番目の数値を入力してください:\n");
    scanf_s("%d", &b);
    if (a % 2 == 0) {
        printf("1番目の数値は偶数だったため\n");
        printf("1番目の数値-2番目の数値 = %d\n", a - b);
    }
    else {
        printf("1番目の数値は奇数だったため\n");
        printf("1番目の数値+2番目の数値 = %d\n", a + b);

    }
    

}
*/
//1 // 1番目に入力された値
//5 // 2番目に入力された値
//6 // 1番目が奇数なので足し算

//4 // 1番目に入力された値
//3 // 2番目に入力された値
//1 // 1番目が偶数なので引き算



//第７問(25点)
//第６問のプログラムをループで行うようにし、
//endと入力された場合終了するようにしてください。
//endの入力は1番目の値の場所でも、2番目の値の場所でも、
//別途endの入力を受け付けるようでもどれでもいいです。
//どこか一か所でendと入力して終了していれば正解とします。
int main()
{
    int a;
    int b;
    char s[10];
    bool endFlag = false;
    char str[256];
    while (1)
    {

        
        printf("1番目の数値を入力してください:\n");
        scanf_s("%d", &a);
        printf("2番目の数値を入力してください:\n");
        scanf_s("%d", &b);
        if (a % 2 == 0){
            printf("1番目の数値は偶数だったため\n");
            printf("1番目の数値-2番目の数値 = %d\n", a - b);
            
        }
        else {
            printf("1番目の数値は奇数だったため\n");
            printf("1番目の数値+2番目の数値 = %d\n", a + b);

        }
     
        return 0;

    }
}


//第８問(10点)
//以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
//実行できるようにしてください。
//解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
//(途中確認のためにコメントアウトをする分はOKです。)
//間違えている個所は4か所です。
/*
class Point
{
public:
    Point() { Clear(); }

     void Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
public:
    int x, y, z;
};

int main()
{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x< nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}
*/