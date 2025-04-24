#include<iostream>
#include <climits>
using namespace std;

void smallestNumber(){
    int smallest = INT_MAX;
    int index;
    int numArray[] = {150 , 54 , 8 , 42 , 8484 , 51 , 5 , 3};
    for(int i=0; i<sizeof(numArray)/sizeof(int) ; i++){
        if(smallest > numArray[i]){
            smallest = numArray[i];
            index = i ;
        }
    }
    cout<<smallest<<endl;
    cout<<index<<endl;
}

void linearSearch(int n){
    bool searchVar = false;
    int arr[] = {151,54,5,2,4,21,51,54,55,4,6562,};
    cout<<"Size of Arr is "<<sizeof(arr)/sizeof(int)<<endl;
    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        if(n == arr[i]){
            cout<<n<<" is present at index "<<i<<endl;
            searchVar = true;
        }
    }
    if(!searchVar){
        cout<<n<<" is abesent"<<endl;
    }
}

void reverseArr01(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int reverseArr[size];

    for(int i=0 ; i<size ; i++){
        reverseArr[i] = arr[size-1-i];
    }
    for(int i=0 ; i<size ; i++){
        cout<<reverseArr[i]<<" ";
    }
}

void reverseArrUsingSwap(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size-1;

    while(start<end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }

    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void primeNumber(){
    int n=17;
    int count = 0 ;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count>2){
        cout<<"not prime";
    }else {
        cout<<"prime";
    }
}

void primeNumberOpti(){
    int n=27;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            cout<<"Number "<<n<<" is not Prime";
            break;
        }else{
            cout<<"Number "<<n<<" is Prime";
            break;
        }
    }
}

void practice01(){
    int sum = 0;
    int product = 1;
    int arr[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout<<"Sum of all elements in Arr is "<<sum<<endl;
    cout<<"product of all elements in Arr is "<<product<<endl;

}

void practice02(){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int indexMax;
    int indexMin;
    int arr[] = {45,8,54,5,2,565,9,45,48,8,4587,359871};

    for(int i=0; i<sizeof(arr)/4; i++){
        if(largest<arr[i]){
            largest = arr[i];
            indexMax = i;
        }
        if(smallest>arr[i]){
            smallest = arr[i];
            indexMin = i;
        }
    }
    cout<<smallest<<" "<<largest<<endl;

    for(int i=0; i<sizeof(arr)/4; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    swap(arr[indexMax] , arr[indexMin]);

    for(int i=0; i<sizeof(arr)/4; i++){
        cout<<arr[i]<<" ";
    }
}

void practice03(){
    int arr[] = {1,2,3,4,1,2,3,4,22,33,44,55,78,22,33,44,6,8,101,101};
    int index;
    
    for(int i=0 ; i<sizeof(arr)/4; i++){
        bool uniqueVar = true;
        for(int j=0; j<sizeof(arr)/4 ; j++){
            if(i !=j && arr[i] == arr[j]){
                uniqueVar = false;
                break;
            }
        }
        if(uniqueVar){
            cout<<arr[i]<<" is unique"<<endl;
        }
    }
}

void practice04(){
    int arr1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int arr2[] = {4,5,6,7};
    
    for(int i=0 ; i<sizeof(arr1)/sizeof(int) ; i++){
        bool value = false;
        int firstArrEle = arr1[i];
        for(int j=0; j<sizeof(arr2)/sizeof(int) ; j++){
            if(firstArrEle == arr2[j]){
                value = true;
                break;
            }
        }
        if(value){
            cout<<arr1[i]<<" ";
        }
    }
}

int main (){
    // smallestNumber();
    // linearSearch(21);
    // reverseArr01();
    // reverseArrUsingSwap();
    // primeNumber();
    primeNumberOpti();
    // practice01();
    // practice02();
    // practice03();
    // practice04();
}