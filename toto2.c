#include <stdio.h>
#include <stdlib.h>
int somme (int A, int B, int N) ;
void main()
{ int T1[10], T2[10], T3[10] ; int i,n ;

    printf("donner n \n"); // tel que n est la taille des 3 tableaux !!
    scanf("%d",&n);
    for (i=0; i<n ; i++)
     {
       printf("donner la valeur %d de T1 \n",i);
       scanf ("%d", &T1[i]) ;
       printf("donner la valeur %d de T2  \n",i);
       scanf ("%d", &T2[i]) ;
       T3 = somme (T1,T2,n);
       for (i=0;i<n;i++)
       printf("la %d valeur de T3 est %d",i,T3[i]);

     }
}

int somme (int A,int B,int N)
{ int i ; int C[10] ;
  for (i=0;i<N;i++)
  C[i] = A[i]+B[i] ;   // 2 erreurs signalées par code blocs : subscribed value is neither array nor pointer 
   }



