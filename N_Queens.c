#include<stdio.h>    
#include<stdbool.h>
bool issafe(int n,char Queen[n][n],int row,int col)
{
    int i,j; 
    for(i=row-1;i>=0;i--)
    {
        if(Queen[i][col]=='Q')
        {
            return false;
        }
    } 
    for(i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
    {
        if(Queen[i][j]=='Q')
        {
            return false;
        }
    }
    for(i=row-1,j=col+1;i>=0&&j<=n-1;i--,j++)
    {
        if(Queen[i][j]=='Q')
        {
            return false;
        }
    } 
    return true;
}
void display(int n,char Queen[n][n])
{
    int i,j; 
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%c ",Queen[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void solve(int n,int row,char Queen[n][n])
{
    if(row==n)
    {
        display(n,Queen); //function calling 
    }
    else 
    {
        for(int col=0;col<=n-1;col++)
        {
            if(issafe(n,Queen,row,col)==true)  //function calling 
            {
                Queen[row][col] = 'Q'; 
                solve(n,row+1,Queen); 
                Queen[row][col]='.';
            }
        }
    }
}
int main()
{
    int n; 
    scanf("%d",&n); 
    char Queen[n][n]; 
    int i,j; 
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            Queen[i][j]='.';
        }
    }
    solve(n,0,Queen);  /// function calling 
    return  0;
}
