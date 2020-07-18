#include <stdio.h>
#include <string.h>

int menu();
int input();
int search_name();
int search_id();
int search_grade();
int search_major();
int k = 0;

struct student{
   char name[20], major[20];
   int id, grade;
};
struct student list[10];

int main(){
   menu();
}

int menu(){
   int m;
   
   while(1){
      scanf("%d", &m);
      switch(m){
         case 0:
            printf("Bye Bye");
            return 0;
         case 1:
            input(list);
            break;
         case 2:
            search_name(list);
            break;
         case 3:
            search_id(list);
            break;
         case 4:
            search_grade(list);
            break;
         case 5:
            search_major(list);
            break;
         default:
            break;
      }
   }
}

int input(struct student list[]){
   scanf("%s %d %d %s", list[k].name, &list[k].id, &list[k].grade, list[k].major);
   k++;
   return 0;
}

int search_name(struct student list[]){
   char find_name[20];
   scanf("%s", find_name);
   for(int i=0;i<10;i++){
      if(strcmp(find_name, list[i].name) == 0){
         printf("%s %d %d %s\n", list[i].name, list[i].id, list[i].grade, list[i].major);
         break;
      }
   }
   return 0;
}

int search_id(struct student list[]){
   int find_id;
   scanf("%d", &find_id);
   for(int i=0;i<10;i++){
      if(find_id == list[i].id){
         printf("%s %d %d %s\n", list[i].name, list[i].id, list[i].grade, list[i].major);
         break;
      }
   }
   return 0;
}

int search_grade(struct student list[]){
   int find_grade;
   scanf("%d", &find_grade);
   for(int i=0;i<10;i++){
      if(find_grade == list[i].grade)
         printf("%s %d %d %s\n", list[i].name, list[i].id, list[i].grade, list[i].major);
   }
   return 0;
}

int search_major(struct student list[]){
   char find_major[20];
   scanf("%s", find_major);
   for(int i=0;i<10;i++){
      if(strcmp(find_major, list[i].major) == 0)
         printf("%s %d %d %s\n", list[i].name, list[i].id, list[i].grade, list[i].major);
   }
   return 0;
}