//   QUES 1) Implement the Binary search algorithm regarded as a fast search algorithm with run-time
// complexity of Ο(log n) in comparison to the Linear Search. 

#include<iostream>
using namespace std;

void binary_search(int arr[], int length, int number){
    int s = 0;
    int e = length - 1;

    int mid = s + ((e-s)/2);
    bool check = false;

        while(s<=e){
        if(arr[mid]==number){
            check = true;
            break;
        }

        if(arr[mid]>number){
            e = mid - 1;
            mid = s + ((e-s)/2);
        }

         if(arr[mid]<number){
            s = mid + 1;
            mid = s + ((e-s)/2);
        }
        }
    
    if(check){
        cout<<"your element is present"<<endl;
    }

    else{
        cout<<"your element is not present "<<endl;
    }
    
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  cout<<"enter the element you want to find "<<endl;
    int n;
     cin>>n;

     binary_search(arr,10,n);
 }




/*
Q2) Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent
elements if they are in wrong order. Code the Bubble sort with the following elements:
64 34 25 12 22 11 90
*/

#include<iostream>
using namespace std;

void printarr(int arr[],int length){
    for(int i = 0; i<length; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[],int n){

    for(int i = 0; i<n; i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[7] = {64,34,25,12,22,11,90};

    cout<<"before bubble sort"<<endl;;
    printarr(arr,7);
    
    bubblesort(arr,7);

    cout<<"after bubble sort"<<endl;
    printarr(arr,7);
}




//Q3
#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return low + 1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8}; 
    cout << "Missing number: " << findMissing(arr) << endl;
    return 0;
}




// Q4 a
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    str1 += str2; // concatenation
    cout << "Concatenated String: " << str1 << endl;

    return 0;
}


//Q4 b
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Reversed String: ";
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}



//Q4 c
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";
    for (char c : str) {
        if (!isVowel(c)) {
            result += c;
        }
    }

    cout << "String without vowels: " << result << endl;
    return 0;
}



//Q4 d
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    string arr[50];
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}


//Q4 e
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character in uppercase: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;  // ASCII conversion: 'A' (65) → 'a' (97)
    }

    cout << "Lowercase character: " << ch << endl;

    return 0;
}



//Q8 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int distinctCount = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if this element appeared before
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            distinctCount++;
        }
    }

    cout << "Total number of distinct elements: " << distinctCount << endl;
    return 0;
}

7.
#include <iostream>
#include <vector>
using namespace std;

vector<int> input(int n){

	vector<int> arr(n);
	
	for(int i=0; i<n; i++){

	cout<<"Enter element "<<i+1<<" : ";
	cin>>arr[i];
		cout<<endl;
	}
	
		return arr;
	}
	void output(int n, vector<int> arr){
		for(int i=0; i<n; i++){
		cout<<arr[i]<<"  ";  
	}
	
	cout<<endl;
}
int inversion(vector<int> arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	int n=7;
    vector<int> a=	input(n);
	output(n,a);
	cout<<inversion(a,n);
	return 0;
}       

----------------------------------------------------------------------------------------------------------------------------------------
5. Space required to store any two-dimensional array is number oƒ rows × number oƒ
columns. Assuming array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
(a) Diagonal Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------------
(b) Tri-diagonal Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    int ele= ((3*n )-2);
     int arr[ele];
    for(int i=0;i<ele;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j|| i-j ==-1 ||i-j ==1){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------------------
(c) Lower triangular Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    int ele= ((n*(n+1) )/2);
     int arr[ele];
    for(int i=0;i<ele;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------
(d) Upper triangular Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    int ele= ((n*(n+1) )/2);
     int arr[ele];
    for(int i=0;i<ele;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------
(e) Symmetric Matrix

#include <iostream>
using namespace std;

int main() {
    cout << "Enter order of matrix :" << endl;
    int n;
    cin >> n;

    cout << "Enter upper triangular elements of matrix :" << endl;
    int ele = (n * (n + 1)) / 2;
    int arr[ele];

    for (int i = 0; i < ele; i++) {
        cin >> arr[i];
    }

    cout << endl << "Symmetric Matrix is :" << endl;
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << arr[k] << " ";
                k++;
            } else {
               
                int index = (j * n) - (j * (j - 1)) / 2 + (i - j);
                cout << arr[index] << " ";
            }
        }
        cout << endl;  
    }

    return 0;
}
========================================================================================
6) Write a program to implement the following operations on a Sparse Matrix,
assuming the matrix is represented using a triplet.


