#include <stdio.h>
 
void main()
{
    int array[10][10];
    int i,j,n,r,c,rowsum[10],colsum[10],prim_diag=0,secd_diag,check,r_check,c_check,r_temp=0,c_temp=0;
 
    printf("Enter the dimension of the matrix \n");
    scanf("%d",&n);
    printf("Enter the co-efficents of the matrix \n");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("ENTER ELEMENT %d\n:",i+1);
            scanf("%d", &array[i][j]);
        }
    } 
    for (i = 0; i < n; ++i)
    {
        r=0;
        for (j = 0; j < n; ++j)
        {
            r+=array[i][j];
        }
        rowsum[i]=r;
    } 
    r_check=rowsum[0];
    for (i=0;i<n;i++)
    {
        if (r_check!=rowsum[i])
        {
            r_temp=1;
        }
     
    }
    if (r_temp==0)
    {
        for (i = 0; i < n; ++i)
        {
            c=0;
            for (j = 0; j < n; ++j)
            {
                c+=array[j][i];
            }
            colsum[i]=c;
        } 
        c_check=colsum[0];
        for (i=0;i<n;i++)
        {
            
            if (c_check!=colsum[i])
            {
                c_temp=1;
            }
        }
        if (c_temp==0)
        {
            if (r_check==c_check)
            {
                for (i = 0; i < n; ++i)
                {
                    for (j = 0; j < n; ++j)
                    {
                        if (i==j)
                        {
                            prim_diag+=array[i][j];
                        }
                    }
                } 
                if (r_check==prim_diag)
                {
                    for (i = 0; i < n; ++i)
                    {
                        secd_diag+=array[i][n-i-1];
                    }
                    if (secd_diag==r_check)
                    {
                        printf("\nMAGIC SQUARE");
                    }
                    else
                    {
                        printf("\nNOT A MAGIC SQUARE");
                    }
                }
                else
                {
                    printf("\nNOT A MAGIC SQUARE");
                }
            }
            else
            {
                printf("\nNOT A MAGIC SQUARE");
            }
        }
        else
        {
            printf("\nNOT A MAGIC SQUARE");
        }
    }
    else
    {
        printf("\nNOT A MAGIC SQUARE");
    }
    
}

    

