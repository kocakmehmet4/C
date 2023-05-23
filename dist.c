#include <stdio.h>
#include <stdlib.h>
int uniqueEle(int array[], int n){
   int i,j;
   int count = 1;
   printf("Satirdaki tekrarsiz elemanlar:\n");
   for(i = 0; i < n; i++){
      for(j = 0; j < n; j++){
         if(array[i] == array[j] && i != j)
         break;
      }
      if(j == n ){
         printf("%d\n",array[i]);
         ++count;
      }
   }
   return -1;
}
int main(){
   int i,j, row, col;
   printf("Satir sayisini giriniz:");
   scanf("%d",&row);
   printf("Sutun sayisini giriniz:");
   scanf("%d",&col);
   int arr[row][col];
   int line[col];   
   for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			printf("%d. satir %d. sutun elemanini giriniz:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
   }	
   for(i=0;i<row;i++)
   {
   		for(j=0;j<col;j++)
		{
   			line[j] = arr[i][j];
	   	}
	    uniqueEle(line, col);
   }
   return 0;
}
