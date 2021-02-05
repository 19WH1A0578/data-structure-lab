#include<stdio.h>
int linear_search( int n,int a[10], int key)
{
	static int i;
	if(a[i] == key)
		return i;
	else if(i < n)
	{
		i++;
		linear_search(n , a, key);
	}
	else
		 return -1;
}
int main()
{
	int n, a[10] , key ,i ,  pos ;
	scanf("%d", &n);
	for(int i = 0; i < n ;i++);
	{
		scanf("%d", &a[i]);

	}
	scanf("%d", &key);
	pos = linear_search(n,a,key);

	if (pos == -1)
	{
		printf(" element is not present\n");
	}
	else
	{
		printf("element is present at %d" , pos + 1);
	 }
}	 