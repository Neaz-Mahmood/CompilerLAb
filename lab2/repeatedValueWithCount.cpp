#include<bits/stdc++.h>
#include<conio.h>


using namespace std;

bool isItInThere(vector<int>vec,int num){
    //std::vector<int>::iterator it;
     auto res = std::find (vec.begin(), vec.end(), num);
     if(res==vec.end()){
        return true;
     }
     return false;
}
vector<int> getUserInput(){
    int n, i, in;
    vector<int>myVec;
    cout<< "Enter size of the array : ";
    cin>>n;
    cout<< "Enter elements in array : ";
    for(i=0; i<n; i++)
    {
    cin>>in;
     myVec.push_back(in);
    }
    return myVec;
}

int main(){
    int i, j, count;
    vector<int>vec;
    vector<int>dupli;
    vector<int>dupliCount;

    vec= getUserInput();
    for(i=0;i<vec.size();i++){
            count=1;
        if(isItInThere(dupli, vec.at(i))){
           for(j=i+1;j<vec.size();j++){
            if(vec[i]==vec[j]){
                    count++;
                if(isItInThere(dupli, vec.at(i))){
                    dupli.push_back(vec.at(i));
                }
            }
           }
            dupliCount.push_back(count);
        }
    }
    cout<< "Repeated value count in array are : "<< dupli.size()<<endl;
    cout<< "Repeated values are : "<<endl;
    for (auto i = dupli.begin(), j=dupliCount.begin(); i != dupli.end(); ++i, ++j){
        cout <<"element:"<< *i << " repeated : "<< *j<<endl;
    }




}