(a) TRANSPOSE 

#include <iostream>
using namespace std;
class sparse{
    int arr[3][3];
    int tr[3][3];
    public:
    void input(){
        for(int i=0;i<3;i++){
            cout<<"Enter row "<<i+1<<endl;
            for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
        }
    }
    void transpose() {
    for (int i = 0; i < 3; i++) {
        tr[i][0] = arr[i][1];   // new row  = old col
        tr[i][1] = arr[i][0];   // new col  = old row
        tr[i][2] = arr[i][2];   // value stays same
    }

    // print result
    cout << "\nTranspose Triplet:\n";
    for (int i = 0; i < 3; i++) {
        cout << tr[i][0] << "  "
             << tr[i][1] << "  "
             << tr[i][2] << "\n";
    }
}

    void show(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main() {
    sparse s;
    s.input();
    s.show();
    s.transpose();

    return 0;
}
--------------------------------------------------------------------------------------------------------
(b) Addition of two matrices.
#include <iostream>
using namespace std;

int create_sparse(int arr[5][4], int row, int col ,int spar[20][3]) {
    int count = 0;
    
    // Count non-zero elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }
    
    
    // First row: store metadata
    spar[0][0] = row;
    spar[0][1] = col;
    spar[0][2] = count;
    
    int k = 1; // Index to insert in sparse matrix
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                spar[k][0] = i;
                spar[k][1] = j;
                spar[k][2] = arr[i][j];
                k++;
            }
        }
    }
    
    // Print sparse matrix
    cout << "Sparse matrix representation:\n";
    cout << "Row Col Value\n";
    for (int i = 0; i <= count; i++) {
        cout << spar[i][0] << "   " << spar[i][1] << "   " << spar[i][2] << "\n";
    }
    return count;
}
void add(int spar1[20][3], int spar2[20][3], int l1, int l2) {
    int sum[40][3];  // big enough to hold all entries
    int k = 1;       // sum index starting from 1 (0 is metadata)
    int i = 1, j = 1;

    // Metadata rows are at index 0
    sum[0][0] = spar1[0][0];  // rows (assuming both same)
    sum[0][1] = spar1[0][1];  // cols
    // count will be updated later

    while (i <= l1 && j <= l2) {
        // Compare row and col to merge positions
        if (spar1[i][0] == spar2[j][0] && spar1[i][1] == spar2[j][1]) {
            sum[k][0] = spar1[i][0];
            sum[k][1] = spar1[i][1];
            sum[k][2] = spar1[i][2] + spar2[j][2];
            k++; i++; j++;
        }
        else if (spar1[i][0] < spar2[j][0] || 
                (spar1[i][0] == spar2[j][0] && spar1[i][1] < spar2[j][1])) {
            sum[k][0] = spar1[i][0];
            sum[k][1] = spar1[i][1];
            sum[k][2] = spar1[i][2];
            k++; i++;
        }
        else {
            sum[k][0] = spar2[j][0];
            sum[k][1] = spar2[j][1];
            sum[k][2] = spar2[j][2];
            k++; j++;
        }
    }

    // Copy remaining elements of spar1
    while (i <= l1) {
        sum[k][0] = spar1[i][0];
        sum[k][1] = spar1[i][1];
        sum[k][2] = spar1[i][2];
        k++; i++;
    }
    // Copy remaining elements of spar2
    while (j <= l2) {
        sum[k][0] = spar2[j][0];
        sum[k][1] = spar2[j][1];
        sum[k][2] = spar2[j][2];
        k++; j++;
    }

    sum[0][2] = k - 1;  // number of non-zero elements in sum

    cout << "\nSum matrix representation:\n";
    cout << "Row Col Value\n";
    for (int idx = 0; idx < k; idx++) {
        cout << sum[idx][0] << "   " << sum[idx][1] << "   " << sum[idx][2] << "\n";
    }
}

