#include <stdio.h>
#include <math.h>
/// 결국 문제는 2부터 32까지중 소수를 찾아 비트에 넣어보기!

 
 
int main(){
	
	int i, j,k;
	
	unsigned int num=0;
	/// or 연산자를 이용해 아니지 아니지  결국은 자리수에 1을 넣는거니깐...
	//num=pow(2,32);
	/// 결국은 자리수에대해 넣어야 되는것을 확인할수있긴있다...  
	/// 연산자 ~!!!!!!!!!!!! << 
	for (i=2;i<=32;i++)
	{
		
		if(i==2 || i==3)
		{
				printf("%d 의 숫자가 소수 !! \n",i);
				num=num|(1<<(i-1));
				//printf("num 의 값 :%d\n",num);
		}
			
			int tt =sqrt(i);
			
				
			for(j=2;j<tt+1;j++){
				
				if(i%j==0 ){
					break;
				} 
				else if(j==tt){
					int t =1;
					int tmp =i;
					printf("%d 의 숫자가 소수 !! \n",tmp);
					/*
					while(tmp--){
						t*=2;
						//printf("t의 값은 %d입니다!\n",t);
					}
					*/
					//printf("최종 t값은 %d입니다\n",t);
					num=num|(1<<(i-1));
					//printf("num 의 값 :%ld\n",num);
				}
			}

	}
	printf("\n");
	//printf("10진수 : %d\n\n",num);
	
	
	int two = num;
    int twomoa[33] = { 0};

    int check = 0;
    while (1)
    {
        twomoa[check] = two % 2;    // 2로 나눈 나머지 
        two = two / 2;             // 2로 나눈 몫

        check+=1;    //자리수 하나 더더해주고 

        if (two == 0)    // 몫이 0이 되면 반복을 끝내기!!!! 
			break;
    }
	
	
	printf("2진수로 표현해보기!!!!!\n"); 
    // 배열의 요소를 역순으로 출력
    for (i = check ; i >= 0; i--)	/// check 의 값은 31!! 
    {
    	
        printf("%d", twomoa[i]);
    }
   
	
    printf("\n");
	

	
	
}
