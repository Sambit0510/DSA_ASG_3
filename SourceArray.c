#include"HeaderArray.h"

void InsertItemAtLast(int A[], int n, int key){
    n++;
    A[n-1]=key;
}
void InsertItemAtFirst(int A[], int n, int key){
    n++;
    for (int i=n-1;i>0;i--)
        A[i]=A[i-1];
    A[0]=key;
}
void InsertItemAtIndex(int A[],int n,int i, int key){
    n++;
    for (int j=n-1;j>=i;j++)
        A[j]=A[j-1];
    A[i-1]=key;
}
void DeletionFromLast (int A[],int n, int key) {
    // key
    n--;
}
void DeletionFromFirst(int A[], int n, int key){
    for (int i=0;i<n-1;i++)
        A[i]=A[i+1];
    n--;
}
void DeletionFromIndex(int A[] int n,int i, int key){
    for (int j=i;j<n-1;j++)
        A[j]=A[j+1];
    n--;
}
void FindItemUnsorted(int A[], int n, int key){
     for (int i=0;i<n-1;i++){
         if (A[i]>A[i+1])
             printf("%d %d\n",i+1,i+2);
     }
}
void FindItemsSorted(int A[], int n, int key){
    for (int i=0;i<n-1;i++)
        if (A[i]<A[i+1])
            pritf("%d %d\n",i+1,i+2);
}
void SortArray(int A[], int n){
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if (A[j]>A[j+1]){
                swap(A[j],A[j+1]);
            }
        }
    }
}

void ExtractSubset(int A[], int n , int i, int j){
    int arr[j-i+1],z=0;
    for (int k=i-1;k<j;k++){
        arr[z]=A[k];
        z++;
    }
    for (int k=0;i<j-i+1;k++)
        printf("%d ",arr[k]);
}

void DeleteSubset(int A[], int n, int L, int R){
    int j=0;
    for (int i=0;i<n;i++){
        if (i<=L || i>=R){
            A[j]=A[i];
            j++;
        }
    }
    n=j;
}
void SplitIntoTwoArray(int A[], int n){
    int B[],C[],j=0,k=0;
    for (int i=0;i<n;i++){
        if (i<=n/2){
            B[k]=A[i];
            k++;
        }
        else{
            C[j]=A[i];
            j++;
        }
    }
    for (int i=0;i<k;i++)
        printf("%d ",B[i]);
    printf("\n");
    for (int i=0;i<j;i++)
        printf("%d ",C[i]);
}

 void CloneArray(int A[], int n, int B[]){
    int j=0;
    for (i=0;i<n;i++){
        B[j]=A[i];
        j++;
    }
    for (int i=0;i<j;i++)
        printf("%d ",B[i]);
    printf("\n");
}

void ShiftLeftArray(int A[], int n, int r){
    while(r--){
        int temp=A[0];
        for (int i=0;i<n-1;i++)
            A[i]=A[i+1];
        A[n-1]=temp;
    }
}

void ShiftRightArray(int A[], int n, int r){
    while(r--){
        int temp=A[n-1];
        for (int i=0;i<n-1;i++)
            A[i+1]=A[i];
        A[0]=temp;
    }
}

void RotateArrayClockWise( int A[] , int n , int r){
    ShiftLeftArray(A,n,r);
}

void RotateArrayAnticlockwise( int A[], int n , int r){
    ShiftRightArray(A,n,r);
}
int MinIndex ( int A[], int n){
    int index=0;
    for (int i=0;i<n-1;i++){
        if (A[index]>A[i])
            index=i;
    }
    return index;
}
 int MaxIndex ( int A[], int n){
    int index =0;
    for (int i=0;i<n-1;i++){
        if (A[index]<A[i])
            index=i;
    }
    return i;
}
void ArrayPseudoRandom( int A[], int n){
    for (int i=0;i<=n/2;i++){
        A[i]=rand()%100;
    }
    int k=0;
    for (int i=n/2+1;i<n;i++){
        A[i]=A[k];
        k++;
    }
}

void ArrayTrueRandom( int A[], int n){
    for (int i=0;i<n;i++)
        A[i]=rand()%100;
}

void IncreaseArraySize( int A[], int n , int m){

}

void SetElementToZero( int A[], int n){
 int A[n]={0};
}

void DeleteAllElementsArray(int A[], int n){
    void A* = malloc (sizeof(int) *n);
    free(A);
}

void DeleteArray( int A[] , int n){
    void A* = malloc (sizeof(int) *n);
    free(A);
}
int  AllocateArray( int A[] , int n){
    int address=0;

    return address;
}