int main() {
    int arr1[5][4] = {
        {2, 3, 0, 0},
        {0, 0, 0, 5},
        {0, 0, 7, 0},
        {1, 0, 0, 0},
        {8, 0, 0, 0}
    };
    int arr2[5][4] = {
        {7, 3, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 7, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 0}
    };
    int spar1[20][3];
    int spar2[20][3];
    int len1=create_sparse(arr1, 5, 4,spar1);
    int len2=create_sparse(arr2, 5, 4,spar2);
    
    add(spar1,spar2,len1,len2);
    
    return 0;
}

--------------------------------------------------------------------------------------------------------
(b) Addition of two matrices.
#include <iostream>
#include <vector>
using namespace std;

int find_size(int arr[4][4]) {
    int size = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != 0) {
                size++;
            }
        }
    }
    return size;
}

vector<vector<int>> make_sparse(int arr[4][4], int size) {
    vector<vector<int>> sparse(size, vector<int>(3));
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != 0) {
                sparse[k][0] = i;        // row
                sparse[k][1] = j;        // col
                sparse[k][2] = arr[i][j]; // value
                k++;
            }
        }
    }
    return sparse;
}

vector<vector<int>> add(vector<vector<int>> v1, vector<vector<int>> v2) {
    vector<vector<int>> sum;
    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i][0] < v2[j][0] || (v1[i][0] == v2[j][0] && v1[i][1] < v2[j][1])) {
            sum.push_back(v1[i]);
            i++;
        }
        else if (v2[j][0] < v1[i][0] || (v1[i][0] == v2[j][0] && v2[j][1] < v1[i][1])) {
            sum.push_back(v2[j]);
            j++;
        }
        else { // same position
            int val = v1[i][2] + v2[j][2];
            if (val != 0) {
                sum.push_back({v1[i][0], v1[i][1], val});
            }
            i++; j++;
        }
    }

    // Add remaining elements
    while (i < v1.size()) {
        sum.push_back(v1[i]);
        i++;
    }
    while (j < v2.size()) {
        sum.push_back(v2[j]);
        j++;
    }

    return sum;
}

int main() {
    int arr[4][4] = {
        {1,0,0,0},
        {2,0,0,3},
        {0,0,0,4},
        {0,7,0,0}
    };

    int arr2[4][4] = {
        {0,0,5,0},
        {2,0,0,3},
        {0,3,0,4},
        {0,7,0,0}
    };

    int size1 = find_size(arr);
    vector<vector<int>> sparse1 = make_sparse(arr, size1);

    int size2 = find_size(arr2);
    vector<vector<int>> sparse2 = make_sparse(arr2, size2);

    cout << "Sparse Matrix 1:\n";
    for (int i = 0; i < sparse1.size(); i++) {
        cout << sparse1[i][0] << " "
             << sparse1[i][1] << " "
             << sparse1[i][2] << endl;
    }

    cout << "\nSparse Matrix 2:\n";
    for (int i = 0; i < sparse2.size(); i++) {
        cout << sparse2[i][0] << " "
             << sparse2[i][1] << " "
             << sparse2[i][2] << endl;
    }

    vector<vector<int>> addition = add(sparse1, sparse2);

    cout << "\nSum of Sparse Matrices:\n";
    for (int i = 0; i < addition.size(); i++) {
        cout << addition[i][0] << " "
             << addition[i][1] << " "
             << addition[i][2] << endl;
    }

    return 0;
}
-----------------------------------------------------------------------------
(c) MULTIPLICATION

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> multiply(const vector<vector<int>>& A,
                                 const vector<vector<int>>& B) {
        if (A.empty() || B.empty()) return {};   // check for empty matrices

        int rows = A.size();
        int cols = B[0].size();
        int common = A[0].size();               // same as B.size()

        vector<vector<int>> res(rows, vector<int>(cols, 0));

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                for (int k = 0; k < common; k++) {
                    res[r][c] += A[r][k] * B[k][c];
                }
            }
        }
        return res;
    }
};

