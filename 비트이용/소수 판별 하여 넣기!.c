#include <stdio.h>
#include <math.h>



int main(){
	
	int i, j,k;
	int t;
	/// 
	unsigned int num=0;
	/*
	printf("1���� ������� ������ �Ҽ��� �Ǻ��Ͻðڽ��ϱ�? ");
	scanf("%d",&t); 
	printf("\n\n");
	*/
	for (i=2;i<=32;i++)
		{
			
			if(i==2 || i==3)
			{
					//printf("%d �� ���� �Ҽ� !! \n",i);
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
						//printf("%d �� ���� �Ҽ� !! \n",tmp);
						/*
						while(tmp--){
							t*=2;
							//printf("t�� ���� %d�Դϴ�!\n",t);
						}
						*/
						//printf("���� t���� %d�Դϴ�\n",t);
						num=num|(1<<(i-1));
						printf("%2d\t %08X\n", i, num ) ; 
					}
				}
	
		}
		
		// �ϴ� �ִ´���� �����Ͽ���! ���� ������ ����ϴ°� ����!!!
		int tmp;
		
		for(j=1;j<=32;j++){
			if(num&1==1){
				printf("%d �� �Ҽ��̴� �Ҽ��մ�!\n",j);
			}
			num=num>>1;		
		}
		// �����°� ���� ����! ���� ���� -> �迭�� �����Ͽ� �����!!! 
		
		//printf("tmp �� ���� %08X�̴�.\n",num);
		 
		
		 
}
