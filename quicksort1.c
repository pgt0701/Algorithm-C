
//퀵 정렬
//pivot = 기준 값 을 기준으로 나눈다.
#include <stdio.h>

int number = 10
int data[10] = {1,10,5,8,7,6,3,2,9};

void quicSort(int * data, int start, int end){
	if(start>=end){
		//원소가 1개인 경우
		return; 
	}
	
	int key = start;	//키는 첫번쨰 원소
	int i = start +1;	//i는 왼쪽 출발 지점 
	int j = end;		//j는 오른쪽 출발 지점 
	int temp;
	
	while(i<=j){//엇갈릴 때까지 반복
		 while(data[i])<data[key]){
		 	//키 값보다 큰 값
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
 

