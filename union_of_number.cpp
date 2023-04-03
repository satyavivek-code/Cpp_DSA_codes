#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<int> findUnions(int ar1[], int ar2[], int n, int m){
    vector<int>Unions;
    set<int>s;

    for (int i = 0; i <n; i++){
        s.insert(ar1[i]);
    }
    for (int i = 0; i <m; i++){
        s.insert(ar2[i]);
    }
    for (auto& i:s){
        Unions.push_back(i);
    }
    return Unions;
    
}
vector <int> findIntersection(int ar1[], int ar2[], int n, int m){
    int a = 0;
    int b = 0;
    vector<int> ans;

    while (a < n && b < m){
        if (ar1[a] < ar2[b]){
            a++;
        } 
        else if (ar2[b] < ar1[a]){
            b++;
        }
        else {
            ans.push_back(ar1[a]);
            a++;
            b++;
        }
    }
    return ans;
}


int main()
{
    int ar1[5] = {0,1,2,3,4};
    int ar2[4] = {1,1,2,5};
    vector <int> Union = findUnions(ar1, ar2, 5, 4);
    for (auto &it : Union) {
        cout << Union[it] << " ";
    }cout <<endl;
    vector<int> ans = findIntersection(ar1, ar2, 5, 4);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}