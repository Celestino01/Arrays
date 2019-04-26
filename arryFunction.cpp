
/* Sample run
 1.
 Get array size for the 1-th array.
 Please input a postive integer for the size of the array:
 3
 Get array size for the 2-th array.
 Please input a postive integer for the size of the array:
 3
 Let's fill in the 1-th integer array of size 3
 1-th element!
 Please input a positive integer: 3
 2-th element!
 Please input a positive integer: 2
 3-th element!
 Please input a positive integer: 3
 
 Let's fill in the 2-th integer array of size 3
 1-th element!
 Please input a positive integer: 3
 2-th element!
 Please input a positive integer: 2
 3-th element!
 Please input a positive integer: 3
 
 The array is:
 3,2,3
 largest element is 3 and its last occurance is at subscipt 2
 These two arrays are identical.
 
 2. 
 Get array size for the 1-th array.
 Please input a postive integer for the size of the array:
 5
 Get array size for the 2-th array.
 Please input a postive integer for the size of the array:
 3
 Let's fill in the 1-th integer array of size 5
 1-th element!
 Please input a positive integer: 4
 2-th element!
 Please input a positive integer: 3
 3-th element!
 Please input a positive integer: 1
 4-th element!
 Please input a positive integer: 2
 5-th element!
 Please input a positive integer: 4
 
 Let's fill in the 2-th integer array of size 3
 1-th element!
 Please input a positive integer: 4
 2-th element!
 Please input a positive integer: 3
 3-th element!
 Please input a positive integer: 1
 
 The array is:
 4,3,1,2,4
 
 largest element is 4 and its last occurance is at subscipt 4
 These two arrays are not identical
 The first one is:
 4,3,1,2,4
 
 The second one is:
 4,3,1
 
 */

#include <iostream>
#include<cctype> 

using namespace std;

// Function prototypes

void fillArray(int[], int);
void showArray(int[], int);
void largestElement(int[], int);
bool equalArrays(int [], int [], int , int); 
void getInput(int&);

int main()
{
    int SIZE1; 
    int SIZE2; 

    //define two arrays with two sizes
	int array1[SIZE1];
    int array2[SIZE2];

    cout << "Get array size for the 1-th array.\n";

    cout << "Please input a postive integer for the size of the array: \n";

    cin >> SIZE1;
    
    cout << endl;

    cout << "Get array size for the 2-th array.\n";

    cout << "Please input a postive integer for the size of the array: \n";

    cin >> SIZE2;
    
    cout << endl;

    //call function fillArray() over array1, then fill in array1

    cout << "Let's fill in the 1-th integer array of size " << SIZE1 << endl;

    fillArray(array1, SIZE1);

    //call function fillArray() over array2, then fill in array2

    cout << "Let's fill in the 2-th integer array of size " << SIZE2 << endl;

    fillArray(array2, SIZE2);

    //call function showArray() over array1

    cout << "The array is: \n";

    showArray(array1, SIZE1);
    
    cout << endl;
    //call function largestElement() over array1

    largestElement(array1, SIZE1);
    
    //call equalArrays() over array1 and array2,
    //if they share exactly the same elements, print "These two arrays are identical",
    //if not, print "These two arrays are not identical" and use showArray() to display the elements in array1 and array2 seperately
    
    if(equalArrays(array1, array2, SIZE1, SIZE2))
    {
        cout << "These two arrays are identical.\n";
    }
    else
    {
        cout << "These two arrays are not identical\n";
        cout << "The first one is: \n";
        showArray(array1, SIZE1);
        cout << endl;
        cout << "The second one is: \n";
        showArray(array2, SIZE2);
    }
	return 0;
}

/*****************************************************************
 *           Complete all the functions below                    *
 *****************************************************************/

void fillArray(int arr[], int size){

    for(int i = 0; i < size; i++){

        cout << i + 1 << "-th element! \n";

        getInput(arr[i]);
        
    }

}

void showArray(int arr[], int size){

    for(int i = 0; i < size; i++)
        
    {
        cout << arr[i];

        if((i+1)%5 == 0) 
        {
            cout << endl;
        }
        else 
        {
            if(i == size-1) 
            {
                cout <<"";
            }
            else 
            {
                cout << ",";
            }
        }
    }

}

void largestElement(int arr[], int size){

    int temp = 0;
    int maxSub = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]>temp){
        temp=arr[i];
        }

        if(arr[i]>=temp){
        maxSub = i;
        }

    }
    cout << "The biggest number is: " << temp << " and its last occurance is at subscipt " << maxSub << endl;

}

bool equalArrays(int arr1[], int arr2[], int size1, int size2) 
{ 
    if(size1 != size2){

        return false;

    }

    else{

    for(int i = 0; i < size1; i++){

        if(arr1[i] != arr2[i])

            return false;

        else
            return true;
    }
  }
} 

void getInput(int &num){

    do {
        cout << "Please input positive integer: ";
        cin >> num;
    } while (num <= 0);

}



