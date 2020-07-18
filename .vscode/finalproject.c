#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>
#include <mmsystem.h>    
#pragma comment(lib,"winmm.lib") 



/*file uploader*/
char Type[27];
char NameType[27] = "LOCK.6wh";
char DeCodNameType[27];

void FileEncoding();
void FileDecoding();
/*file uploader*/


/*black jack*/
void init(int *Card);
void cardSet(int *DealerC, int *PlayerC, int *Card);
int gameStart(int *DealerC, int *PlayerC);
int cardPrt(int *Card, int *i, int *Aa);
void GameFinish(int gameSet);
/*black jack*/

void hacked()
{
   system("cls");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14|4<<4);
   printf("        sBSB:                                              XBPB:        \n");
   printf("      .gB  sB                                              B  :B5       \n");
   printf("    ;gDc    B:                                            XB    wRE:    \n");
   printf("    BD      :B,                                          LB      .BB    \n");
   printf("     LPMBQr  .BZ                                        BB   JQBDPi     \n");
   printf("         :RBL  OB,        ;72aGDRRQQBRQggpH17:        cBs  PBp,         \n");
   printf("            QB,  Bp   ;gBB6Jr;,,       ..:;vJGBBK:  .QR  cBP            \n");
   printf("             ,BB  B7LBBr                        LBB;OB .BR           \n");
   printf("               ;BErB6                             .BR7MB.               \n");
   printf("                 6B                                 :Bs                 \n");
   printf("                QM                                    BD                \n");
   printf("               GB                                      Qc               \n");
   printf("               B                                       ,Q               \n");
   printf("              :B                                        B            \n");
   printf("               B:                                      JB            \n");
   printf("              7B        :rs1aHL        1PU1cr,        B.             \n");
   printf("                QB     BB      PB      BJ      BB     Bs             \n");
   printf("                 RB.  BE        B     .B        Bg  :BJ              \n");
   printf("                  :Q  BE       BE      BD       B1 ,B                \n");
   printf("                   B   B7     BB        BR     EB  .B                \n");
   printf("                 :B    BBsrOQ1          OBS7JBB    B                 \n");
   printf("                  .B     ,L1i     BLPB     7Jv.     B                \n");
   printf("                   QB           ,BBLRBB            BD                \n");
   printf("                    OBP:        Q B 7H;B        :DB2                 \n");
   printf("                      7ZO5:     BBB  BBB     :XGp;                   \n");
   printf("                       JBBB     s    s    :BBB;                      \n");
   printf("                      sQ7 BiB              BrB HB;                   \n");
   printf("                    LBO  B6 BQ2ZDMRBMMRgPUBD BK  BBi                 \n");
   printf("               :JZBBZ  ;Br   :;,.       .:;:  KB  ,gBMZ7,            \n");
   printf("             RBJ;:    OB                       :Bv    :7JBs          \n");
   printf("             BB;     RB          HACKED!!        B7     7BP          \n");
   printf("               LQB  .B                           .B  :BDr            \n");
   printf("                 wB.BJ                            BR,B:              \n");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
   
   
}
void lose()
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
   printf("\n\n\n      d888888b d8888b. d888888b  .d88b.  d888888b     db       .d88b.  db      \n");
   printf("        `88'   88  `8D   `88'   .8P  Y8. `~~88~~'     88      .8P  Y8. 88      \n");
   printf("         88    88   88    88    88    88    88        88      88    88 88      \n");
   printf("         88    88   88    88    88    88    88        88      88    88 88      \n");
   printf("        .88.   88  .8D   .88.   `8b  d8'    88        88booo. `8b  d8' 88booo. \n");
   printf("      Y888888P Y8888D' Y888888P  `Y88P'     YP        Y88888P  `Y88P'  Y88888P \n\n\n");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
   printf("    d888888888b      d8     8b  d8    8b       d8                             88b\n");
   printf("            88b       d88 8b     d88 8b       d8   d88b              d88b      88b\n");
   printf("            88D          8888b     8888b     d8   d8  8b  d888888b  d8  8b      88b\n");
   printf("    d888888888b           d8        d8       d8           d8    8b              88b\n");
   printf("            88D          8888b     8888b     d8           d8    8b              88b\n");
   printf("            88b       d88 8b     d88 8b       d8           d8  8b              88b\n");
   printf("            88p      d8     8b  d8    8b       d8           d88b              88P\n");
}
void win()
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   printf("\n\n                                                                 gg                \n");
   printf("                                                                 ""                \n");
   printf("    gg     gg     ,ggggg,  j'gg      gg        gg    gg    gg    gg   yg,,ggg,  \n");
   printf("    I8     8I    dP'  'Y8gP  I8      8I        I8    I8    88    88    '8P' '8, \n");
   printf("    I8,   ,8I   i8'    ,8I   I8,    ,8I        I8    I8    8I '  88     8I   8I \n");
   printf("   ,d8b, ,d8I ,,d8,   ,d8'  ,d8b,  ,d8b,      ,d8,  ,d8,  ,8I  q 88     8I   YI,\n");
   printf("    'Y88P''88P   Y8888P'     '8PY88PY8'         PY88P''Y88P'     8P     8I  `Y8  \n");
   printf("         ,d8I'                                                                    \n");
   printf("       ,dP'8I                                                                     \n");
   printf("      ,8   8I                                                                     \n");
   printf("      I8   8I                                                                     \n");
   printf("      `8, ,8I                                                                     \n");
   printf("       `Y8P''                                                                      \n");
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
   FileDecoding();
}
void draw()
{
   printf("\n\n   :::::::::  :::::::::      :::     :::       ::: \n");
   printf("   :+:    :+: :+:    :+:   :+: :+:   :+:       :+: \n");
   printf("   +:+    +:+ +:+    +:+  +:+   +:+  +:+       +:+ \n");
   printf("   +#+    +:+ +#++:++#:  +#++:++#++: +#+  +:+  +#+ \n");
   printf("   +#+    +#+ +#+    +#+ +#+     +#+ +#+ +#+#+ +#+ \n");
   printf("   #+#    #+# #+#    #+# #+#     #+#  #+#+# #+#+#  \n");
   printf("   #########  ###    ### ###     ###   ###   ###\n");
   printf("\n\n\n   Draw!! restarting game!!\n\n");
   Sleep(1000);
}
void print()
{
   printf("\n\n");
   printf("   ==========================================================================================\n");
   printf("   ===        =====  ==============  ====  =========  ===================  ==================\n");
   printf("   ===  ===========  ==============  ====  =========  ===================  ==================\n");
   printf("   ===  ===========  ==============  ====  =========  ===================  ==================\n");
   printf("   ===  =======  ==  ===   ========  ====  ==    ===  ===   ====   ======  ===   ===  =   ===\n");
   printf("   ===      =======  ==  =  =======  ====  ==  =  ==  ==     ==  =  ===    ==  =  ==    =  ==\n");
   printf("   ===  =======  ==  ==     =======  ====  ==  =  ==  ==  =  =====  ==  =  ==     ==  =======\n");
   printf("   ===  =======  ==  ==  ==========  ====  ==    ===  ==  =  ===    ==  =  ==  =====  =======\n");
   printf("   ===  =======  ==  ==  =  =======   ==   ==  =====  ==  =  ==  =  ==  =  ==  =  ==  =======\n");
   printf("   ===  =======  ==  ===   =========      ===  =====  ===   ====    ===    ===   ===  =======\n");
   printf("   ==========================================================================================\n\n\n");
}