====================================================================================================================
====================================================================================================================
ADDITIONAL QUESTIONS
1) Find two numbers in an array whose difference equals K. Given an array arr[] and a
positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of
(arr[i] - arr[j]) is equal to k.

https://www.geeksforgeeks.org/dsa/count-pairs-difference-equal-
k/?utm_source=chatgpt.com#better-approach-sorting-and-two-pointer-technique-onlogn-
time-and-o1-space


#include <iostream>
using namespace std;
int main() {
    int arr[]={2,7,5,4,3,8,6,1,9,6};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(abs(arr[i]-arr[j])==3){
                cout<<"Pair is : ("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
            }
            
        }
    }

    return 0;
}
--------------------------------------------------------------------------------------------------------
4) Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
put all 0s first, then all 1s and all 2s in last.
https://www.geeksforgeeks.org/dsa/sort-an-array-of-0s-1s-and-2s/

#include <iostream>
using namespace std;
int main() {
    int arr[]={2,1,0,1,2,0,0,1,2,1};
    int c0=0,c1=0,c2=0;
    for(int i=0;i<10;i++){
       if(arr[i]==0) c0++;
       else if(arr[i]==1) c1++;
       else c2++;
    }
      int index=0;
      for(int i=0;i<c0;i++){
          arr[index]=0;
          index++;
      }
      for(int i=0;i<c1;i++){
          arr[index]=1;
          index++;
      }
      for(int i=0;i<c2;i++){
          arr[index]=2;
          index++;
      }
      
      for(int i=0;i<10;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
----------------------------------------------------------------------------------------------------------

3) String Anagrams
Given two strings str1 and str2, determine if they form an anagram pair.
Note: Two strings are considered anagrams if one string can be rearranged to form the other
string.

https://www.codechef.com/practice/course/nutanix-interview-
questions/NUTANIXCON01/problems/NUTANIX01

#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // Step 1: If lengths differ, not anagrams
    if (str1.length() != str2.length()) return false;

    // Step 2: Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Step 3: Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2))
        cout << "Yes, the strings are anagrams." << endl;
    else
        cout << "No, the strings are not anagrams." << endl;

    return 0;
}
---------------------------------------------------------------------------------------------------------------
5) Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
remaining elements to the right.
Note that elements beyond the length of the original array are not written. Do the above
modifications to the input array in place and do not return anything.
https://leetcode.com/problems/duplicate-zeros/description/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {  // loop till second last index
            if (arr[i] == 0) {
                // Shift elements to the right
                for (int j = n - 2; j > i; j--) {
                    arr[j + 1] = arr[j];
                }
                arr[i + 1] = 0;  // duplicate the zero
                i++;             // skip the duplicated zero
            }
        }
    }
};

7.
#include <iostream>
#include <vector>
using namespace std;

vector<int> input(int n){

	vector<int> arr(n);
	
	for(int i=0; i<n; i++){

	cout<<"Enter element "<<i+1<<" : ";
	cin>>arr[i];
		cout<<endl;
	}
	
		return arr;
	}
	void output(int n, vector<int> arr){
		for(int i=0; i<n; i++){
		cout<<arr[i]<<"  ";  
	}
	
	cout<<endl;
}
int inversion(vector<int> arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				count++;
			}
		}
	}
	return count;
}
int main(){
	int n=7;
    vector<int> a=	input(n);
	output(n,a);
	cout<<inversion(a,n);
	return 0;
}       

