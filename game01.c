#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  char gamer;
  int computer;
  int result;

  while (1){
    printf("準備好闖關了嗎?：\n");

    printf("A:剪刀\nB:石頭\nC:布\nD:不玩了\n");
    scanf("%c",&gamer);
    getchar();
    switch (gamer){
        case 'A':
            gamer=4; break;
	 case 'a':
            gamer=4; break;
        case 'B':
            gamer=7; break;
	case 'b':
            gamer=7; break;
        case 'C':
            gamer=10; break;
	case 'c':
            gamer=10; break;
        case 'D':
            return 0;
	 case'd':
            return 0;

        default:
            printf("你的選擇為 %c 錯誤,退出...\n",gamer);
            //getchar();
            //system("cls"); // 清屏
            return 0;
            break;
    }

    srand((unsigned)time(NULL));
    computer=rand()%3;
    result=(int)gamer+computer;
    printf("電腦出了");
    switch (computer)
    {
        case 0:
            printf("剪刀\n");break; //4    1
        case 1:
	    printf("石頭\n");break; //7  2
        case 2:
	    printf("布\n");break;   //10 3
    }
    printf("你出了");
    switch (gamer)
    {
        case 4:
	    printf("剪刀\n");break;
        case 7:
	    printf("石頭\n");break;
        case 10:
	    printf("布\n");break;
    }
    if (result==6||result==7||result==11) printf("你赢了!");
    else if (result==5||result==9||result==10) printf("你輸了!");
    else printf("平手/n");
    //system("pause>null&&cls");  // 暂停并清屏
    //system("cls");
    }
    return 0;
}
