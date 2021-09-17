#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second

using namespace std;

// swap function
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


// selection sort ( time complexity O(n*n) )
vi selection_sort(vi &v){
    int n = v.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[j]<v[i]){
                swap(v[j],v[i]);
            }
        }
    }
    return v;
}



// bubble sort ( time complexity O(n*n) )
vi bubble_sort(vi &v){
    int cnt=1;
    while(cnt<v.size()){
        for(int i=0; i<v.size()-cnt; i++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]);
            }
        }
        cnt++;
    }
    return v;
}



// insertion sort ( time complexity O(n*n) )
vi insertion_sort(vi &v){
    int n = v.size();
    for(int i=1; i<n; i++){
        int curr = v[i];
        int j = i-1;
        while(v[j]>v[i] && j>=0){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = curr;
    }
    return v;
}



// merge sort ( time complexity O(n*log n) )
void Merge(vi &v, int st, int mid, int end){

    int n1 = mid-st+1;
    int n2 = end-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1; i++){
        a[i] = v[st+i];
    }
    for(int j=0; j<n2; j++){
        b[j] = v[mid+1+j];
    }

    int l=st;
    int m=0;
    int n=0;

    while(m<n1 && n<n2){
        if(a[m]<b[n]){
            v[l] = a[m];
            m++; l++;
        }
        else{
            v[l] = b[n];
            n++; l++;
        }
    }

    while(m<n1){
        v[l] = a[m];
        m++; l++;
    }

    while(n<n2){
        v[l] = b[n];
        n++; l++;
    }
}

void mergeSort(vi &v, int st, int end){

    if(st<end){
        int mid = (st+end)/2;
        mergeSort(v,st,mid);
        mergeSort(v,mid+1,end);

        Merge(v,st,mid,end);
    }
}

vi merge_sort(vi &v){
    int end = v.size()-1;
    int st = 0;
    mergeSort(v,st,end);
    return v;
}



// quick sort ( time complexity O(n*n) )
int Partition(vi &v, int st, int end){
    int pivot = v[end];
    int i = st-1;

    for(int j=st; j<end; j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[end]);
    return i+1;
}

void quickSort(vi &v, int st, int end){
    if(st<end){
        int pi = Partition(v,st,end);
        quickSort(v,st,pi-1);
        quickSort(v,pi+1,end);
    }
}

vi quick_sort(vi &v){
    int st = 0;
    int end = v.size()-1;
    quickSort(v,st,end);
    return v;
}



// wave sort ( time complexity O(n) )
vi wave_sort(vi &v){
    for(int i=1; i<v.size(); i+=2){
        if(v[i]>v[i-1]){
            swap(v[i],v[i-1]);
        }
        if(v[i]>v[i+1] && i<=v.size()-2){
            swap(v[i],v[i+1]);
        }
    }
    return v;
}

// heap sort ( time complexity O(n*log n) )
void heapify(vi &v, int n, int i){
    int maxidx = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && v[l]>v[maxidx]){
        maxidx = l;
    }
    if(r<n && v[r]>maxidx){
        maxidx = r;
    }

    if(maxidx != i){
        swap(v[i],v[maxidx]);
        heapify(v,n,maxidx);
    }
}

vi heap_sort(vi &v){
    int n = v.size();

    for(int i=n/2-1; i>=0; i--){
        heapify(v,n,i);
    }

    for(int i=n-1; i>0; i--){
        swap(v[0],v[i]);
        heapify(v,i,0);
    }

    return v;
}