----------------------------------------------------------------------------------------------------------------------------------------
5. Space required to store any two-dimensional array is number oƒ rows × number oƒ
columns. Assuming array is used to store elements of the following matrices,
implement an efficient way that reduces the space requirement.
(a) Diagonal Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------------
(b) Tri-diagonal Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    int ele= ((3*n )-2);
     int arr[ele];
    for(int i=0;i<ele;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j|| i-j ==-1 ||i-j ==1){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------------------
(c) Lower triangular Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    int ele= ((n*(n+1) )/2);
     int arr[ele];
    for(int i=0;i<ele;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------
(d) Upper triangular Matrix.

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter order of matrix :"<<endl;
    int n;
    cin>>n;
    cout<<"Enter diagonal elements of matrix :"<<endl; 
    int ele= ((n*(n+1) )/2);
     int arr[ele];
    for(int i=0;i<ele;i++){
        cin>>arr[i];
    }
    cout<<endl<<"Matrix is :"<<endl;
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                cout<<arr[k]<<" ";
                k++;
            }
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
--------------------------------------------------------------------------------
(e) Symmetric Matrix

#include <iostream>
using namespace std;

int main() {
    cout << "Enter order of matrix :" << endl;
    int n;
    cin >> n;

    cout << "Enter upper triangular elements of matrix :" << endl;
    int ele = (n * (n + 1)) / 2;
    int arr[ele];

    for (int i = 0; i < ele; i++) {
        cin >> arr[i];
    }

    cout << endl << "Symmetric Matrix is :" << endl;
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                cout << arr[k] << " ";
                k++;
            } else {
               
                int index = (j * n) - (j * (j - 1)) / 2 + (i - j);
                cout << arr[index] << " ";
            }
        }
        cout << endl;  
    }

    return 0;
}
========================================================================================
6) Write a program to implement the following operations on a Sparse Matrix,
assuming the matrix is represented using a triplet.


(a) TRANSPOSE 

#include <iostream>
using namespace std;
class sparse{
    int arr[3][3];
    int tr[3][3];
    public:
    void input(){
        for(int i=0;i<3;i++){
            cout<<"Enter row "<<i+1<<endl;
            for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
        }
    }
    void transpose() {
    for (int i = 0; i < 3; i++) {
        tr[i][0] = arr[i][1];   // new row  = old col
        tr[i][1] = arr[i][0];   // new col  = old row
        tr[i][2] = arr[i][2];   // value stays same
    }

    // print result
    cout << "\nTranspose Triplet:\n";
    for (int i = 0; i < 3; i++) {
        cout << tr[i][0] << "  "
             << tr[i][1] << "  "
             << tr[i][2] << "\n";
    }
}

    void show(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
};
int main() {
    sparse s;
    s.input();
    s.show();
    s.transpose();

    return 0;
}
--------------------------------------------------------------------------------------------------------
(b) Addition of two matrices.
#include <iostream>
using namespace std;

int create_sparse(int arr[5][4], int row, int col ,int spar[20][3]) {
    int count = 0;
    
    // Count non-zero elements
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }
    
    
    // First row: store metadata
    spar[0][0] = row;
    spar[0][1] = col;
    spar[0][2] = count;
    
    int k = 1; // Index to insert in sparse matrix
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                spar[k][0] = i;
                spar[k][1] = j;
                spar[k][2] = arr[i][j];
                k++;
            }
        }
    }
    
    // Print sparse matrix
    cout << "Sparse matrix representation:\n";
    cout << "Row Col Value\n";
    for (int i = 0; i <= count; i++) {
        cout << spar[i][0] << "   " << spar[i][1] << "   " << spar[i][2] << "\n";
    }
    return count;
}
void add(int spar1[20][3], int spar2[20][3], int l1, int l2) {
    int sum[40][3];  // big enough to hold all entries
    int k = 1;       // sum index starting from 1 (0 is metadata)
    int i = 1, j = 1;

    // Metadata rows are at index 0
    sum[0][0] = spar1[0][0];  // rows (assuming both same)
    sum[0][1] = spar1[0][1];  // cols
    // count will be updated later

    while (i <= l1 && j <= l2) {
        // Compare row and col to merge positions
        if (spar1[i][0] == spar2[j][0] && spar1[i][1] == spar2[j][1]) {
            sum[k][0] = spar1[i][0];
            sum[k][1] = spar1[i][1];
            sum[k][2] = spar1[i][2] + spar2[j][2];
            k++; i++; j++;
        }
        else if (spar1[i][0] < spar2[j][0] || 
                (spar1[i][0] == spar2[j][0] && spar1[i][1] < spar2[j][1])) {
            sum[k][0] = spar1[i][0];
            sum[k][1] = spar1[i][1];
            sum[k][2] = spar1[i][2];
            k++; i++;
        }
        else {
            sum[k][0] = spar2[j][0];
            sum[k][1] = spar2[j][1];
            sum[k][2] = spar2[j][2];
            k++; j++;
        }
    }

    // Copy remaining elements of spar1
    while (i <= l1) {
        sum[k][0] = spar1[i][0];
        sum[k][1] = spar1[i][1];
        sum[k][2] = spar1[i][2];
        k++; i++;
    }
    // Copy remaining elements of spar2
    while (j <= l2) {
        sum[k][0] = spar2[j][0];
        sum[k][1] = spar2[j][1];
        sum[k][2] = spar2[j][2];
        k++; j++;
    }

    sum[0][2] = k - 1;  // number of non-zero elements in sum

    cout << "\nSum matrix representation:\n";
    cout << "Row Col Value\n";
    for (int idx = 0; idx < k; idx++) {
        cout << sum[idx][0] << "   " << sum[idx][1] << "   " << sum[idx][2] << "\n";
    }
}

