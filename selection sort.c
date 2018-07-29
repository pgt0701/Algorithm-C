

//선택 정렬 : 가장 작은 것을 맨 앞으로 보내자!!! 
#include <stdio.h>

int main(void){
	int i, j, min, index, temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	for(i=0;i<10;i++){
		min = 9999;
		for(j=i; j<10; j++){		
			if(min > array[j]){
				min = array[j];
				index = j;	//위치값 
			}
	}
	temp = array[i];	//temp값에 일시적으로 가장작은값넣는다. 
	array[i] = array[index];
	array[index] =temp;
}
for(i=0;i<10;i++)
{
	printf("%d ", array[i]);
	}	return 0;
}