/////////////////////////여기부터 가위바위보 
void game()
{
   int Com_Play, User_Play;
   system("cls");

   printf("\n\n");
   printf("   :::::::::    ::::::::   :::::::::      ::::::::       :::      ::::    ::::   ::::::::::\n");
   printf("   :+:    :+:  :+:    :+:  :+:    :+:    :+:    :+:    :+: :+:    +:+:+: :+:+:+  :+:\n");
   printf("   +:+    +:+  +:+         +:+    +:+    +:+          +:+   +:+   +:+ +:+:+ +:+  +:+\n");
   printf("   +#++:++#:   +#++:++#++  +#++:++#+     :#:         +#++:++#++:  +#+  +:+  +#+  +#++:++#\n");
   printf("   +#+    +#+         +#+  +#+           +#+   +#+#  +#+     +#+  +#+       +#+  +#+\n");
   printf("   #+#    #+#  #+#    #+#  #+#           #+#    #+#  #+#     #+#  #+#       #+#  #+#\n");
   printf("   ###    ###   ########   ###            ########   ###     ###  ###       ###  ##########\n\n");

   srand(time(NULL));

   while (1)
   {
      Com_Play = rand() % 3 + 1;
      printf("\n   1.Scissors  2.Rock  3.Paper >> ");
      scanf("%d", &User_Play);               //1, 2, 3중 입력받음   
      if (User_Play != 1 && User_Play != 2 && User_Play != 3) {   //1, 2, 3외의 값을 입력하면 다시 입력
         printf("   Out of range! \n\n");
         continue;
      }
      if (User_Play == 1 && Com_Play == 1) {
         printf("\n   You : Scissors\n\n   Computer :Scissors\n\n");
         draw();
         game();
         break;
      }
      else if (User_Play == 1 && Com_Play == 2) {
         printf("\n   You : Scissors\n\n   Computer : Rock\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
         printf("   Lose!\n\n");
         lose();
         break;
      }
      else if (User_Play == 1 && Com_Play == 3) {
         printf("\n   You : Scissors\n\n   Computer : Paper\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("   Win!\n\n");
         win();
      }
      else if (User_Play == 2 && Com_Play == 1) {
         printf("\n   You : Rock\n\n   Computer : Scissors\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("   Win!\n\n");
         win();
      }
      else if (User_Play == 2 && Com_Play == 2) {
         printf("\n   You : Rock\n\n   Computer : Rock\n\n");
         draw();
         game();
         break;
      }
      else if (User_Play == 2 && Com_Play == 3) {
         printf("\n   You : Rock\n\n   Computer : Paper\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
         printf("   Lose!\n\n");
         lose();
         break;
      }
      else if (User_Play == 3 && Com_Play == 1) {
         printf("\n   You : Paper\n\n   Computer : Scissors\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
         printf("   Lose!\n\n");
         lose();
         break;
      }
      else if (User_Play == 3 && Com_Play == 2) {
         printf("\n   You : Paper\n\n   Computer : Rock\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("   Win!!\n\n");
         win();
      }
      else {
         printf("\n   You : Paper\n\n   Computer : Paper\n\n");
         draw();
         game();
         break;
      }
   }
}
///////////////////////여기까지 가위바위보

///////////////////////여기부터 업다운2 
void game2() 
{
   int m, n, k, a, nansu1, nansu2, i, right;
   bool mcheck = 0, ncheck = 0;
   system("cls");

   printf("\n\n");
   printf("       :::    ::: :::::::::      :::::::        :::::::::   ::::::::  :::       ::: ::::    :::       ::::::::\n");
   printf("       :+:    :+: :+:    :+:    :+:   :+:       :+:    :+: :+:    :+: :+:       :+: :+:+:   :+:      :+:    :+: \n");
   printf("       +:+    +:+ +:+    +:+     +:+ +:+        +:+    +:+ +:+    +:+ +:+       +:+ :+:+:+  +:+            +:+  \n");
   printf("       +#+    +:+ +#++:++#+       +#++:  ++#    +#+    +:+ +#+    +:+ +#+  +:+  +#+ +#+ +:+ +#+          +#+    \n");
   printf("       +#+    +#+ +#+            +#+ +#+#+#     +#+    +#+ +#+    +#+ +#+ +#+#+ +#+ +#+  +#+#+#        +#+      \n");
   printf("       #+#    #+# #+#           #+#   #+#+      #+#    #+# #+#    #+#  #+#+# #+#+#  #+#   #+#+#       #+#       \n");
   printf("        ########  ###            ##########     #########   ########    ###   ###   ###    ####      ########## \n\n\n");

   do {
      srand((int)time(NULL));
      nansu1 = rand() % 51;
      nansu2 = rand() % 51;
   } while (nansu1 == nansu2);

   for (i = 0; i < 6; i++) {
      if (!mcheck && !ncheck) {
         printf("   Please enter two numbers >> ");
         scanf("%d%d", &m, &n);
      }
      else if (mcheck) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("   Left correct!! ");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
         printf("Please enter rest numbers >> ");
         scanf("%d", &n);
      }
      else if (ncheck) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("   Right correct!! ");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
         printf("Please enter rest numbers >> ");
         scanf("%d", &m);
      }
      if (n > 50 || n == 0 || m > 50 || m == 0) {
         printf("   Out of range. again >> ");
         i--;
         continue;
      }

      if (!mcheck)
      {
         if (m > nansu1) {
            printf("\n   Down↓ ");
         }
         else if (m < nansu1) {
            printf("\n   Up↑ ");
         }
         else
            mcheck = 1;
      }
      if (mcheck) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("\n   Correct! ");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
      }
      if (!ncheck) {
         if (n > nansu2) {
            printf("   Down↓ \n\n");
         }
         else if (n < nansu1) {
            printf("   Up↑ \n\n");
         }
         else
            ncheck = 1;
      }
      if (ncheck) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("   Correct! \n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
      }
      if (mcheck&&ncheck) {
         win();
         break;
      }
   }
   if (i == 6)
      lose();
}
/////////////////////// 여기까지 업다운2

///////////////////////여기부터 숫자야구  
void game3() 
{
   int Com_num[3] = { 0 }, User_input[3];
   int ball = 0, strike = 0;
   int k;
   system("cls");
   printf("\n\n");
   printf("        :::::::::      :::      ::::::::  ::::::::::      :::::::::      :::     :::        :::          \n");
   printf("        :+:    :+:   :+: :+:   :+:    :+: :+:             :+:    :+:   :+: :+:   :+:        :+:          \n");
   printf("        +:+    +:+  +:+   +:+  +:+        +:+             +:+    +:+  +:+   +:+  +:+        +:+          \n");
   printf("        +#++:++#+  +#++:++#++: +#++:++#++ +#++:++#        +#++:++#+  +#++:++#++: +#+        +#+          \n");
   printf("        +#+    +#+ +#+     +#+        +#+ +#+             +#+    +#+ +#+     +#+ +#+        +#+          \n");
   printf("        #+#    #+# #+#     #+# #+#    #+# #+#             #+#    #+# #+#     #+# #+#        #+#          \n");
   printf("        #########  ###     ###  ########  ##########      #########  ###     ### ########## ##########   \n\n\n\n");

   srand((unsigned int)time(NULL));

   while (1) {
      Com_num[0] = rand() % 10;
      Com_num[1] = rand() % 10;
      Com_num[2] = rand() % 10;

      if (Com_num[0] == Com_num[1] || Com_num[0] == Com_num[2] || Com_num[1] == Com_num[2])
         continue;
      else
         break;
   }

   for (k = 0; k < 5; k++) {
      printf("   Enter the three number >> ");

      for (int i = 0; i < 3; i++)
         scanf("%d", &User_input[i]);

      if (User_input[0] > 9 || User_input[0] < 1 || User_input[1]>9 || User_input[1] < 1 || User_input[2]>9 || User_input[2] < 1)
      {
         printf("\n   Out of range\n\n");
         k--;
         continue;
      }
      if (User_input[0] == User_input[1] || User_input[1] == User_input[2] || User_input[0] == User_input[2])
      {
         printf("\n   Duplicate number\n\n");
         k--;
         continue;
      }

      for (int i = 0; i < 3; i++) {
         if (User_input[i] == Com_num[i])
            strike++;
         else {
            for (int j = 0; j < 3; j++) {
               if (User_input[i] == Com_num[j])
                  ball++;
            }
         }
      }
      if (strike == 3) {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
         printf("\n   HOME RUN!!\n\n");
         win();
      }
      else if (strike == 0 && ball == 0)
      {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
         printf("\n   Out\n\n");
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
      }
      else {
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
         printf("\n   %dS ", strike);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
         printf("%dB\n\n", ball);
         SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
         strike = 0;
         ball = 0;
      }
   }
   if (k == 5)
      lose();
}
/////////////////// 여기까지 숫자야구 

/////////////////// 여기부터 블랙잭  
void game4()
{
   int Card[52];
   int DealerC[10], PlayerC[10];
   int gameSet = 0, i = 0;
   
   system("cls");
   init(Card);                        // 덱을 짭니다. 
   cardSet(DealerC, PlayerC, Card);         // 플레이어에게 카드 배분 
   gameSet = gameStart(DealerC, PlayerC);      // 블랙잭 시작 
   GameFinish(gameSet);                  // 블랙잭 종료 
}

void init(int *Card)
{
   // 카드 랜덤 셋팅
   int w = 0, r = 0;
   int swit[52];
   for (int i = 0; i < 52; i++) {
      swit[i] = false;
   }

   srand(time(NULL));
   while (w < 52) {
      r = rand() % 52;
      if (swit[r] == false) {
         swit[r] = true;
         Card[w] = r + 1;
         w++;
      }
   }
}

void cardSet(int *DealerC, int *PlayerC, int *Card)
{
   for (int i = 0; i < 10; i++)
   {
      DealerC[i] = Card[i];
      PlayerC[i] = Card[i + 10];
   }
}
int gameStart(int *DealerC, int *PlayerC)
{
   int i = 0, d = 0;
   int Aa = 0, Ab = 0, gg = 0; // A구분자 A가 있으면 1 없으면 0
   int HS, Cnt = 2, Dsum = 0, Psum = 0;
   int GameSet = -1;

   //블랙잭 시작 
   printf("\n\n");
   printf("   :::::::::  :::          ::::::      ::::::::  :::   :::          :::     ::::::      ::::::::  :::   :::\n");
   printf("   :+:    :+: :+:         :+:  :+:    :+:        :+:  +:+           :+:    :+:  :+:    :+:        :+:  +:+\n");
   printf("   +:+    +:+ +:+         +:+  +:+   +:+         +:+ ::+            +:+    +:+  +:+   +:+         +:+ ::+\n");
   printf("   +#++:++#+  +#+        +#++::++#+  +#+         +#++:              +:+   +#++::++#+  +#+         +#++:\n");
   printf("   +#+    +#+ +#+        +#+    +#+  +#+         +#+ ::+      +#+   +#+   +#+    +#+  +#+         +#+ ::+\n");
   printf("   #+#    #+# #+#       #+#      #+#  #+#        #+#  #+#     #+#   #+#  #+#      #+#  #+#        #+#  #+#\n");
   printf("   #########  ######### ###      ###   ########  ###   ###     #######   ###      ###   ########  ###   ###\n\n\n");

   //카드 공개 
   printf("\n\n   Dealer's Card \n\n");
   Dsum = Dsum + cardPrt(DealerC, &d, &Ab);
   printf("???"); // 딜러 카드의 한개는 비공개 

   printf("\n\n   Player's Card \n\n");
   Psum = Psum + cardPrt(PlayerC, &i, &Aa);
   Psum = Psum + cardPrt(PlayerC, &i, &Aa);
   printf("   Total : %d\n\n", Psum);

   if (Psum == 21) {
      GameSet = 1;
      printf("\n   Player BlackJack!!\n\n");
      win();
      return 0;
   }

   while (1) {
      printf("   1. Hit  2. Stay >> ");
      scanf("%d", &HS);
      printf("\n");
      if (HS == 1)
      {
         for (int j = 0; j < Cnt; )
            cardPrt(PlayerC, &j, &gg);

         Psum = Psum + cardPrt(PlayerC, &i, &Aa);
         Cnt++;
         if (Aa == 1 && Psum > 21) {
            Psum = Psum - 10; // A가 있고 21이 넘으면 -10;
            Aa = 0;
         }
         printf("   Total : %d\n\n", Psum);
         if (Psum == 21) {
            GameSet = 1;
            printf("\n\n   Player BlackJack!!\n");
            break;
         }

         if (Psum > 21)
         {
            GameSet = -1;
            break;
         }
      }
      else {
         break;
      }
   }
   printf("   Dealer's Card \n\n");

   int Cnt2 = 1;
   for (int j = 0; j < Cnt2;) {
      cardPrt(DealerC, &j, &Ab);
      Dsum = Dsum + cardPrt(DealerC, &j, &Ab);
      Cnt2++;
   }
   if (Dsum < Psum && Psum <= 21) {
      Dsum = Dsum + cardPrt(DealerC, &d, &Ab);
      if (Dsum > 21) GameSet = 1;
   }
   if (Ab == 1 && Dsum > 21) {
      Dsum = Dsum - 10; // A가 있고 21이 넘으면 -10;
      Ab = 0;
   }
   printf("   Total : %d", Dsum);
   if (Dsum == 21) {
      printf("\n\n   Dealer BlackJack!!\n\n");
      GameSet = -1;
   }
   // 승,패,무승부 
   if (Psum == Dsum)
      GameSet = 0;
   if (Psum > Dsum && Psum <= 21)
      GameSet = 1;
   return GameSet;
}

int cardPrt(int *Card, int *i, int *Aa)
{
   int pattern, num, Snum;

   pattern = (Card[*i] - 1) / 13;
   switch (pattern) {      // 문양 정하기 
   case 0:
      printf("   ♠ ");
      break;
   case 1:
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
      printf("   ◆ ");
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
      break;
   case 2:
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
      printf("   ♥ ");
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
      break;
   case 3:
      printf("   ♣ ");
      break;
   }
   //숫자 및 알파벳 구분
   num = (Card[*i] - 1) % 13;

   switch (num) {
   case 0:
      printf("A \t");
      Snum = 11;
      *Aa = 1;
      break;
   case 10:
      printf("J \t");
      Snum = 10;
      break;
   case 11:
      printf("Q \t");
      Snum = 10;
      break;
   case 12:
      printf("K \t");
      Snum = 10;
      break;            //A는 1또는 11로, J,Q,K는 모두 10으로 간주. 
   default:
      printf("%d \t", num + 1);
      Snum = num + 1;               // 숫자일 때 출력 
   }
   *i = *i + 1;
   return Snum;
}

void GameFinish(int gameSet)
{
   if (gameSet == 1)
      win();

   else if (gameSet == -1)
      lose();
   else
   {
      printf("\n   Draw! restarting game...");
      game4();
   }
}
////////////////////////////////////// 여기까지 블랙잭

/*파일 암호화 하는 부분*/
void FileEncoding()
{
   FILE * FileCreat = NULL;
   int File;
   printf("   ※ Enter an extension\n\n");
   while(1)
   {
      printf("   Enter the file name >> ");
      gets(Type);
      FileCreat = fopen(Type, "rb");
      if (FileCreat == NULL)
      {
         printf("\n   File doesn't exist \n");
         continue;
      }
      else
      {
         FILE * CreatFile;
         CreatFile = fopen(NameType, "wb");
         printf("   LOADING.......\n");
         while ((File = fgetc(FileCreat)) != EOF)
         {
            File ^= 13;
            fputc(File, CreatFile);
         }
         fclose(CreatFile);
         fclose(FileCreat);
         remove(Type);
         hacked();
         PlaySound(TEXT("C:\\Users\\junho\\Desktop\\fianlproject.c\\mymusic.wav"), NULL,SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NODEFAULT);


         printf("\n\n   Your file has been LOCKED named LOCK.6wh\n\n   Check your file\n\n");
         printf("\n\n   If you want it back, win against the computer\n");
         printf("   ---------- Press Enter Key ----------");
         getchar();
         break;
      }
   }
}

/*게임 승리하면 함호화 된거 풀어줌*/
void FileDecoding()
{
   FILE * DeCodFileCreat = NULL;
   int File;
   char DeType[27];
   DeCodFileCreat = fopen(NameType, "rb");
      
   FILE * DeCodCreatFile;
   strcpy(DeCodNameType,Type);
   DeCodCreatFile = fopen(DeCodNameType, "wb");
   while ((File = fgetc(DeCodFileCreat)) != EOF)
   {
      File ^= 13;
      printf(".");
      fputc(File, DeCodCreatFile);
   }
   fclose(DeCodCreatFile);

   printf("\n\n   I returned your file!\n\n   Be careful for fishing program\n");

   fclose(DeCodFileCreat);
   remove(NameType);
   printf("\n");
}

int main()
{
   remove(NameType);
   print();
   FileEncoding();
   int random;

   srand(time(NULL));
   random = rand() % 4;
   if (random == 0)
      game();
   else if (random == 1)
      game2();
   else if (random == 2)
      game3();
   else if (random == 3)
      game4();
   remove(NameType);
   return 0;
}