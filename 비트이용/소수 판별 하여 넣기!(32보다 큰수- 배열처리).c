#include <stdio.h>
#include <math.h>



int main(){
	
	int i, j,k;
	int t;
	/// 
	unsigned int num[100000]={0};
	/*
	printf("1���� ������� ������ �Ҽ��� �Ǻ��Ͻðڽ��ϱ�? ");
	scanf("%d",&t); 
	*/
	t=1000001;
	//printf("\n\n");
	int mog;
	for (i=2;i<=t;i++)
	{
			/// 32�� ����� �������� ���� �޶�����!  -> �������� �������� ���� ���Ͽ� num�ȿ����� ĭ �����! 
			if(i%32!=0){
				mog=i/32;
			}
			else{
				mog=i/32-1;
			}
			
			if(i==2 || i==3)
			{
					//printf("%d �� ���� �Ҽ� !! \n",i);
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
						//printf("%d �� ���� �Ҽ� !! \n",tmp);
						
						//printf("���� t���� %d�Դϴ�\n",t);
						num[mog]=num[mog]|(1<<(i-1));
						//printf("%2d\t %08X\n", i, num[mog] ) ; 
					}
				}
	
		}
		
		// �ϴ� �ִ´���� �����Ͽ���! ���� ������ ����ϴ°� ����!!!
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
				//printf("%d �� �Ҽ��̴� �Ҽ��մ�!\n",j);
				check+=1;
				if(check==1){
					small=j;
				}
				big=j;
			}
			num[mog]=num[mog]>>1;		
		}
		// printf("\n\n");
		printf("��ü �Ҽ��� ������ %d���̰� ���� ������ %d ���� ū�� %d�̴�.!",check,small,big);	 
		
		 
}
