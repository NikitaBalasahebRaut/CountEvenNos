/*
 Problem statement :
 Accept N numbers from user and return the frequency of even numbers.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 1

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 0
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 5
 
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 
 #define ERRMEMORY -1
 #define ERRSIZE -2
 
  int CountEven(int iSize,int arr[])
  {
     int iEven = 0;
	 int iCnt = 0;
	 
	 if(arr == NULL)
	 {
		 return ERRMEMORY;
	 }
	 if(iSize <= 0)
	 {
		 return ERRSIZE;
	 }
	 
	 for(iCnt = 0; iCnt < iSize; iCnt++)
	 {
	    if((arr[iCnt] % 2 )== 0)
		{
		   iEven++;
		}
	 }
	 return iEven; 
  }
  
 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iRet = 0;
   int iCnt = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   iRet = CountEven(iNo,ptr);
   
   if(iRet == ERRSIZE)
   {
	   printf("Error : Invalid memory adress \n ");
   }
   else if(iRet == ERRMEMORY)
   {
	   printf("Error : Invalid memory adress \n");
   }
   else
   {
    printf("\n No of elements are : %d",iRet);
   }
   
   free(ptr);
 return 0;
 }
 
 
 /*
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\CountEven>myexe
Enter The N Numbers
5
Enter the values
5
3
7
1
2
values are
5
3
7
1
2

 No of elements are : 1
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\CountEven>myexe
Enter The N Numbers
4
Enter the values
5
-3
7
1
values are
5
-3
7
1

 No of elements are : 0
D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\CountEven>myexe
Enter The N Numbers
9
Enter the values
5
-4
7
8
0
5
0
-8
1
values are
5
-4
7
8
0
5
0
-8
1

 No of elements are : 5
 */