int main() {
    int arr1[5][4] = {
        {2, 3, 0, 0},
        {0, 0, 0, 5},
        {0, 0, 7, 0},
        {1, 0, 0, 0},
        {8, 0, 0, 0}
    };
    int arr2[5][4] = {
        {7, 3, 0, 0},
        {0, 0, 1, 0},
        {1, 0, 7, 0},
        {1, 0, 0, 0},
        {0, 0, 0, 0}
    };
    int spar1[20][3];
    int spar2[20][3];
    int len1=create_sparse(arr1, 5, 4,spar1);
    int len2=create_sparse(arr2, 5, 4,spar2);
    
    add(spar1,spar2,len1,len2);
    
    return 0;
}

--------------------------------------------------------------------------------------------------------
(b) Addition of two matrices.
#include <iostream>
#include <vector>
using namespace std;

int find_size(int arr[4][4]) {
    int size = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != 0) {
                size++;
            }
        }
    }
    return size;
}

vector<vector<int>> make_sparse(int arr[4][4], int size) {
    vector<vector<int>> sparse(size, vector<int>(3));
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] != 0) {
                sparse[k][0] = i;        // row
                sparse[k][1] = j;        // col
                sparse[k][2] = arr[i][j]; // value
                k++;
            }
        }
    }
    return sparse;
}

vector<vector<int>> add(vector<vector<int>> v1, vector<vector<int>> v2) {
    vector<vector<int>> sum;
    int i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i][0] < v2[j][0] || (v1[i][0] == v2[j][0] && v1[i][1] < v2[j][1])) {
            sum.push_back(v1[i]);
            i++;
        }
        else if (v2[j][0] < v1[i][0] || (v1[i][0] == v2[j][0] && v2[j][1] < v1[i][1])) {
            sum.push_back(v2[j]);
            j++;
        }
        else { // same position
            int val = v1[i][2] + v2[j][2];
            if (val != 0) {
                sum.push_back({v1[i][0], v1[i][1], val});
            }
            i++; j++;
        }
    }

    // Add remaining elements
    while (i < v1.size()) {
        sum.push_back(v1[i]);
        i++;
    }
    while (j < v2.size()) {
        sum.push_back(v2[j]);
        j++;
    }

    return sum;
}

