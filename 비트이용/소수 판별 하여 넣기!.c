#include <stdio.h>
#include <math.h>



int main(){
	
	int i, j,k;
	int t;
	/// 
	unsigned int num=0;
	/*
	printf("1부터 몇까지의 숫자중 소수를 판별하시겠습니까? ");
	scanf("%d",&t); 
	printf("\n\n");
	*/
	for (i=2;i<=32;i++)
		{
			
			if(i==2 || i==3)
			{
					//printf("%d 의 숫자 소수 !! \n",i);
					num=num|(1<<(i-1));
					printf("%2d\t %08X\n", i, num ) ; 
			}
				
				int tt =sqrt(i);
				
					
				for(j=2;j<tt+1;j++){
					
					if(i%j==0 ){
						break;
					} 
					else if(j==tt){
						int t =1;
						int tmp =i;
						//printf("%d 의 숫자 소수 !! \n",tmp);
						/*
						while(tmp--){
							t*=2;
							//printf("t의 값은 %d입니다!\n",t);
						}
						*/
						//printf("최종 t값은 %d입니다\n",t);
						num=num|(1<<(i-1));
						printf("%2d\t %08X\n", i, num ) ; 
					}
				}
	
		}
		
		// 일단 넣는대까지 성공하였다! 이제 빼내서 출력하는거 도전!!!
		int tmp;
		
		for(j=1;j<=32;j++){
			if(num&1==1){
				printf("%d 는 소수이다 할수잇다!\n",j);
			}
			num=num>>1;		
		}
		// 빼내는거 까지 성공! 이제 할일 -> 배열을 생성하여 만들기!!! 
		
		//printf("tmp 의 값은 %08X이다.\n",num);
		 
		
		 
}
