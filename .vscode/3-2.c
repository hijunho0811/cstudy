#include <stdio.h>
#include <string.h>

int size=0, i, menu, flag=0;
char input_arr[20], select;
int input_int;

struct information{
	int ISBN, year, check;
	char index[50], writer[50];
};

struct information library[1000];

void menu1_input(struct information library[]);
void menu2_search(struct information library[]);
void menu3_borrow(struct information library[]);
void menu4_return(struct information library[]);
void menu5_output(struct information library[]);


int main(void){
		 
	while(1){
		printf("\n1: 도서 정보 입력 2: 도서 검색 3: 도서 대출 4: 도서 반납 5: 도서 정보 출력 6: 프로그램 종료\n");
		printf("메뉴를 입력하세요: ");

		scanf("%d", &menu);
			 
		if( menu == 1 )	menu1_input(library);
		else if( menu == 2 ) menu2_search(library);
		else if( menu == 3 ) menu3_borrow(library);
		else if( menu == 4 ) menu4_return(library);
		else if( menu == 5 ) menu5_output(library);
		else if( menu == 6 ) break;
	
	}
}

void menu1_input(struct information library[]){
	scanf("%d %s %s %d", &library[size].ISBN, library[size].index, library[size].writer, &library[size].year);
	for(i=0; i<size; i++)
		if(library[i].ISBN == library[size].ISBN){
			printf("오류: ISBN 중복\n");
			size--; 
			break;
		}
	library[size].check = 1;
	size++;
}

void menu2_search(struct information library[]){
	printf("A: 도서명 검색\nB: 저자 검색\n");

	scanf(" %c", &select);
	
	if(select == 'A'){
		scanf("%s", input_arr);
		for(i=0, flag=0; i<size; i++)
			if(strcmp(library[i].index, input_arr) == 0) {
				printf("%08d\t%s\t%s\t%d\t", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
				if( library[i].check == 1 ) printf("대출가능\n");
				else printf("대출중\n");
				flag = 1;
			}
		if(!flag) printf("존재하지 않는 저자이거나 도서명입니다\n");
	}
	else if(select == 'B'){
		scanf("%s", input_arr);
		for(i=0, flag=0; i<size; i++)
			if(strcmp(library[i].writer, input_arr) == 0){
				printf("%08d\t%s\t%s\t%d\t", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
				if( library[i].check == 1 )
					printf("대출가능합니다.\n");
					else printf("대출중입니다.\n");
				flag = 1;
			}
	if(!flag) printf("오류: 존재하지 않는 저자명/도서명\n"); 
	}
}

void menu3_borrow(struct information library[]){
	printf("대출할 도서명을 입력하세요: ");
	scanf("%s", input_arr);
	for(i=0, flag=0; i<size; i++)
		if(strcmp(library[i].index, input_arr) == 0) {
		 	if( library[i].check == 1 ){
	 			printf("대출이 완료되었습니다. 도서명: %s ISBN: %08d\n", library[i].index, library[i].ISBN);
	 	 		library[i].check = 0;	
		 		}
	 	 		else printf("오류: 대출중\n"); 
	 	 	flag=1;
		}
			if(!flag) printf("오류: 존재하지 않는 도서명\n"); 
}

void menu4_return(struct information library[]){
	printf("반납할 도서명을 입력하세요: \n");
	scanf("%s", input_arr);
	for(i=0, flag=0; i<size; i++)
		if(strcmp(library[i].index, input_arr) == 0) {
		 	if( library[i].check == 0 ){
	 			printf("반납이 완료되었습니다. 도서명: %s ISBN: %08d\n", library[i].index, library[i].ISBN);
	 	 		library[i].check = 1;	
		 		}
	 	 		else printf("오류: 대출 가능한 도서\n"); 
	 	 	flag=1;
		 	}
			if(!flag) printf("오류: 존재하지 않는 도서명\n"); 
}

void menu5_output(struct information library[]){
	printf("A: 대출가능도서 출력\nB: 전체도서 출력\n"); 
	scanf(" %c", &select);
	if(select == 'A'){
		for(i=0; i<size; i++)
			if( library[i].check )
			printf("%08d\t%s\t%s\t%d\t\n", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
	}else if(select == 'B'){
		for(i=0; i<size; i++){
			printf("%08d\t%s\t%s\t%d\t", library[i].ISBN, library[i].index, library[i].writer, library[i].year);
			if( !library[i].check )printf("대출 중\n");
			else if( library[i].check ) printf("대출 가능\n"); 
		}
	}
		
}