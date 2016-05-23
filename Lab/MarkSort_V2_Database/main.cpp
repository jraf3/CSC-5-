/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 23rd, 2016, 8:25 AM
 * Purpose:  Sort a random array
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <iomanip> //Format
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void mrkSort(int [],int [],int);//Sort the whole array
void prntAry(int [],int,int);//Print the array with columns
void prntAry(int [],int [],int,int);//Print the array with columns
void fillAry(int [],int[],int);//Fill array with 2 digit random numbers

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100;
    int index[SIZE];
    int array[SIZE];
    
    //Fill the array
    fillAry(array,index,SIZE);
    
    //Print the array
    cout<<"The original unsorted array"<<endl;
    prntAry(array,SIZE,10);
    cout<<"The original indexed array"<<endl;
    prntAry(index,SIZE,10);
    
    //Test the smallest in list
    mrkSort(array,index,SIZE);
    
    //Print the array
    cout<<"The original array"<<endl;
    prntAry(array,SIZE,10);
    cout<<"The sorted indexed array"<<endl;
    prntAry(index,SIZE,10);
    cout<<"The original array with sorted index"<<endl;
    prntAry(array,index,SIZE,10);

    //Exit Stage Right!
    return 0;
}

void mrkSort(int a[],int indx[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[indx[i]]>a[indx[j]]){
                indx[i]=indx[i]^indx[j];
                indx[j]=indx[i]^indx[j];
                indx[i]=indx[i]^indx[j];
            }
        }
    }
}

void prntAry(int b[],int indx[],int m, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        cout<<b[indx[i]]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

void prntAry(int b[],int m, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
}

void fillAry(int a[],int indx[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//2 digit random number
        indx[i]=i;
    }
}