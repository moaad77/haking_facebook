#include <stdio.h>
#define red "\033[031m"
#define green "\033[032m"
#define yellow "\033[033m"
#define blue "\033[034m"
#define perpel "\033[035m"
#define blue1 "\033[036m"
int main(){
    int M,L,a,b,k,i,j;
    char m,o,h,s,I,n,e;
    printf("-M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M-\n-M-'O'                           <H>                              'O' I -M-\n-M- S 'O'                        <H>                           'O' I  I -M-\n-M- S  S 'O'                     <H>                        'O' I  I  I -M-\n-M- S  S  S 'O'                  <H>                     'O' I  I  I  I -M-\n-M- S  S  S  S 'O'               <H>                  'O' I  I  I  I  I -M-\n-M- S  S  S  S  S 'O'            <H>               'O' I  I  I  I  I  I -M-\n-M- S  S  S  S  S  S 'O'         <H>            'O' I  I  I  I  I  I  I -M-\n-M- S  S  S  S  S  S  S 'O'      <H>         'O' I  I  I  I  I  I  I  I -M-\n-M- S  S  S  S  S  S  S  S 'O'   <H>      'O' I  I  I  I  I  I  I  I  I -M-\n-M- S  S  S  S  S  S  S  S  S 'O'<H>   'O' I  I  I  I  I  I  I  I  I  I -M-\n-M-<H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H><H>-M-\n-M-                              <H>'O'                                 -M-\n-M-                           'O'<H> N 'O'                              -M-\n-M-                        'O' N <H> N  N 'O'                           -M-\n-M-                     'O' N  N <H> N  N  N 'O'                        -M-\n-M-                  'O' N  N  N <H> N  N  N  N 'O'                     -M-\n-M-               'O' N  N  N  N <H> N  N  N  N  N 'O'                  -M-\n-M-            'O' N  N  N  N  N <H> N  N  N  N  N  N 'O'               -M-\n-M-         'O' N  N  N  N  N  N <H> N  N  N  N  N  N  N 'O'            -M-\n-M-      'O' N  N  N  N  N  N  N <H> N  N  N  N  N  N  N  N 'O'         -M-\n-M-   'O' N  N  N  N  N  N  N  N <H> N  N  N  N  N  N  N  N  N 'O'      -M-\n-M-'O' N  N  N  N  N  N  N  N  N <H> N  N  N  N  N  N  N  N  N  N 'O'   -M-\n-M- N  N  N  N  N  N  N  N  N  N <H> N  N  N  N  N  N  N  N  N  N  N 'O'-M-\n-M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M--M-\n");
    printf(".\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n");
    
    printf( blue"le nombre des lignes:  ");
    scanf("%d",&a);
    printf(blue"le nombre des colones:  ");
    scanf("%d",&b);
    while (getchar() != '\n');
    printf(blue1"changer ( M ) avec:  ");
    scanf(" %c", &m);
    printf(blue1"changer ( O ) avec:  ");
    scanf(" %c", &o);
    printf(blue1"changer ( H ) avec:  ");
    scanf(" %c", &h);
    printf(blue1"changer ( S ) avec:  ");
    scanf(" %c", &s);
    printf(blue1"changer ( I ) avec:  ");
    scanf(" %c", &I);
    printf(blue1"changer ( N ) avec:  ");
    scanf(" %c", &n);
    printf(blue1"changer ( E ) avec:  ");
    scanf(" %c", &e);
    printf(".\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n.\n");
    for ( M = 1; M <= b; M++){
        printf(red"===");
    }
    printf("\n");
    for ( k = 1; k <= b; k++)
    {
        
        if (k==1)
        {
            printf(perpel"<%c<",m);
        }else
        if (k==2)
        {
            printf(perpel"<%c<",o);
        }else
        if (k==3)
        {
            printf(perpel"<%c<",h);
        }else
        if (k==b-2)
        {
            printf(perpel"<%c<",I);
        }else
        if (k==b-1)
        {
            printf(perpel"<%c<",n);
        }else
        if (k==b)
        {
            printf(perpel"<%c<",e);
        }else 
        printf(perpel"<%c<",s);
    }
    printf("\n");
    for ( L = 1; L <= b; L++){
        printf(red"===");
    }
    printf("\n");
    for ( i = 1 ; i <= a ; i++)
    {
         for (j = 1; j <= b; j++)
       
        {
            if (j==1 || j==b || i==1 ||  i==a ) printf(green"-%c-",m);
            else 
            if (j==b/2 || i==a/2)
            {
                printf(yellow"<%c>",h);
            }else
            if (j==i || j==b-i)
            {
                printf(red"'%c'",o);
            }else
            if (j<=i && i<a/2)
            {
                printf(blue" %c ",s);
            }else
            if (j>i && j>b-i && i<a/2)
            {
                printf(perpel" %c ",I);}
                else
            if (j<i && j>a-i && i>a/2)
            {
                printf(blue1" %c ",n);}
                else
            printf("   ");

            
            
        }
        printf("\n");

        
    }
    return 0;
}
