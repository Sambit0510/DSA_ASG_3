
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//#include<windows.h>
const int MOD=1e9+7;

//Benchmark the performance of Insertion sort technique for average case, best case and
//worst cases. Draw the chart.
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void gotoxy( int x , int time){

}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main (){

    int arr[10000],n=10000,k=100;
   // while(k--){
            int h=0;
    for (int i=0;i<n;i++)
        arr[i]=rand()%100000;

    //average case
    clock_t t_avg;
    t_avg=clock();
    insertionSort(arr,n);
    t_avg=clock()-t_avg;
    double time_avg=((double)t_avg)/(double)CLOCKS_PER_SEC;


    // best case

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j])
                swap(&arr[i],&arr[j]);
        }
    }
    clock_t t_best;
    t_best=clock();
    insertionSort(arr, n);
    t_best=clock()-t_best;
    double time_best=((double)t_best)/(double)CLOCKS_PER_SEC;

     // worst case
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]<arr[j])
                swap(&arr[i],&arr[j]);
        }
    }
    clock_t t_worst;
    t_worst=clock();
    insertionSort(arr,n);
    t_worst=clock()-t_worst;
    double time_worst=((double)t_worst)/(double)CLOCKS_PER_SEC;

    printf(" Best  %0.9f \n",time_best);
    printf(" Avg   %0.9f \n",time_avg);
    printf(" Worst %0.9f \n",time_worst);
//    gotoxy(h,time_best);
//    gotoxy(h,time_avg);
//    gotoxy(h,time_worst);
// h++;
//}
return 0;}
