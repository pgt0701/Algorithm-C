
//�� ����
//pivot = ���� �� �� �������� ������.
#include <stdio.h>

int number = 10
int data[10] = {1,10,5,8,7,6,3,2,9};

void quicSort(int * data, int start, int end){
	if(start>=end){
		//���Ұ� 1���� ���
		return; 
	}
	
	int key = start;	//Ű�� ù���� ����
	int i = start +1;	//i�� ���� ��� ���� 
	int j = end;		//j�� ������ ��� ���� 
	int temp;
	
	while(i<=j){//������ ������ �ݺ�
		 while(data[i])<data[key]){
		 	//Ű ������ ū ��
			 i++; 
		 }		
		 while(data[j]>=data[key]&&j>start){
		 
		 	j--;
		 }
		 
		 if(i>j){
		 	temp = data[j];
		 	data[j]= data[key];
		 	data[key]=temp;
		 }
	}
}
int main()
{
	
	 
 } 
 

