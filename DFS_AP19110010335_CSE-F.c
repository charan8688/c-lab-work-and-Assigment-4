#include<stdio.h>
#include<conio.h>
int a[20][20],reach[20],n;
void dfs(int c) {
	int i;
	reach[c]=1;
	for (i=1;i<=n;i++)
	  if(a[v][i] && !reach[i]) {
		printf("\n %d->%d",c,i);
		dfs(i);
	}
}
void main() {
	int i,j,count=0;
	clrscr();
	printf("Enter no of vertices:");
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
		reach[i]=0;
		for (j=1;j<=n;j++)
		   a[i][j]=0;
	}
	printf("Enter the  matrix");
	for (i=1;i<=n;i++)
	  for (j=1;j<=n;j++)
	   scanf("%d",&a[i][j]);
	dfs(1);
	printf("\n");
	for (i=1;i<=n;i++) {
		if(reach[i])
		   count++;
	}
	if(count==n)
	  printf(" Graph is connected"); else
	  printf(" Graph is not connected");
	getch();