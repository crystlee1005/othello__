#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];  //gameboard 선언  
int i, j;  // 필요한 변수들 선언  
char b = '@';  // 검정색 알
char w = 'O';  // 하얀색 알	
char x = ' '; // 빈 칸
char start; // 시작 버튼 	   


// 출력 함수 
	 
void print_othello (char a[N][N]){
     
     
 printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", a[i][j] );
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }
}

	    
// 게임을  초기화 하는 함수__ 정중앙 4칸에 흰색 검정색 알을 2개씩 대각선 모양으로 배치    
char init_othello(char a[N][N])   
{  
    
	 
	 for(i=0; i<N; i++){
     
	 for(j=0; j<N; j++) {
	 	                                  //N*N 게임보드판 이므로, 배열은 [0][0] ~ [N-1][N-1] 까지 있다. 
	 	if ((i == (N/2-1 )&& (j == (N/2-1))))
       a[i][j] = b; 
       
	    else if ((i == (N/2)) && (j == (N/2)))
	    a[i][j] = b; 
	    
    	else if ((i == (N/2-1)) && (j == (N/2)))
        a[i][j] = w; 
        
      	else if ((i == (N/2)) && (j == (N/2-1)))
        a[i][j] = w; 
    
	    else 
		a[i][j]= x;
	 }
	 
	
}
	 
    
	}


// 메인 함수_ 필요한 함수 호출  ----    
void main() { 
    printf("********othello**********\n"); // 게임시작을 알리는 문장 출력  
    printf("-> black stone : @\n"); //검정색 돌과 하얀색 돌이 무엇인지 알려주는 문장 출력  
    printf("-> white stone : O\n");	 
	
	 init_othello(gameboard);   // 초기 오델로 함수 호출 
	 print_othello(gameboard); //출력 함수 - 초기 오델로 함수를 출력하도록 함  

  printf(" if you want to start, input 'start' and press enter!  -->   ");
  scanf("%c", &start);
  
  
     if( start ==start)
  	 {
	    printf("&& O turn &&\n");
  	   printf("the number of O: \n");
  	   printf("input coordinates:  ");
  	   scanf("%i", &i);
  	   
	   
	    }
  	//white player 함수 선언 
  	
	   
  
  	 
}    

