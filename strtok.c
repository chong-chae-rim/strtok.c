#include <stdio.h>

char* m_strtok(char* str1, char str2){ //구분자를 받아 그 구분자로 문자열을 나누는 함수

    char* str3 = str1;

    while(*str3 != '\0'){
	    
		if(*str3 == str2){
		    *str3 = '\0';
			printf("\n");
		}
		else {
		    printf("%c",*str3);
		}
		str3++;
	}
	printf("\n");

	return str3;
}

int main(){
    
	char str1[100];//문장
	char str2;//구분자
    char nth;

	printf("문장을 입력하십시오 : ");
	scanf("%[^\n]s",str1);
    scanf("%c",&nth);

	printf("구분자를 입력하십시오 : ");
    scanf("%c",&str2);

    m_strtok(str1, str2);


    return 0;
}