int main() {
    int arr[4][4] = {
        {1,0,0,0},
        {2,0,0,3},
        {0,0,0,4},
        {0,7,0,0}
    };

    int arr2[4][4] = {
        {0,0,5,0},
        {2,0,0,3},
        {0,3,0,4},
        {0,7,0,0}
    };

    int size1 = find_size(arr);
    vector<vector<int>> sparse1 = make_sparse(arr, size1);

    int size2 = find_size(arr2);
    vector<vector<int>> sparse2 = make_sparse(arr2, size2);

    cout << "Sparse Matrix 1:\n";
    for (int i = 0; i < sparse1.size(); i++) {
        cout << sparse1[i][0] << " "
             << sparse1[i][1] << " "
             << sparse1[i][2] << endl;
    }

    cout << "\nSparse Matrix 2:\n";
    for (int i = 0; i < sparse2.size(); i++) {
        cout << sparse2[i][0] << " "
             << sparse2[i][1] << " "
             << sparse2[i][2] << endl;
    }

    vector<vector<int>> addition = add(sparse1, sparse2);

    cout << "\nSum of Sparse Matrices:\n";
    for (int i = 0; i < addition.size(); i++) {
        cout << addition[i][0] << " "
             << addition[i][1] << " "
             << addition[i][2] << endl;
    }

    return 0;
}
-----------------------------------------------------------------------------
(c) MULTIPLICATION

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> multiply(const vector<vector<int>>& A,
                                 const vector<vector<int>>& B) {
        if (A.empty() || B.empty()) return {};   // check for empty matrices

        int rows = A.size();
        int cols = B[0].size();
        int common = A[0].size();               // same as B.size()

        vector<vector<int>> res(rows, vector<int>(cols, 0));

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                for (int k = 0; k < common; k++) {
                    res[r][c] += A[r][k] * B[k][c];
                }
            }
        }
        return res;
    }
};

====================================================================================================================
====================================================================================================================
ADDITIONAL QUESTIONS
1) Find two numbers in an array whose difference equals K. Given an array arr[] and a
positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of
(arr[i] - arr[j]) is equal to k.

https://www.geeksforgeeks.org/dsa/count-pairs-difference-equal-
k/?utm_source=chatgpt.com#better-approach-sorting-and-two-pointer-technique-onlogn-
time-and-o1-space


#include <iostream>
using namespace std;
int main() {
    int arr[]={2,7,5,4,3,8,6,1,9,6};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(abs(arr[i]-arr[j])==3){
                cout<<"Pair is : ("<<arr[i]<<" , "<<arr[j]<<")"<<endl;
            }
            
        }
    }

    return 0;
}
--------------------------------------------------------------------------------------------------------
4) Sort an array of 0s, 1s and 2s - Dutch National Flag Problem
Given an array arr[] consisting of only 0s, 1s, and 2s. The objective is to sort the array, i.e.,
put all 0s first, then all 1s and all 2s in last.
https://www.geeksforgeeks.org/dsa/sort-an-array-of-0s-1s-and-2s/

#include <iostream>
using namespace std;
int main() {
    int arr[]={2,1,0,1,2,0,0,1,2,1};
    int c0=0,c1=0,c2=0;
    for(int i=0;i<10;i++){
       if(arr[i]==0) c0++;
       else if(arr[i]==1) c1++;
       else c2++;
    }
      int index=0;
      for(int i=0;i<c0;i++){
          arr[index]=0;
          index++;
      }
      for(int i=0;i<c1;i++){
          arr[index]=1;
          index++;
      }
      for(int i=0;i<c2;i++){
          arr[index]=2;
          index++;
      }
      
      for(int i=0;i<10;i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}
----------------------------------------------------------------------------------------------------------

3) String Anagrams
Given two strings str1 and str2, determine if they form an anagram pair.
Note: Two strings are considered anagrams if one string can be rearranged to form the other
string.

https://www.codechef.com/practice/course/nutanix-interview-
questions/NUTANIXCON01/problems/NUTANIX01

#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // Step 1: If lengths differ, not anagrams
    if (str1.length() != str2.length()) return false;

    // Step 2: Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Step 3: Compare sorted strings
    return str1 == str2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2))
        cout << "Yes, the strings are anagrams." << endl;
    else
        cout << "No, the strings are not anagrams." << endl;

    return 0;
}
---------------------------------------------------------------------------------------------------------------
5) Given a fixed-length integer array arr, duplicate each occurrence of two (2), shifting the
remaining elements to the right.
Note that elements beyond the length of the original array are not written. Do the above
modifications to the input array in place and do not return anything.
https://leetcode.com/problems/duplicate-zeros/description/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {  // loop till second last index
            if (arr[i] == 0) {
                // Shift elements to the right
                for (int j = n - 2; j > i; j--) {
                    arr[j + 1] = arr[j];
                }
                arr[i + 1] = 0;  // duplicate the zero
                i++;             // skip the duplicated zero
            }
        }
    }
};
