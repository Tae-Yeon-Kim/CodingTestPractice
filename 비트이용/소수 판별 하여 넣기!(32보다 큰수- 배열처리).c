#include <stdio.h>
#include <math.h>



int main(){
	
	int i, j,k;
	int t;
	/// 
	unsigned int num[100000]={0};
	/*
	printf("1부터 몇까지의 숫자중 소수를 판별하시겠습니까? ");
	scanf("%d",&t); 
	*/
	t=1000001;
	//printf("\n\n");
	int mog;
	for (i=2;i<=t;i++)
	{
			/// 32의 배수를 기준으로 몫이 달라지니!  -> 나머지를 기준으로 몫을 정하여 num안에들어가는 칸 만들기! 
			if(i%32!=0){
				mog=i/32;
			}
			else{
				mog=i/32-1;
			}
			
			if(i==2 || i==3)
			{
					//printf("%d 의 숫자 소수 !! \n",i);
					num[mog]=num[mog]|(1<<(i-1));
					//printf("%2d\t %08X\n", i, num[mog] ) ; 
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
						
						//printf("최종 t값은 %d입니다\n",t);
						num[mog]=num[mog]|(1<<(i-1));
						//printf("%2d\t %08X\n", i, num[mog] ) ; 
					}
				}
	
		}
		
		// 일단 넣는대까지 성공하였다! 이제 빼내서 출력하는거 도전!!!
		int tmp;
		int check=0; 
		int small,big;
		for(j=1;j<=t;j++){
			if(j%32!=0){
				mog=j/32;
			}
			else{
				mog=j/32-1;
			}
			
			if(num[mog]&1==1){
				//printf("%d 는 소수이다 할수잇다!\n",j);
				check+=1;
				if(check==1){
					small=j;
				}
				big=j;
			}
			num[mog]=num[mog]>>1;		
		}
		// printf("\n\n");
		printf("전체 소수의 개수는 %d개이고 가장 작은수 %d 가장 큰수 %d이다.!",check,small,big);	 
		
		 
}
