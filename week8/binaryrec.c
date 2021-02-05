#include<stdio.h>
int bin_search( int first,int last ,int a[50], int key)
{
	int pos = -1, mid;
	while(first <= last)
	{
		mid = (first+last)/2;
		if(a[mid] == key)
		{
		pos = mid;
		break;
		}
		else if(a[mid] < key)
		{
			first = mid + 1;
		}
		else 
		{
			last = mid - 1;
		}
	}
		return pos;

}
int main()
{
	int n, a[n] , key ,i ,  pos ;
	scanf("%d", &n);
	for(int i = 0; i < n ;i++);
	{
		scanf("%d", &a[i]);

	}
	scanf("%d", &key);
	pos = bin_search(0,n-1,a,key);

	if (pos == -1)
	{
		printf(" element is not present\n");
	}
	else
	{
		printf("element is present at %d" , pos + 1);
	 }
}	 
	