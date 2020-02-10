 #include<bits/stdc++.h>
using namespace std;
void Reverse(char *C,int n){
    stack<char> S;
    // Andar pao sare
    for(int i=0;i<n;i++){
        S.push(C[i]);
    }
    // Bahr kaddo sare

    for(int i=0;i<n;i++){
         C[i] = S.top();
         S.pop();
    }

}




int main(){
    char S[60];
    string first,last;
    cout<<"Enter A String:";
    gets(S);
    first = S;
    Reverse(S,strlen(S));
    cout<<S<<endl;
    last = S;
    if(first == last){
        cout<<"Given String is a Palindromic"<<endl;
    }

}
