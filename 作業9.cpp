#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {
	
	int month,day,S;
	
    printf("請輸入一個日期的月份及日期:",month,day);
    scanf("%d,%d",&month,&day);
	S=(month*2+day)%3;
	
	printf("您的運勢為");
	if(S==0){
		printf("普通\n"); 
	}
	else if(S==1){
		printf("吉\n"); 
	}
	else if(S==2){
		printf("大吉\n"); 
	}
	
	system("PAUSE");
	return 0;
}
