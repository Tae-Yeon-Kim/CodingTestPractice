#include <stdio.h>
#include <math.h>
/// �ᱹ ������ 2���� 32������ �Ҽ��� ã�� ��Ʈ�� �־��!

 
 
int main(){
	
	int i, j,k;
	
	unsigned int num=0;
	/// or �����ڸ� �̿��� �ƴ��� �ƴ���  �ᱹ�� �ڸ����� 1�� �ִ°Ŵϱ�...
	//num=pow(2,32);
	/// �ᱹ�� �ڸ��������� �־�� �Ǵ°��� Ȯ���Ҽ��ֱ��ִ�...  
	/// ������ ~!!!!!!!!!!!! << 
	for (i=2;i<=32;i++)
	{
		
		if(i==2 || i==3)
		{
				printf("%d �� ���ڰ� �Ҽ� !! \n",i);
				num=num|(1<<(i-1));
				//printf("num �� �� :%d\n",num);
		}
			
			int tt =sqrt(i);
			
				
			for(j=2;j<tt+1;j++){
				
				if(i%j==0 ){
					break;
				} 
				else if(j==tt){
					int t =1;
					int tmp =i;
					printf("%d �� ���ڰ� �Ҽ� !! \n",tmp);
					/*
					while(tmp--){
						t*=2;
						//printf("t�� ���� %d�Դϴ�!\n",t);
					}
					*/
					//printf("���� t���� %d�Դϴ�\n",t);
					num=num|(1<<(i-1));
					//printf("num �� �� :%ld\n",num);
				}
			}

	}
	printf("\n");
	//printf("10���� : %d\n\n",num);
	
	
	int two = num;
    int twomoa[33] = { 0};

    int check = 0;
    while (1)
    {
        twomoa[check] = two % 2;    // 2�� ���� ������ 
        two = two / 2;             // 2�� ���� ��

        check+=1;    //�ڸ��� �ϳ� �������ְ� 

        if (two == 0)    // ���� 0�� �Ǹ� �ݺ��� ������!!!! 
			break;
    }
	
	
	printf("2������ ǥ���غ���!!!!!\n"); 
    // �迭�� ��Ҹ� �������� ���
    for (i = check ; i >= 0; i--)	/// check �� ���� 31!! 
    {
    	
        printf("%d", twomoa[i]);
    }
   
	
    printf("\n");
	

	
	
}
