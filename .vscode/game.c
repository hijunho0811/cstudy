#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define MapX 20
#define MapY 20

//기능 1) Map 크기 적절하게 변경 -> 20/20
//기능 2) 점수 출력
//기능 3) 떨어지는 속도 점점 빠르게(점수에 따라서)
//
//option)
//1)게임 map 경계 표시
//2)line당 똥개수 0~4개 떨어짐
//3)Stage 개념 적용
//4)목숨(LIFE) 개념 적용
//5)똥 충돌시 비프음 출력
//6)아이템 + 를 먹으면 목숨 1증가

int map[MapY][MapX];

void gotoxy(int x, int y)
{
 COORD Cur;
 Cur.X = x;
 Cur.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
int ddongspeed(int *speed, int *score)
{//speed 컨트롤

 if (*score>30) *speed = 200;
 if (*score>60) *speed = 150;
 if (*score>90) *speed = 100;
 if (*score>150) *speed = 50;
 if (*score>300)*speed = 25;

 return *speed;


}
void Mapline()
{//맵경계표시

 for (int i = 0; i<MapY + 1; i++)
 {
  gotoxy(MapX, i); printf("■\n");
 }
 gotoxy(0, MapY);
 for (int i = 0; i<MapX / 2; i++)printf("■");

}



void InitMap()
{
 for (int i = 0; i<MapY; i++)
 {
  for (int j = 0; j<MapX; j++)
  {
   map[i][j] = 0;
  }
 }
}


void PrintMap(int * P)
{


 for (int i = 0; i<MapY - 1; i++)
 {
  for (int j = 0; j<MapX; j++)
  {
   if (map[i][j] == 0) printf(" ");
   else if (map[i][j] == 1)printf("@");
   else printf("+");                     //LIFE 아이템추가
  }
  printf("\n");
 }


 for (int j = 0; j<MapX; j++)
 {
  if (P[j] == 0) printf(" ");
  else if (P[j] == 1) printf("^");
 }

}

void RowDownMap()
{
 for (int i = MapY - 1; i>0; i--)
 {
  for (int j = 0; j<MapX; j++)
  {
   map[i][j] = map[i - 1][j];

  }
 }

 for (int j = 0; j<MapX; j++)
 {
  map[0][j] = 0;
 }
}

int CollisionDetection(int *score, int * P, int *life)
{                                                              //목숨, 점수 계산 함수

 for (int i = 0; i<MapX; i++)
 {
  if (map[MapY - 1][i] == 1 && P[i] == 1){
   printf("\a");                                               // 충돌시 "삐"
   *life -= 1;

  }
  else if (map[MapY - 1][i] == 1 && P[i] != 1){
   *score += 1;

  }
  else if (map[MapY - 1][i] == 2 && P[i] == 1){
   *life += 1;

  }
 }

 if (*life<0){
  return 1;
 }
 return 0;
}

int main()
{
 int Person[MapX] = { 0, };
 int Position;
 int ch;
 int stage = 1;
 int score = 0;
 int life = 3;
 int speed = 300;

 int PerPosition = (int)(MapX / 2.0);
 InitMap();
 Mapline();

 srand((unsigned)time(NULL));

 Person[PerPosition] = 1;
 for (;;)
 {
  RowDownMap();
  for (int i = 0; i<rand() % 4; i++)              // 라인당 똥 0~3개 나오도록
  {
   Position = rand() % MapX;
   map[0][Position] = 1;

  }

  if ((score + 8) % 7 == 0)                       // 일정확률로 아이템 생성
  {
   for (int j = 0; j<rand() % 2; j++){
    Position = rand() % MapX;
    map[0][Position] = 2;
   }
  }

  if (kbhit())
  {
   ch = getch();
   ch = getch();
   if (ch == 75 && PerPosition>0)
   {
    Person[PerPosition] = 0;
    PerPosition--;
    Person[PerPosition] = 1;
   }
   else if (ch == 77 && PerPosition<MapX - 1)
   {
    Person[PerPosition] = 0;
    PerPosition++;
    Person[PerPosition] = 1;
   }
  }


  gotoxy(0, 0);
  PrintMap(Person);
  if (CollisionDetection(&score, Person, &life))break;
  ddongspeed(&speed, &score);
  Sleep(speed);


  //목숨,스테이지,점수 출력

  gotoxy(MapX + 2, 0);
  printf("LIFE:%d", life);
  gotoxy(MapX + 2, 1);
  printf("STAGE:%d", (score / 30) + 1);
  gotoxy(MapX + 2, 2);
  printf("score:%d", score);


 }

 system("cls");                                                   //최종 점수 출력
 gotoxy(MapX / 2, MapY / 4);
 printf("Game Over!!\n");
 printf("\t邕당신의 점수는 %d점입니다邕\n\n", score);
}


