
#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{

	int count = 5;               //数组的长度 
	double powers[5] = {45771,42322,42907,43625,44563};
	double deletepower;        //要删除的战力值 
	int deleteindex = -1;        //要删除的战力值的下标 
	int i;                  //循环变量 
	printf("请用户输入要删除的战力值：");     //输入要删除的战力值 
	scanf("%lf",&deletepower) ;
	for(i = 0;i < count;i++)
	{
		if(powers[i] == deletepower)
		{
			deleteindex = i;               //找到后，记录要删除的战力值的下标 
			break;                         //找到后，就跳出循环，提高效率 
	    }
        
    }
    printf("%d\n",deleteindex); 
	    if(deletepower == -1)
	    {
	    	printf("1111111没有找到您要删除的数据！删除失败！"); 
		}
		else
		{
		    for(i = deleteindex;i < count - 1;i++)    //从要删除的战力值的下标开始 
		   	powers[i] = powers[i + 1];     //后面一个战力值覆盖前面一个战力值 
		}
	count--;                               //删除后数组长度-1 
	printf("删除后的战力值为：\n");
	for(i = 0;i < count;i++)
	{
		printf("%.2lf\t",powers[i]);
	}
	
	
    getchar();
    getchar();
    
}