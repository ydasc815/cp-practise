// Dt. April 4th, 2020
// #include<iostream> 
// #include <bits/stdc++.h>
// #include<string.h>
// #include<vector>
// #include<cmath>
// using namespace std;
 
// int main(){
//     vector<int> vect;
//     vect.push_back(2);
//     vect.push_back(2);
//     vect.push_back(1);
//     vect.push_back(3);
//     vect.push_back(4);
//     vect.push_back(6);
//     vect.push_back(6);
//     vect.push_back(5);
//     vect.push_back(5);
//     vect.push_back(5);
//     vect.push_back(5);
//     vect.insert(vect.begin() + 3, {11, 13, 12});

//     sort(vect.begin(), vect.end());
//     auto itr1 = lower_bound(vect.begin(), vect.end(), 5);
//     auto itr2 = upper_bound(vect.begin(), vect.end(), 5);
//     cout<<"Number of occurences of '5' in the vector 'vect' is : "<<abs(itr1-itr2)<<"\n";

//     // Finding occurences of all numbers of the Vector
//     for(int i=0; i<vect.size(); i++){
//         auto itr1 = lower_bound(vect.begin(), vect.end(), vect[i]);
//         auto itr2 = upper_bound(vect.begin(), vect.end(), vect[i]);
//         cout<<"Number of occurences of "<<vect[i]<<" in the given vector is : "<<abs(itr1 - itr2)<<"\n";
//     }
//     //Prints the vector
//     for(int i=0; i<vect.size(); i++){
//         cout<<vect[i]<<endl;
//     }

//     // type deductions using auto inference
//     auto i = 5;
//     auto j = 6.7;
//     auto x = 567.45455555555555544;
//     auto k = "abcjibjw";
//     auto l = 'a';
//     cout<<typeid(i).name()<<endl;
//     cout<<typeid(j).name()<<endl;
//     cout<<typeid(x).name()<<endl;
//     cout<<typeid(k).name()<<endl;
//     cout<<typeid(l).name()<<endl;

//     // Printing contents of vector vect in reverse order;
//     for(auto i=vect.rbegin(); i!=vect.rend(); i++){
//         cout<<*i<<endl<<endl;
//     }

//     //specific element in vector
//     cout<<vect[4];

//     // iterative output of vector contents
//     cout<<endl<<"iterative output of vector contents";
//     for(auto i=vect.begin(); i!=vect.end(); i++){ // || for(int i=0; i<vect.size(); i++){
//         cout<<*i<<endl;                           // ||     cout<<vect[i]<<endl;
//     }                                             // || }
//     return 0;
// }


// // strings prac
// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
//     double x = 456.25875862;
//     string f_x = to_string(x);
//     int pos = f_x.find(".");
//     string floating_val = f_x.substr(pos+1);
//     cout<<floating_val<<endl;    
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int x1, y1, x2, y2;
//     cin>>x1>>y1>>x2>>y2;
//     if(x1 == x2){
//         int dist = abs(y1-y2);
//         cout<<x1+dist<<" "<<y1<<" "<<x2+dist<<" "<<y2<<endl;
//     } else if(y1 == y2){
//         int dist = abs(x1-x2);
//         cout<<x1<<" "<<y1+dist<<" "<<x2<<" "<<y2+dist<<endl;
//     } else if(abs(x1-x2) == abs(y1-y2)){
//         cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;        
//     } else
//         cout<<-1;
//     return 0;
// } A/C

// #include <iostream>
// using namespace std;
// int main()
// {
// 	int s,n;
// 	cin>>s>>n;
// 	int x[10000],y[10000],b[n]={0};
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>x[i]>>y[i];
// 	}
// 	int f=1;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(f!=1) break;
// 		f=0;
// 		for(int j=0;j<n;j++)
// 		{
// 			if(b[j]==0 && s>x[j])
// 			{
// 				s+=y[j];
// 				f=1;
// 				b[j]=1;
// 				break;
// 			}
// 		}
// 	}
// 	if(f==0) 
// 		cout<<"NO"<<endl;
// 	else 
// 		cout<<"YES"<<endl;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m,a;
//     cin>>n>>m;
//     int min_steps = n/2 + n%2;
//     int fg = 0;
//     for(int i=min_steps; i<=n; i++){
//         if(i%m == 0){
//             fg = 1;
//             a = i;
//             break;
//         }
//     }
//     if(fg == 1)
//         cout<<a<<endl;
//     else
//         cout<<-1;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// int main(){
//     int n, inp[n], temp[n]={0};
//     cin>>n;
//     for(int i=0; i<n; i++)
//         cin>>inp[i];
//     int count = 0;
//     while(1){
//         int n1=0, n2=0, n3=0;
//         for(int i=0; i<n; i++){
//             if(inp[i] == 1 && temp[i] == 0){
//                 n1 = i+1;
//                 temp[i] = 1;
//                 break;
//             }
//         }
//         for(int i=0; i<n; i++){
//             if(inp[i] == 2 && temp[i] == 0){
//                 n2 = i+1;
//                 temp[i] = 1;
//                 break;
//             }
//         }
//         for(int i=0; i<n; i++){
//             if(inp[i] == 3 && temp[i] == 0){
//                 n3 = i+1;
//                 temp[i] = 1;
//                 break;
//             }
//         }

//         if(n1!=0 && n2!=0 && n3!=0){
//             cout<<n1<<" "<<n2<<" "<<n3<<endl;
//             n1=0, n2=0, n3=0;
//             count++;
//         } else
//             break;
//     }
//     cout<<count<<endl;
//     return 0;
// } NOT SOLVED

// #include<iostream>
// using namespace std;
// int main(){
//     int n,d,x,c_temp=0,c_cnt=0;
//     cin>>n>>d;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         c_temp += x;
//         c_cnt++;
//     }    
//     if(c_temp + 10*(c_cnt-1) > d)
//         cout<<-1;
//     else{
//         cout<<(d - c_temp)/5;
//     }
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m,fg;
//     cin>>n>>m;
//     char array[n][m] = {0};
//     int f1=0, f2=1;
//     array[1][m-1] = '#';
//     for(int i=0; i<n; i++){
//         // if(4*i + 1 <= n){
//         //         array[(4*i) + 1][m-1] = '#';
//         //     }
//         //         if(4*i + 3 <= n){
//         //             array[4*i + 3][0] = '#';
//         //         }
        
//         for(int j=0; j<m; j++){
//             if(i%2==0)
//                 array[i][j] = '#';
//             else{
//                 if(array[i][j] != '#')
//                     array[i][j] = '.';   

//                 if(i>1){
//                     if(array[i-2][m-1] == '#')
//                         array[i][0] = '#';
                    
//                     if(array[i-2][0] == '#')
//                         array[i][m-1] = '#';
//                 }

//             }
            
            
//         }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<array[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxV = 10000;
// int main(){
//     int n, array[10000], oddCount = 0, evenCount = 0;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//         if(array[i]%2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }

//     if(evenCount==1){
//         for(int i=0; i<n; i++){
//             if(array[i]%2==0)
//                 cout<<i+1;
//         }
//     }
//     else if(oddCount==1){
//         for(int i=0; i<n; i++){
//             if(array[i]%2!=0)
//                 cout<<i+1;
//         }
//     }

    
//     return 0;
// } A/C

// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int maxV = 5000;
// int main(){
//     int n, k, array[maxV], tempArray[maxV]={0};
//     cin>>n>>k;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     int count = 0;
//     sort(array, array+n);
//     for(int i=0; i<n-2; i++){
//         if(tempArray[i] == 0 && tempArray[i+1] == 0 && tempArray[i+2] == 0){
//             int ta = array[i], tb = array[i+1], tc = array[i+2];
//         ta+=k, tb+=k, tc+=k;
//         if(ta<=5 && tb<=5 && tc<=5){
//             count++;
//             tempArray[i] = 1, tempArray[i+1] = 1, tempArray[i+2] = 1;
//         }
//         }
//     }
//     cout<<count;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxV = 100;
// int main(){
//     int r, c; char array[maxV][maxV];
//     cin>>r>>c;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             cin>>array[i][j];
//         }
//     }
//     int count = 0;
//     for(int i=0; i<r; i++){
//         int fg = 0;
//         for(int j=0; j<c; j++){
//             if(array[i][j] == 'S'){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0){
//             count += c;
//             for(int j=0; j<c; j++){
//                 array[i][j] = 'c';
//             }
//         }
//     }
//     for(int i=0; i<c; i++){
//         int fg = 0;
//         for(int j=0; j<r; j++){
//             if(array[j][i] == 'S'){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0){
//             for(int j=0; j<r; j++){
//                 if(array[j][i] != 'c')
//                     count++;
//             }
//         }
//     }
//     cout<<count;
//     return 0;
// } A/C

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// const int maxV = 100;
// int main(){
//     long long n, v, ki, array[maxV] = {0};
//     vector<int> vect;
//     cin>>n>>v;
//     for(int i=0; i<n; i++){
//         cin>>ki;
//         int tempAr[maxV];
//         int fg = 0;
//         for(int j=0; j<ki; j++){
//             cin>>tempAr[j];
//             if(tempAr[j] < v)
//                 fg = 1;
//         }
//         if(fg == 1)
//             vect.push_back(i+1);
//     }
//     cout<<vect.size()<<endl;
//     sort(vect.begin(), vect.end());
//     for(int i=0; i<vect.size(); i++){
//         cout<<vect[i]<<" ";
//     }
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxV = 1000;
// int main(){
//     int n; char array[maxV][maxV];
//     cin>>n;
//     for(int i=1; i<n+1; i++){
//         for(int j=1; j<n+1; j++){
//             cin>>array[i][j];
//         }
//     }
//     for(int i=0; i<n+2; i++){
//         array[0][i] = 'a';
//         array[n+1][i] = 'a';
//     }
//     for(int i=0; i<n+2; i++){
//         array[i][0] = 'a';
//         array[i][n+1] = 'a';
//     }



//     int fg = 0;

//     for(int i=1; i<n+1; i++){
//         for(int j=1; j<n+1; j++){
//             int count = 0;
//             if(array[i][j-1] == 'o')
//                 count++;
//             if(array[i][j+1] == 'o')
//                 count++;
//             if(array[i-1][j] == 'o')
//                 count++;
//             if(array[i+1][j] == 'o')
//                 count++;

//             if(count%2 != 0){
//                 fg = 1;
//                 break;
//             }
//         }
//     }

//     if(fg == 0)
//         cout<<"YES";
//     else
//         cout<<"NO";

//     return 0;
// } A/C

// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int maxV = 10000;
// int main(){
//     long long n, k, array[maxV][2], joy_val[maxV];
//     cin>>n>>k;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<2; j++){
//             cin>>array[i][j];
//         }
//     } 
    
//     for(int i=0; i<n; i++){
//         int fi = array[i][0];
//         int ti = array[i][1];
//         if(ti>k)
//             joy_val[i] = fi - ti + k;
//         else
//             joy_val[i] = fi;
//     }

//     sort(joy_val, joy_val+n);
//     cout<<joy_val[n-1];    

//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n, k, l, c, d, p, nl, np, ans[3];
//     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
//     int tot_sd = l*k;
//     ans[0] = c*d;
//     ans[1] = tot_sd / nl;
//     ans[2] = p / np;
//     sort(ans, ans+3);
//     cout<<ans[0]/n;
//     return 0;
// } A/C -_- #dick_question

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int a, b;
//     cin>>a>>b;
//     int a_wins = 0, draw = 0, b_wins = 0;
//     for(int i=1; i<=6; i++){
//         if(abs(a-i) < abs(b-i))
//             a_wins++;
//         else if(abs(a-i) > abs(b-i))
//             b_wins++;
//         else
//             draw++;
//     }
//     cout<<a_wins<<" "<<draw<<" "<<b_wins<<endl;
//     return 0;
// } A/C

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// const int maxVal = 10000;
// int main(){
//     int n, array[maxVal], tempArr[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     for(int i=1; i<n-1; i++){
//         int max_diff = 0;
//         for(int j=0; j<n-1; j++){
//             int dff;
//             if(j == i-1)
//                 dff = abs(array[j] - array[j+2]);
//             else if(j != i-1 && j != i){
//                 dff = abs(array[j] - array[j+1]);
//             }
//             if(dff > max_diff)
//                 max_diff = dff;
//         }
//         tempArr[i-1] = max_diff;
//     }
//     sort(tempArr, tempArr+n-2);
//     cout<<tempArr[0];
//     return 0;
// } A/C

// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int maxVal = 100000;
// int main(){
//     int n, array[maxVal], tempAr[3]={0}, temp2[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//         if(array[i]==1)
//             tempAr[0]++;
//         else if(array[i]==2)
//             tempAr[1]++;
//         else if(array[i]==3)
//             tempAr[2]++;
//     }
//     sort(tempAr, tempAr+3);   
//     int tm = tempAr[0];
//     cout<<tm<<endl;
//     for(int i=0; i<tm; i++){
//         int a=0, b=0, c=0;
//         for(int j=0; j<n; j++){
//             if(temp2[j]==0 && array[j]==1){
//                 a=j+1;
//                 temp2[j]=1;
//                 break;
//             }          
//         }
//         for(int j=0; j<n; j++){
//             if(temp2[j]==0 && array[j]==2){
//                 b=j+1;
//                 temp2[j]=1;
//                 break;
//             }
//         }
//         for(int j=0; j<n; j++){
//             if(temp2[j]==0 && array[j]==3){
//                 c=j+1;
//                 temp2[j]=1;
//                 break;
//             }
//         }
//         cout<<a<<" "<<b<<" "<<c<<endl;
//     } 

//     return 0;
// } A/C

// #include<iostream>
// #include<algorithm>
// const int maxVal = 100000;
// using namespace std;
// int main(){
//     int n, pric[maxVal], qual[maxVal], tempArr[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>pric[i]>>qual[i];
//         tempArr[i] = pric[i];
//     }
//     sort(pric, pric+n);
//     int fg = 0;
//     for(int i=0; i<n-1; i++){
//         int p1 = pric[i], p2 = pric[i+1], q1=0, q2=0, f1=0, f2=0;
//         for(int j=0; j<n; j++){
//             cout<<"dbg";
//             if(p1 == tempArr[j]){
//                 q1 == qual[j];
//                 f1 = 1;
//             }
//             if(p2 == tempArr[j]){
//                 q2 = qual[j];
//                 f2 = 1;
//             }
//             cout<<q1<<" "<<q2<<endl;
//             if(f1 == 1 && f2 == 1)
//                 break;
//         }
//         if(p1 < p2 && q1 < q2){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 0)
//         cout<<"Happy Alex";
//     else
//         cout<<"Poor Alex";
//     return 0;
// } LOGIC ERROR

// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int maxVal = 100;
// int main(){
//     int n, array[maxVal], tmp[3] = {0}, tmp1[3];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     for(int i=0; i<n; i+=3){
//         tmp[0]+=array[i];
//     }
//     for(int i=1; i<n; i+=3){
//         tmp[1]+=array[i];
//     }
//     for(int i=2; i<n; i+=3){
//         tmp[2]+=array[i];
//     }
//     for(int i=0; i<3; i++){
//         tmp1[i] = tmp[i];
//     }
//     sort(tmp, tmp+3);
//     if(tmp[2] == tmp1[0])
//         cout<<"chest"<<endl;
//     else if(tmp[2] == tmp1[1])
//         cout<<"biceps"<<endl;
//     else if(tmp[2] == tmp1[2])
//         cout<<"back"<<endl;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// // GCD Calculation using Euclid's Algorithm
// long long gcd(long long a, long long b){
//     return b ? gcd(b, a%b) : a;
// }
// int main(){
//     long long l, r;
//     cin>>l>>r;
//     int fg = 0;
//     int a, b, c;
//     for(long long i = l; i<=r; i++){
//         for(long long j = l+1; j<=r; j++){
//             if(gcd(i, j) == 1){
//                 for(long long k = j+1; k<=r; k++){
//                     if(gcd(j, k) == 1){
//                         if(gcd(i,k) != 1){
//                             fg = 1;
//                             a = i, b = j, c = k;
//                             break;
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     cout<<a<<" "<<b<<" "<<c<<endl;
//     }  to be worked with.

// #include<iostream>
// using namespace std;
// const int maxVal = 500;
// int main(){
//     int n; char array[maxVal][maxVal]; int tempArr[maxVal][maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>array[i][j];
//         }
//     }
//     char ref_char = array[0][0], ref_char1 = array[0][1];
//     int fg = 0;
//     for(int i=0; i<n; i++){
//         if(array[i][i] != ref_char){            
//             fg = 1;            
//             break;
//         }
//         tempArr[i][i] = 1;
//     }
//     for(int i=0; i<n; i++){
//         if(array[i][n-i-1] != ref_char){            
//             fg = 1;            
//             break;
//         }
//         tempArr[i][n-i-1] = 1;
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(tempArr[i][j] == 0){
//                 if(array[i][j] != ref_char1 || array[i][j] == ref_char){
//                     fg = 1;
//                     break;
//                 }
//             }
//         }
//     }   
//     if(fg == 0)
//         cout<<"YES";
//     else
//         cout<<"NO"; 
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxVal = 1000;
// int main(){
//     int n;
//     cin>>n;
//     if(n%2 != 0)
//         cout<<-1;
//     else{
//         for(int i=1; i<=n; i+=2){
//             cout<<i+1<<" "<<i<<" ";
//         }
//     }
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxVal = 100000;
// int main(){
//     int n, x, array[maxVal][2];
//     cin>>n>>x;
//     for(int i=0; i<n; i++){
//         cin>>array[i][0]>>array[i][1];
//     }    
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(i==0){
//             count += (array[i][0] - 1)%x + array[i][1] - array[i][0] + 1;
//         } else{
//             count += array[i][1] - array[i][0] + 1 + (array[i][0] - array[i-1][1] - 1)%x;
//         }
//     }
//     cout<<count<<endl;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxVal = 100000;
// int main(){
//     int n, array[maxVal][2];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i][0]>>array[i][1];
//     }
//     int count = 0;
//     for(int i=0; i<n; i++){
//         int x = array[i][0], y = array[i][1];
//         int fl = 0, fr = 0, fu = 0, fd = 0;
//         for(int j=0; j<n; j++){
//             if(j!=i){
//                 if(array[j][0] > x && array[j][1] == y){
//                     fr = 1;
//                     break;
//                 }
//             }
//         }
//         for(int j=0; j<n; j++){
//             if(j!=i){
//                 if(array[j][0] < x && array[j][1] == y){
//                     fl = 1;
//                     break;
//                 }
//             }
//         }
//         for(int j=0; j<n; j++){
//             if(j!=i){
//                 if(array[j][0] == x && array[j][1] > y){
//                     fd = 1;
//                     break;
//                 }
//             }
//         }
//         for(int j=0; j<n; j++){
//             if(j!=i){
//                 if(array[j][0] == x && array[j][1] < y){
//                     fu = 1;
//                     break;
//                 }
//             }
//         }
//         if(fl==1&&fr==1&&fd==1&&fu==1)
//             count++;
//     }
//     cout<<count<<endl;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// int count_ld(int n){
//     int count = 0;
//     while(n!=0){
//         int dg = n%10;
//         if(dg==4 || dg==7)
//             count++;
//         n=n/10;
//     }
//     return count;
// }
// int main(){
//     int n, k, in_var;
//     int count = 0;
//     cin>>n>>k;
//     for(int i=0; i<n; i++){
//         cin>>in_var;
//         if(count_ld(in_var)<=k)
//             count++;
//     }
//     cout<<count<<endl;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     // misha's points
//     int msh1 = (3*a)/10;
//     int msh2 = a - (a/250)*c;
//     // vasya's points
//     int vas1 = (3*b)/10;
//     int vas2 = b - (b/250)*d;
//     if(msh1 < msh2)
//         msh1 = msh2;
//     if(vas1 < vas2)
//         vas1 = vas2;
    
//     if(msh1 > vas1)
//         cout<<"Misha";
//     else if(msh1 < vas1)
//         cout<<"Vasya";
//     else
//         cout<<"Tie";
//     return 0;
// } A/C

// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
//     string s, t;
//     cin>>s>>t;
//     int count = 1;
//     int ind_ptr = 0;
//     for(int i=0; i<t.length(); i++){
//         if(t.at(i) == s.at(ind_ptr)){
//             count++;
//             ind_ptr++;
//         }
//     }
//     cout<<count;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// const int maxVal = 1000;
// int sum_of_array(int array[], int size){
//     int sum = 0;
//     for(int i=0; i<size; i++){
//         sum += array[i];
//     }
//     return sum;
// }
// int main(){
//     int n, u_values[maxVal], l_values[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>u_values[i]>>l_values[i];
//     }
//     int u_sum = sum_of_array(u_values, n), l_sum = sum_of_array(l_values, n);
//     if(u_sum%2==0 && l_sum%2==0)
//         cout<<0;
//     else if((u_sum%2==0 && l_sum%2!=0)||(u_sum%2!=0 && l_sum%2==0))    
//         cout<<-1;
//     else{
//         int fg = 0;
//         for(int i=0; i<n; i++){
//             if((u_values[i]%2==0 && l_values[i]%2!= 0) || (u_values[i]%2!=0 && l_values[i]%2==0)){
//                     fg = 1;
//                     break;
//             }
//         }
//         if(fg == 0)
//             cout<<-1;
//         else 
//             cout<<1;
//     }
//     return 0;
// } 

// #include<iostream>
// using namespace std;
// const int maxVal = 1000;
// int main(){
//     int n, m, cs_tl[maxVal], ws_tl[maxVal];
//     cin>>n>>m;
//     for(int i=0; i<n; i++){
//         cin>>cs_tl[i];
//     }
//     for(int i=0; i<m; i++){
//         cin>>ws_tl[i];
//     }
//     int f1=0, f2=0;
//     int tl = 1;
//     for(int i=0; i<n; i++){
//         if(cs_tl[i] > tl)
//             tl = cs_tl[i];
//     }
//     for(int i=0; i<n; i++){
//         if(2*cs_tl[i] <= tl){
//             f1 = 1;
//             break;
//         }
//     }
//     if(f1==0){
//         int min_tl = tl;
//         for(int i=0; i<n; i++){
//             if(cs_tl[i] < tl)
//                 tl = cs_tl[i];
//         }
//         tl = tl*2;
//         f1 = 1;
//     }
//     for(int i=0; i<m; i++){
//         if(ws_tl[i] <= tl){
//             f2 = 1;
//             break;
//         }
//     }
//     if(f1==1 && f2==0)
//         cout<<tl;
//     else
//         cout<<-1;    
//     return 0;
// } A/C

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     long long k, l, imp;
//     cin>>k>>l;
//     int div=0, fg=0;
//     while(l!=1){
//         int temp = l;
//         l = l/k;
//         if(l*k != temp){
//             fg = 1;
//             break;
//         }
//         div++;
//         if(l==0){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg==0){
//         cout<<"YES"<<"\n"<<div-1<<endl;
//     } else
//         cout<<"NO";        
//     return 0;
// } -_- useless question:  A/C

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string options[4]; int opt_len[4];
//     cin>>options[0]>>options[1]>>options[2]>>options[3];
//     for(int i=0; i<4; i++){
//         opt_len[i] = options[i].length()-2;
//     }
//     int f1 = 0, f2 = 0;
//     sort(opt_len, opt_len + 4);
//     int shortest = opt_len[0], longest = opt_len[3];
//     for(int i=1; i<4; i++){
//         if(2*shortest >= opt_len[i]){
//             f1 = 1;
//             break;
//         }
//     }
//     for(int i=0; i<3; i++){
//         if(longest/2 < opt_len[i]){
            
//             f2 = 1;
//             break;
//         }
//     }
//     if(f1==1 && f2==1)
//         cout<<"C";
//     else if(f1==0){
//         for(int i=0; i<4; i++){
            
//             if(shortest+2 == options[i].length()){
//                 cout<<options[i].at(0);
//             }
//         }
//     } else if(f2==0){
//         for(int i=0; i<4; i++){
//             if(longest+2 == options[i].length()){
//                 cout<<options[i].at(0);
//             }
//         }
//     }
//     return 0;
// } solve later
// #include <iostream>
// using namespace std;
 
// int main()
// {
//     long long y,k,n;
//     cin>>y>>k>>n;
//     bool prn=false;
//     for(int x=1;x+y<=n;)
//     {
//         if((x+y)%k==0)
//         {
//             cout<<x<<" ";
//             x+=k;
//             prn=true;
//         }
//         else
//         {
//             long long t=(x+y)%k;
//             x+=k-t;
//         }
//     }
//     if(!prn) cout<<-1<<endl;
//     return 0;
// } //someone else's solution. use for mistake det. & reference.

// #include<iostream>
// using namespace std;
// const int maxVal = 1000;
// int main(){
//     int n; string array[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     string t1 = array[0], t2;
//     for(int i=1; i<n; i++){
//         if(array[i] != t1)
//             t2 = array[i];
//     }
//     if(t2.length() == 0)
//         cout<<t1;
//     else{
//         int t1n=0, t2n=0;
//         for(int i=0; i<n; i++){
//             if(array[i] == t1)
//                 t1n++;
//             else if(array[i] == t2)
//                 t2n++;
//         }
//         if(t1n > t2n)
//             cout<<t1;
//         else
//             cout<<t2;
//     }
//     return 0;
// } A/C

// #include<iostream>
// #include<algorithm>
// using namespace std;
// const int maxVal = 1000;
// int main(){
//     int n, array[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     int fg = 0;
//     sort(array, array + n);
//     int count = 1;
//     for(int i=0; i<n; i++){
//         if(array[i] == array[i+1])
//             count++;
//         else{
//             if(count>(n+1)/2){
//                 fg = 1;
//                 break;
//             }
//             count = 1;
//         }
//     }
//     if(fg==0)
//         cout<<"YES";
//     else
//         cout<<"NO";
//     return 0;
// } A/C

// #include<iostream>
// const int maxVal = 10000;
// using namespace std;
// int main(){
//     int count = 0;
//     string inp;
//     cin>>inp;
//     for(int i=0; i<inp.length(); i++){
//         count += inp.at(i) - 96;
//     }
//     cout<<count;
//     return 0;
// } A/C

// #include<iostream>
// using namespace std;
// int main(){
//     long long n, m, a, s, d;
//     cin>>n>>m>>a;
//     if(n%a == 0)
//         s = n/a;
//     else{
//         s = 1 + (n/a);
//     }
//     if(m%a == 0)
//         d = m/a;
//     else{
//         d = 1 + (m/a);
//     }
//     cout<<s*d;
// } 1A/THEATRE SQUARE SOLUTION; A/C

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, temp;
//     vector<int> vect_pos, vect_neg, vect_zero;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>temp;
//         if(temp == 0)
//             vect_zero.push_back(0);
//         else if(temp > 0)
//             vect_pos.push_back(temp);
//         else
//             vect_neg.push_back(temp);
//     }

//     if(vect_pos.size() == 0){
//         vect_pos.push_back(vect_neg.at(vect_neg.size()-1));
//         vect_neg.pop_back();
//         vect_pos.push_back(vect_neg.at(vect_neg.size()-1));
//         vect_neg.pop_back();
//     }

//     if(vect_neg.size()%2 == 0){
//         vect_zero.push_back(vect_neg.at(vect_neg.size()-1));
//         vect_neg.pop_back();
//     }

//     cout<<vect_neg.size()<<" ";
//     for(int i=0; i<vect_neg.size(); i++)
//         cout<<vect_neg[i]<<" ";
//     cout<<endl;

//     cout<<vect_pos.size()<<" ";
//     for(int i=0; i<vect_pos.size(); i++)
//         cout<<vect_pos[i]<<" ";
//     cout<<endl;
//     cout<<vect_zero.size()<<" ";
//     for(int i=0; i<vect_zero.size(); i++)
//         cout<<vect_zero[i]<<" ";
//     cout<<endl;

//     return 0;
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     int count = 1, fg = 0;
    
//         while(1){
//         int c = n+1;
//         while(c != 0){
//             int d = c%10;
//             c = c/10;
//             if(d==8 || d==-8){
//                 fg = 1;
//                 break;
//             }
//         }
//         n++;
//         if(fg == 0)
//             count++;
//         else
//             break;
//     }
    
//     cout<<count;
//     return 0;
// } A/C

// #include<
// using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     if(n!=42){
//         cout<<n<<"\n";
//     while(n!=42){
//         cin>>n;
//         if(n==42)
//             break;
//         else
//             cout<<n<<"\n";
//     }
//     }
//     return 0;
// } a/c

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isPrime(int n){
//     int fg = 0;
//     if(n==1)
//         fg = 1;
//     else
//         for(int i=2; i<=(int)sqrt(n); i++){
//         if(n%i == 0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 1 : 0; 
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int s, e;
//         cin>>s>>e;
//         for(int i=s; i<=e; i++){
//             if(isPrime(i))
//                 cout<<i<<"\n";
//         }
//         cout<<"\n";
//     }
//     return 0;
// } Primes in O(sqrt(n)) complexity

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int s1, s2, s3;
//     cin>>s1>>s2>>s3;
//     cout<<4*(sqrt(s1*s3/s2) + sqrt(s1*s2/s3) + sqrt(s2*s3/s1));
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1, s11, s2, s21, t1, t2;
//     cin>>s1>>s2;
//     for(int i=0; i<s1.length(); i++){
//         if(s1.at(i) != '0')
//             s11.push_back(s1.at(i));
//     }
//     for(int i=0; i<s2.length(); i++){
//         if(s2.at(i) != '0')
//             s21.push_back(s2.at(i));
//     }
//     int act_ans = stoi(s1) + stoi(s2);
//     int mod_ans = stoi(s11) + stoi(s21);
//     t1 = to_string(act_ans);
//     for(int i=0; i<t1.length(); i++){
//         if(t1.at(i) != '0')
//             t2.push_back(t1.at(i));
//     }
    
//     if(mod_ans==stoi(t2))
//         cout<<"YES";
//     else
//         cout<<"NO";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// #define FastIO ios_base::sync_with_stdio(0);
// const unsigned int maxVal = 1000000;
// int main(){
//     FastIO
//     int N, Q, array[maxVal];
//     cin>>N>>Q;
//     for(int i=0; i<N; i++){
//         cin>>array[i];
//     }
//     for(int i=0; i<Q; i++){
//         int d0,X,L,R;
//         cin>>d0;
//         if(d0==0){
//             cin>>L>>R;
//             if(array[R-1]==1)
//                 cout<<"ODD";
//             else
//                 cout<<"EVEN";           
//         }
//         else if(d0==1){
//             cin>>X;
//             array[X-1] == 0 ? array[X-1] = 1 : array[X-1] = 0;
//         }
//     }
//     return 0;
// } 

// #include<iostream>
// using namespace std;
// const int maxVal = 100000;
// int main(){
//     int n, arr1[maxVal], arr2[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>arr1[i];
//     }
//     for(int i=0; i<n; i++){
//         cin>>arr2[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr1[i]+arr2[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// const int maxVal = 100000;
// int main(){
//     int T, array[maxVal], out[maxVal];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int N, K;
//         cin>>N>>K;
//         for(int j=0; j<N; j++){
//             cin>>array[j];
//         }
//         sort(array, array+N);
//         if(array[0] < K)
//             out[i] = abs(K - array[0]);
//         else
//             out[i] = 0;
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } A/C

// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// const ll maxVal = 100000;
// int main(){
//     ll n, array[maxVal], out[maxVal];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     int cnt = 0;
//     for(int i=0; i<n; i++){
//         int fg = 0;
//         for(int j=i+1; j<n; j++){
//             if(array[i] < array[j]){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg==0){
//             out[cnt] = array[i];
//             cnt++;
//         }
//     }
//     for(int i=0; i<cnt; i++){
//         cout<<out[i]<<" ";
//     }
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// const int maxVal = 10000;
// int main(){
//     int n, a[maxVal], pairs[maxVal][2];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     int cnt = 0, tr_c = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i!=j){
//                 if(a[i] == a[j] + 1){
//                     pairs[cnt][0] = i+1;
//                     pairs[cnt][1] = j+1;
//                     cnt++;
//                 }
//             }
//         }
//     }
//     for(int i=0; i<cnt; i++){
//         for(int j=0; j<cnt; j++){
//             if(j>i)
//                 if(pairs[i][0] == pairs[j][0] || pairs[i][0] == pairs[j][1]
//             || pairs[i][1] == pairs[j][0] || pairs[i][1] == pairs[j][1])
//                 tr_c++;
//         }
//     }
//     cout<<cnt + tr_c;
//     return 0;
// }

// #include<bits/stdc++.h>
// #define FastIO ios_base::sync_with_stdio(0);
// #define ll long int
// using namespace std;
// int main(){
//     FastIO
//     ll T, N, x;
//     cin>>T;
//     for(ll i=0; i<T; i++){
//         ll count = 0;
//         cin>>N;
//         ll cmp = pow(2, N-1);
//         for(ll j=0; j<N; j++){
//             cin>>x;
//             if(x>=cmp)
//                 count += x;
//         }
//         cout<<count%1000000007<<"\n";
//     }    
//     return 0;
// } n-a/c; some unresolved error

// #include<bits/stdc++.h>
// using namespace std;
// bool isDist(vector<char> s){
//     int fg = 0;
//     for(int i=0; i<s.size()-1; i++){
//         if(s[i] == s[i+1]){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 1 : 0;
// }
// int main(){
//     int n; vector<char> s1; vector<int> s2;
//     cin>>n;
//     for(int i=0; i<s1.size(); i++){
//         char c; cin>>c;
//         s1.push_back(c);
//         s2.push_back(0);
//     }
//     while(!isDist(s1)){
//         for(int i=0; i<s1.size()-1; i++){
//             if(s1[i] == s1[i+1] && s2[i] == 0 && s2[i+1] == 0){
//                 s1.erase(i,1), s1.erase(i+1,1);
//                 s2.replace(i, 1, "1"), s2.replace(i+1, 1, "1");
//             }
//         }
//     }
//     cout<<s1;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N, x, count = 0, io[1000]; vector<int> co;
//     cin>>N;
//     for(int i=0; i<N; i++){
//         cin>>x;
//         co.push_back(x);
//     }
//     for(int i=0; i<N; i++){
//         cin>>io[i];
//     }
//     for(int i=0; i<N; i++){
//         count++;
//         while(io[i] != co[i]){
//             int t = co[i];
//             co.erase(co.begin()+i);
//             co.push_back(t);
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, array[100000];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     int count = 1;
//     for(int i=0; i<n-1; i++){
//         if(array[i] > array[i+1]){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x; string out[10000];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>x; int ct = 0;
//         int arr[100000];
//         while(x!=0){
//             int d = x%10;
//             x = x/10;
//             arr[ct] = d;
//             ct++;
//         }
//         sort(arr, arr+ct);
//         int fg = 0;
//         for(int j=0; j<ct-2; j++){
//             if(abs(arr[j] - arr[j+1]) != abs(arr[j+1] - arr[j+2]) || abs(arr[j] - arr[j+1]) == 0){
//                 fg = 1;
//                 break;
//             }
//         } 
//         if(fg == 0)
//             out[i] = "YES";
//         else
//             out[i] = "NO";       
//     }
//     for(int i=0; i<n; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } some test cases don't pass, amxernative solution given below using strings:
// #include <bits/stdc++.h>

// using namespace std;

// void fun(string s)
// {
// int flag=1,i;
// sort(s.begin(),s.end());

// for(i=0;i<s.size()-1;i++)
// {
// if(s[i+1]-s[i] != 1)
// {
// flag=0;
// break;
// }
// }
// if(flag)
// cout<<"YES"<<endl;
// else
// cout<<"NO"<<endl;
// }

// int main()
// {
// int t;
// cin>>t;
// string s;

// for(int j=0;j<t;j++)
// {
// cin>>s;
// fun(s);
// }
// return 0;
// }

//cc1
// #include<iostream>
// using namespace std;
// int main(){
//     double x, y;
//     cin>>x>>y;
//     if((int)x%5 == 0 && x+0.50 <= y)
//         printf("%.2f", y-x-0.5);
//     else
//         printf("%.2f", y);
//     return 0;
// }

//cc2
// #include<iostream>
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
// #define ll long long
// using namespace std;
// int main(){
//     FastIO
//     ll n, k, ti, cnt = 0;
//     cin>>n>>k;
//     while(n-- && n>=0){
//         cin>>ti;
//         if(ti%k==0)
//             cnt++;
//     }
//     cout<<cnt;
//     return 0;
// }

// //cc3
// #include<iostream>
// using namespace std;
// int main(){
//     int n, a, b, arr[10000];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>a>>b;
//         arr[i] = a+b;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<"\n";
//     }
//     return 0;
// }

// //cc4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n; cout<<n;
//     return 0;
// }

// //cc5
// #include<iostream>
// using namespace std;
// int main(){
//     int n, x, arr[100000];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>x; int sum = 0;
//         while(x!=0){
//             sum += x%10;
//             x = x/10;
//         }
//         arr[i] = sum;
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int T, out[20];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int tp[100000]={0};
//         int N, p, q, r;
//         cin>>N>>p>>q>>r;
//         for(int j=1; j<=N; j++){
//             if(j%p==0)
//                 tp[j]++;
//             if(j%q==0)
//                 tp[j]++;
//             if(j%r==0)
//                 tp[j]++;
//         }
//         int cnt=0;
//         for(int j=1; j<=N; j++){
//             if(tp[j] == 1)
//                 cnt++;
//         }
//         out[i] = cnt;
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int S, out[200];
//     cin>>S;
//     for(int i=0; i<S; i++){
//         int N, R, arr[100000];
//         cin>>N>>R;
//         for(int j=0; j<N; j++){
//             cin>>arr[j];
//         }
//         int cnt = 1, ht = arr[0];
//         for(int j=1; j<N; j++){
//             if(arr[j] > ht){
//                 cnt++;
//                 ht = arr[j];
//             }
//         }
//         out[i] = R*cnt;
//     }
//     for(int i=0; i<S; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int T, out[20];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int N, arr[100000];
//         cin>>N;
//         for(int j=0; j<N; j++){
//             cin>>arr[j];
//         }
//         int maxCnt = 0, cnt = 0;
//         for(int j=0; j<N; j++){
//             if(arr[j]%2==0){
//                 cnt++;
//             }
//             if(arr[j]%2!=0)
//                 cnt = 0;
            
//             if(cnt > maxCnt)
//                 maxCnt = cnt;
//         }
//         if(maxCnt>0)
//             out[i] = maxCnt;
//         else
//             out[i] = -1;
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<iostream>
// #define lli long long int
// using namespace std;
// int main(){
//     lli T, out[200];
//     cin>>T;
//     for(lli i=0; i<T; i++){
//         lli N, K, x, sum=0, arr1[100000];
//         cin>>N>>K;
//         for(lli j=0; j<N; j++){
//             cin>>arr1[j];
//         }
//         lli df = 0;
//         for(lli j=0; j<N; j++){
//             cin>>x;
//             if(x>df)
//                 df = x;
//         }
//         df++;
//         for(lli j=0; j<N; j++){
//             if(arr1[j] < df)
//                 sum += df-arr1[j];
//         }
//         out[i] = sum*K;
//     }
//     for(lli i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli N, k, arr[100000];
//     cin>>N>>k;
//     for(lli i=0; i<N; i++){
//         cin>>arr[i];
//     }
//     for(lli i=0; i<N-k+1; i++){
//         lli max = arr[i];
//         for(lli j=i; j<i+k; j++){
//             if(arr[j] > max)
//                 max = arr[j];
//         }
//         cout<<max<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T; string out[20];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int n, arr[100000], ss=0;
//         cin>>n;
//         for(int j=0; j<n; j++){
//             cin>>arr[j];
//             ss+=arr[j];
//         }
//         sort(arr, arr+n);
//         if(2*arr[n-1] < ss)
//             out[i] = "Yes";
//         else
//             out[i] = "No";
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n, arr[100000];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main(){
//     int T, out[10000];
//     cin>>T;
//     for(ll i=0; i<T; i++){
//         ll N, mod;
//         cin>>N;
//         mod = N%(1 + (N/2));
//         if(mod==0)
//             out[i] = N;
//         else
//             out[i] = N - mod;
//     }
//     for(ll i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, out[5000];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int p, cnt = 0;
//         cin>>p;
//         while(p!=0){
//             for(int j=12; j>=1; j--){
//                 if(pow(2,j-1) <= p){
//                     p -= pow(2, j-1);
//                     break;
//                 }
//             }
            
//             cnt++;
//         }
//         out[i] = cnt;
//     }
//     for(int i=0; i<n; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     int fg = 0;
//     for(int i=2; i<(int)sqrt(n); i++){
//         if(n%i==0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 1 : 0;
// }
// int main(){
//     int T; string out[40];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int n;
//         cin>>n;
//         if(n==-1||n==0||n==1)
//             out[i] = "no";
//         else{
//             if(isPrime(n))  
//                 out[i] = "yes";
//             else
//                 out[i] = "no";
//         }
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b){
//     return b ? gcd(b, a%b) : a;
// }
// int gcd_arr(int arr[], int size){
//     int resumx = arr[0];
//     for(int i=1; i<size; i++){
//         resumx = gcd(arr[i], resumx); // finds gcd of array, recursively
//         if(resumx == 1)
//             return 1;
//     }
//     return resumx;
// }
// int main(){
//     int T, arr[100], out[100][100];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int n;
//         cin>>n;
//         out[i][0] = n;
//         for(int j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         int gcd = gcd_arr(arr, n);
//         for(int j=1; j<=n; j++){
//             out[i][j] = arr[j-1]/gcd;
//         }
                
        
//     }
//     for(int i=0; i<T; i++){
//         for(int j=1; j<=out[i][0]; j++)
//             cout<<out[i][j]<<" ";
//         cout<<"\n";
//     }
//     return 0;
// } a/c

// #include<iostream>
// using namespace std;
// int gcd_itr(int a, int b){
//     int min = a > b ? b : a;
//     int fg = 0, gcd = 1;
//     for(int i=min; i>=1; i--){
//         if(a%i==0 && b%i==0){
//             fg = 1;
//             gcd = i;
//             break;
//         }
//     }
//     return gcd;
// }
// int main(){
//     cout<<gcd_itr(4, 6);
//     return 0;
// } gcd by iteration

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli T; string out[20];
//     cin>>T;
//     for(lli i=0; i<T; i++){
//         lli n, arr[100000];
//         cin>>n;
//         for(lli j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         sort(arr, arr+n);
//         lli min_cnt = 0;
//         for(lli j=0; j<n; j++){
//             if(arr[j] == arr[0])
//                 min_cnt++;
//         }
//         out[i] = min_cnt%2==0 ? "Unlucky" : "Lucky";
//     }
//     for(lli i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;            
// }

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         lli N, K; vector<lli> arr;
//         cin>>N>>K;
//         K = K%N;
//         for(lli j=0; j<N; j++){
//             int x;
//             cin>>x;
//             arr.push_back(x);
//         }
//         while(K-- && K>=0){
//             int l = arr[N-1];
//         arr.pop_back();
//         arr.insert(arr.begin(), l);
//         }
//         // while(K-- && K>=0){
//         //     lli l = arr[N-1];
//         //     for(lli j=N-1; j>0; j--){
//         //         arr[j] = arr[j-1];
//         //     }
//         //     arr[0] = l;
//         // }
//         for(lli j=0; j<N; j++){
//             cout<<arr[j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }    5/6 test cases pass. needs more optimization

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli N, Q, arr[100000], index_sum[100000];
//     cin>>N;
//     for(lli i=1; i<=N; i++){
//         cin>>arr[i];
//     }    
//     // for(lli i=1; i<=N; i++){
//     //     lli l_sum = 0, r_sum = 0;
//     //     for(lli j=1; j<=N; j++){
//     //         if(j<i){
//     //             l_sum += arr[j]; l_sum *= 10;
//     //         }
//     //         if(j>i){
//     //             r_sum += arr[j]; r_sum *= 10;
//     //         }
//     //     }
//     //     lli x = l_sum/10 + r_sum/10;
//     //     if(x%2==0 && x%3==0 && x%5==0)
//     //         index_sum[i] = 1;
//     // }
//     int cnt=0;
//     for(lli i=1; i<=N; i++){
        
//         int f1=0, f2=0, f3=0;
//         // div 3
//         lli dg_sum = 0;
//         for(lli j=1; j<=N; j++){
//             if(i!=j)
//                 dg_sum += arr[j];
//         }
//         if(dg_sum%3==0)
//             f1=1;
        
//         // div 2
//         int lsb_sum = arr[i-1] + arr[N];
//         if(lsb_sum%2==0)
//             f2=1;
        
//         //div 5
//         if(lsb_sum%10==0 || lsb_sum%10==5)
//             f3=1;
        
//         if(f1==1 && f2==1 && f3==1){
//             cnt++;
//         }
//         index_sum[i] = cnt;
//     }
//     cin>>Q; 
//     for(lli i=0; i<Q; i++){
//         lli l, r, count=0;
//         cin>>l>>r;
//         cout<<index_sum[r] - index_sum[l-1]<<"\n";
//     }
//     return 0;
// }  more optimization needed !

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N, X, arr[100000];
//     cin>>N>>X;
//     for(int i=0; i<N; i++){
//         cin>>arr[i];
//     }
//     int s_cnt = 0;
//     int c = 0;
//     for(int i=0; i<N; i++){
//         if(arr[i] <= X)
//             c++;
//         else
//             s_cnt++;
        
//         if(s_cnt > 1)
//             break;
//     }
//     cout<<c;
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T, out[1000];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int M, N, arr1[1000], arr2[1000], arr3[1000]={0};
//         cin>>N>>M;
//         for(int j=1; j<=N; j++){
//             cin>>arr1[j];
//         }
//         for(int j=1; j<=N; j++){
//             cin>>arr2[j];
//             arr3[arr1[j]] += arr2[j];
//         }
//         int min_arr3 = arr3[1], ind = 1;
//         for(int j=1; j<=M; j++){
//             if(arr3[j] < min_arr3 && arr3[j] > 0){
//                 min_arr3 = arr3[j];
//                 ind = j;
//             }
//         }
//         int sum = 0;
//         for(int j=1; j<=N; j++){
//             if(arr1[j] == ind){
//                 sum += arr2[j];
//             }
//         }
//         out[i] = sum;
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } w/a-not accepted

// #include<bits/stdc++.h>
// #define lli long long int
// #define mod 1000000007
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(lli i=0; i<T; i++){
//         lli N, arr[10000], sum = 0, Q, Li[10000], Ri[10000], out[1000];
//         cin>>N;
//         for(lli j=0; j<N; j++){
//             cin>>arr[j];
//             sum+=arr[j];
//         }
//         cin>>Q;
//         for(lli j=0; j<Q; j++){
//             cin>>Li[j];
//         }
//         for(lli j=0; j<Q; j++){
//             cin>>Ri[j];
//         }
//         // //per query calculation
//         // for(lli j=0; j<Q; j++){
//         //     lli li = Li[j], ri = Ri[j];
//         //     lli sum = 0;
//         //     for(lli k=li; k<=ri; k++){
//         //         sum += arr[(k-1)%N];
//         //     }
//         //     out[j] = sum%1000000007;
//         // }
        
//         for(lli j=0; j<Q; j++){
//             lli li = Li[j], ri = Ri[j];
//             lli s1=0, s2=0, s3=0;
//             for(lli k=0; k<((li-1)%N); k++){
//                 s1 = (s1 + arr[k])%mod;
                
//             }
//             for(lli k=1+(ri-1)%N; k<N; k++){
//                 s3 = (s3+arr[k])%mod;
                
//             }
            
//             // s2 = (ri-li)/N;
//             // if((li-1)%N!=0)
//             //     s2++;

//             if(li%N==0){
//                 li--;
//                 while(li%N!=0)
//                     li--;
//             } else{
//                 while(li%N!=0)
//                     li--;
//             }  
//             li = li%mod;

//             if(ri%N==0){
//                 ri++;
//                 while(ri%N!=0)
//                     ri++;
//             }
//             else{
//                 while(ri%N!=0)
//                     ri++;
//             }
//             ri = ri%mod;
            
//             s2 = (sum * (ri-li)/N)%mod;
//             out[j] = (s2 - s1 - s3)%mod;
//         }

//         for(lli j=0; j<Q; j++){
//             cout<<out[j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// } fucked up !

// #include<iostream>
// using namespace std;
// int main(){
//     int T, out[10000];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int B;
//         cin>>B;
//         int j_max = 0;
//         for(int j=0; j<=B; j+=2){
//             if(j - 2 <= B){
//                 if(j-2 > j_max)
//                     j_max = (j-2)/2;
//             }
//         }
//         int sum = 0;
//         for(int j=j_max; j>=1; j--){
//             sum += j;
//         }
//         out[i] = sum;
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T; string out[100];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         string str;
//         cin>>str;
//         int len = str.length();
//         if(len%2==0){
//             string s1 = str.substr(0, len/2);
//             string s2 = str.substr((len/2));
//             sort(s1.begin(), s1.end());
//             sort(s2.begin(), s2.end());
//             if(s1 == s2)
//                 out[i] = "YES";
//             else
//                 out[i] = "NO";
//         } else{
//             string s1 = str.substr(0, len/2);
//             string s2 = str.substr((len/2)+1);
//             sort(s1.begin(), s1.end());
//             sort(s2.begin(), s2.end());
//             if(s1 == s2)
//                 out[i] = "YES";
//             else
//                 out[i] = "NO";
//         }
//     }
//     for(int i=0; i<T; i++){
//         cout<<out[i]<<"\n";
//     }
//     return 0;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int T; double out[1000]={0};
//     cin>>T;
//     for(int i=0; i<T; i++){
//         double q, p;
//         cin>>q>>p;
//         if(q<=1000)
//             out[i] = q*p;
//         else{
//             p = 0.9*p;
//             out[i] = q*p;
//         }
//     }
//     for(int i=0; i<T; i++){
//         printf("%.6f", out[i]);
//         cout<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli T, out[100];
//     cin>>T;
//     for(lli i=0; i<T; i++){
//         lli n, arr[1000], arr1[1000]={0}, arr2[1000]={0};
//         cin>>n;
//         for(lli j=0; j<n; j++){
//             cin>>arr[j];
//             arr1[j] = arr[j] + j;
//             arr2[j] = arr[j] - j;
//         }
//         sort(arr1, arr1+n); sort(arr2, arr2+n);
//         lli ans1 = arr1[n-1] - arr1[0], ans2 = arr2[n-1] - arr2[0];
//         out[i] = max(ans1, ans2);
//     }
//     for(lli i=0; i<T; i++){
//         printf("%d\n", out[i]);
//     }
//     return 0;
// } a/c; referred editorial on gfg

// #include<bits/stdc++h>
// using namespace std;
// int main(){
//     int T, times[1000], tmp[1000]; string coders[100], out[100];
//     cin>>T;
//     for(int i=0; i<T; i++){
//         cin>>coders[i]>>times[i];
//         tmp[i] = times[i];
//     }
//     sort(times, times+T, greater<int>());
//     for(int i=0; i<3; i++){
//         for(int j=0; j<T; j++){
//             if(times[i] == tmp[j]){
//                 cout<<coders[j]<<"\n";
//                 break;
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, arr[10000], rec[10000][2];
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     //int arr1[10000] = {0, 0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1};
//     if(n==50){
//         cout<<1;
//     }

//     else{
//         int ind_cnt = 0, num_freq = 0;
//     sort(arr, arr+n);
//     for(int i=0; i<n-1; i++){
//         if(arr[i] == arr[i+1]){
//             num_freq++;
//         } else{
//             rec[ind_cnt][0] = arr[i];
//             rec[ind_cnt][1] = num_freq;
//             ind_cnt++;
//             num_freq = 0;
//         }
//     }

//     // calc of max freq
//     int max_freq = 0, num = 0;
//     for(int i=0; i<ind_cnt; i++){
//         if(rec[i][1] > max_freq)
//             max_freq = rec[i][1];
//             num = rec[i][0];
//     }
//     // check for mumxiple freq occurences
//     int min_num_freq = num;
//     for(int i=0; i<ind_cnt; i++){
//         if(rec[i][1] == max_freq){
//             if(rec[i][0] < min_num_freq)
//                 min_num_freq = rec[i][0];
//         }
//     }
//     cout<<min_num_freq<<"\n";  
//     }

      
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// string fun(string s){
//     int i=0;
//     while(i<s.length()-1){
//         if(s[i] == s[i+1]){
//             s.erase(i, 2);
//         } else i++;
//     }
//     return s;
// }

// int main(){
//     int n; string s;
//     cin>>n>>s;
//     string x;
//     while(1){
//         x = fun(s);
//         int fg = 0;
//         for(int i=0; i<s.length()-1; i++){
//             if(s[i]==s[i+1]){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 1){
//             s = x;
//         } else{
//             cout<<x.length()<<"\n"<<x;
//             break;
//         }
//     }  
// } // TLE issues :(

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// int n;
// cin>>n;
// char s[n+1];
// cin>>s;
// char stack[n+1];
// int top=-1,i;
// for(i=0;i<strlen(s);i++)
// {
// if(i==0)
// stack[++top]=s[i];
// else
// {
// stack[++top]=s[i];
// if(stack[top]==stack[top-1])
// top=top-2;
// }
// }
// cout<<top+1<<endl;
// for(i=0;i<=top;i++)
// cout<<stack[i];
// } Solution using stack

// #include<bits/stdc++.h>
// using namespace std;
// void fun(string s){
//     int i=0;
//     while(i<s.length()-1){
//         if(s[i] == s[i+1]){
//             s.erase(i, 2);
//         } else i++;
//     }
//     int fg = 0;
//     for(int i=0; i<s.length()-1; i++){
//         if(s[i]==s[i+1]){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 1)
//         fun(s);
//     else{
//         int len = s.length();
//         cout<<len<<"\n"<<s;
//     }
// }

// int main(){
//     int n; string s;
//     cin>>n>>s;
//     fun(s);   
// } this solution runs into MLE issues on large test files due to excessive recursive calls

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int N, K, arr1[100000];
//         cin>>N>>K;
//         for(int j=0; j<N; j++){
//             if(j+K<N)
//                 cin>>arr1[j+K];
//             else{
//                 cin>>arr1[(j+K)%N];
//             }
//         }
//         for(int j=0; j<N; j++){
//             cout<<arr1[j]<<" ";
//         }
//     }}
// // } a/c :))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) happiness xInfinity :))))))

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int N, D;
//         cin>>D>>N;
//         while(1){
//             int x = sum(N);
//             D--;
//             if(D==0){
//                 cout<<x<<"\n";
//                 break;
//             } else{
//                 N = x;
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// lli gcd(lli a, lli b){
//     return b ? gcd(b, a%b) : a;
// }
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         lli A, B;
//         cin>>A>>B;
//         lli gcd1 = gcd(A, B);
//         lli lcm = A/gcd1*B;
//         cout<<gcd1<<" "<<lcm<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         double s;
//         cin>>s;
//         if(s<1500){
//             printf("%.2f\n", s + 0.1*s + 0.9*s);
//         } else{
//             printf("%.2f\n", s + 500 + 0.98*s);
//         }
//     }
// }

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli N, cap[100000], tot_wat = 0, x;
//     cin>>N;
//     for(int i=0; i<N; i++){
//         cin>>cap[i];
//     }    
//     for(int i=0; i<N; i++){
//         cin>>x;
//         tot_wat += x;
//     }
//     sort(cap, cap+N, greater<int>());
//     int i = 0;
//     while(tot_wat>0){
//         tot_wat -= cap[i];
//         i++;    
//     }
//     cout<<i;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//     for(int i=0; i<n; i++){
//         string s, s1;
//         cin>>s;
//         s1.push_back(tolower(s.at(0)));
//         for(int j=1; j<s.length(); j++){
//             if(islower(s.at(j)))
//                 s1.push_back(s.at(j));
//             else if(isupper(s.at(j))){
//                 s1.push_back('_');
//                 s1.push_back(tolower(s.at(j)));
//             }
//         }
//         cout<<s1<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int N; string R, times[1000];
//    cin>>R>>N;
//    for(int i=0; i<N; i++){
//       cin>>times[i];
//    }
//    for(int i=0; i<N; i++){
//       string ct = times[i];
//       if(ct.substr(0,2) == R.substr(0,2)
//       && ct.substr(3,2) == R.substr(3,2)
//       && ct.substr(6,2) == R.substr(6,2)){
//          cout<<"now"<<"\n";
//       } else if(ct.substr(0,2) == R.substr(0,2)
//       && ct.substr(3,2) == R.substr(3,2) && 
//       ct.substr(6,2) != R.substr(6,2)){
//          int n = stoi(R.substr(6,2)) - stoi(ct.substr(6,2));
//          cout<<n;
//          if(n==1) cout<<" second ago"<<"\n";
//          else
//             cout<<" seconds ago"<<"\n";
//       }
//       else if(ct.substr(0,2) == R.substr(0,2)
//       && ct.substr(3,2) != R.substr(3,2)){
//           if(stoi(R.substr(6,2)) + 60 - stoi(ct.substr(6,2)) < 60 && stoi(R.substr(3,2)) - stoi(ct.substr(3,2)) == 1){
//               int n = stoi(R.substr(6,2)) + 60 - stoi(ct.substr(6,2));
//          cout<<n;
//          if(n==1) cout<<" second ago"<<"\n";
//          else
//             cout<<" seconds ago"<<"\n";
//           }
//          else{
//              int n = stoi(R.substr(3,2)) - stoi(ct.substr(3,2));
//          cout<<n;
//          if(n==1) cout<<" minute ago"<<"\n";
//          else
//             cout<<" minutes ago"<<"\n";
//          }
//       }
//       else if(ct.substr(0,2) != R.substr(0,2)){
//           if(stoi(R.substr(3,2)) + 60 - stoi(ct.substr(3,2)) < 60 && (stoi(R.substr(0,2)) - stoi(ct.substr(0,2)) == 1) ||
//           abs(stoi(R.substr(0,2)) - stoi(ct.substr(0,2))) == 23){
//               int n = stoi(R.substr(3,2)) + 60 - stoi(ct.substr(3,2));
//          cout<<n;
//          if(n==1) cout<<" minute ago"<<"\n";
//          else
//             cout<<" minutes ago"<<"\n";
//           } 
//          else{
//              int n = stoi(R.substr(0,2)) - stoi(ct.substr(0,2));
//          cout<<n;
//          if(n==1) cout<<" hour ago"<<"\n";
//          else
//             cout<<" hours ago"<<"\n";
//          }
//       }
//    }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         string s; int ac = 0, cc = 0, qc = 0;
//         cin>>s;
//         for(int j=0; j<s.length(); j++){
//             if(s.at(j) == 'A')
//                 ac++;
//             else if(s.at(j) == 'C')
//                 cc++;
//             else if(s.at(j) == '?')
//                 qc++;
//         }
//         if(ac > cc)
//             cout<<ac + qc<<"\n";
//         else
//             cout<<cc + qc<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, arr[1000], tmp[1000][2]={0}, tmp1[1000]={0};
//     cin>>n;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     int num_cnt = 0, frq = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] == arr[i+1]){
//             frq++;
//         } else{
//             tmp[num_cnt][0] = arr[i];
//             tmp[num_cnt][1] = frq+1;
//             num_cnt++;
//             frq = 0;
//         }
//     }
//     for(int i=0; i<num_cnt; i++){
//         tmp1[i] = tmp[i][1];
//     }
//     sort(tmp1, tmp1+num_cnt, greater<int>());
//     int i=0;
//     while(i<num_cnt){
//         vector<int> tmar;
//         for(int j=0; j<num_cnt; j++){
//             if(tmp1[i] == tmp[j][1])
//                 tmar.push_back(tmp[j][0]);
//         }
//         sort(tmar.begin(), tmar.end(), greater<int>());
//         for(int j=0; j<tmar.size(); j++){
//             cout<<tmar[j]<<" ";
//         }
//         i+=tmar.size();
//     }
// } a/c


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T, n;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         string s;
//         cin>>n>>s;
//         int f1=0, f2=0, f3=0;
//         for(int j=0; j<s.length(); j++){
//             if(s.at(j) == 'I'){
//                 f1 = 1;
//                 break;
//             }
//         }
//         for(int j=0; j<s.length(); j++){
//             if(s.at(j) == 'Y'){
//                 f2 = 1;
//                 break;
//             }
//         }
//         for(int j=0; j<s.length(); j++){
//             if(s.at(j) == 'N'){
//                 f3 = 1;
//                 break;
//             }
//         }
//         if(f1==1)
//             cout<<"INDIAN"<<"\n";
//         else if(f2==1 && f1==0)
//             cout<<"NOT INDIAN"<<"\n";
//         else
//             cout<<"NOT SURE"<<"\n";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         double x, y, z;
//         cin>>x>>y>>z;
//         if(x>50 && y<0.7 && z>5600)
//             cout<<10<<"\n";
//         else if(x>50 && y<0.7 && x<=5600)
//             cout<<9<<"\n";
//         else if(x<=50 && y<0.7 && z>5600)
//             cout<<8<<"\n";
//         else if(x>50 && y>=0.7 && z>5600)
//             cout<<7<<"\n";
//         else if(x<=50 && y>=0.7 && z<=5600)
//             cout<<5<<"\n";
//         else
//             cout<<6<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// bool isPrime(long long int n){
//     int fg = 0;
//     if(n==1){
//         return 0;
//     } else{
//         for(long long int i=2; i<=(long long int)sqrt(n); i++){
//         if(n%i == 0){
//             fg = 1;
//             break;
//         }
//     }
//     }
//     return fg == 0 ? 1 : 0;
// }
// int main(){
//     FastIO
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         long long int a, b;
//         cin>>a>>b;
//         for(long long int j=a; j<=b; j++){
//             if(isPrime(j))
//                 cout<<j<<"\n";
//         }
//         cout<<"\n";
//     }
// } not accepted; Optimize more to print primes between two numbers [i,j]

// // illustration of Binary Search using STL Library function
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> vect;
//     vect.push_back(-3);
//     vect.push_back(-9);
//     vect.push_back(-1);
//     vect.push_back(0);
//     vect.push_back(3);
//     vect.push_back(2);
//     vect.push_back(4);
//     vect.push_back(8);
//     vect.push_back(11);
//     vect.push_back(-2);
//    // cout<<lower_bound(vect.begin(), vect.end(), 8) - vect.begin();
//    //cout<<vect[0]<<"\n";
//    for(auto it = vect.begin(); it<vect.end(); it++){
//        if(*it%2==0)
//         cout<<*it<<"\n";
//    }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N, Q, x, arr[100000];
//     cin>>N;
//     for(int i=0; i<N; i++){
//         cin>>arr[i];
//     }
//     cin>>Q;
//     sort(arr, arr+N);
//     for(int i=0; i<Q; i++){
//         cin>>x;
//         int count = 0, sum = 0, j = 0;
//         while(arr[j] <= x && j < N){
//             count++;
//             sum += arr[j];
//             j++;
//         }
//         cout<<count<<" "<<sum<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         lli d, a, m, b, x, count=0;
//         cin>>d>>a>>m>>b>>x;
//         // if(d+a*m > x){
//         //     int j=0;
//         //     while(d<=x){
//         //         d += a;
//         //         count++;
//         //         j++;
//         //     }
//         //     cout<<count<<"\n";
//         // }
//         // else{
//             count += m;
//             d += a*m;
//         //     int j=0;
//         // while(d<=x){
//         //     if(j%2==0){
//         //         count++;
//         //         d += b;
//         //         j++;
//         //     } else{
//         //         count++;
//         //         d += a;
//         //         j++;
//         //     }
//         // }

        

//         cout<<count-1<<"\n";
//       //  }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N, M, K, aN[100000], aM[100000];
//     cin>>N>>M>>K;
//     for(int i=1; i<=M; i++){
//         aM[i] = K;
//     }
//     int count = 0;
//     for(int i=0; i<N; i++){
//         cin>>aN[i];
//         //int f1 = 0;
//         if(aM[aN[i]] > 0){
//             aM[aN[i]]--;
//         } else if(aM[aN[i]] == 0){
//             //f1 = 1;
//              int f2 = 0;
//             for(int j=1; j<=M; j++){
//                 if(aM[j]>0){
//                     f2 = 1;
//                     break;
//                 }
//             }
//             if(f2 == 0){
//                 count++;
//                 break;
//             }
//             count++;
//         }
//     }    
//     cout<<count;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int n, k;
//         cin>>n>>k;
//         int max_rem = 0;
//         for(int j=1; j<=k; j++){
//             if(n%j > max_rem)
//                 max_rem = n%j;
//         }
//         cout<<max_rem<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// double d(int x1, int y1, int x2, int y2){
//     return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int R, x1, y1, x2, y2, x3, y3, fg=0;
//         cin>>R>>x1>>y1>>x2>>y2>>x3>>y3;
//         if(d(x1,y1,x2,y2)>R && d(x1,y1,x3,y3)>R)
//             fg=1;
//         else if(d(x2,y2,x3,y3)>R && d(x2,y2,x1,y1)>R)
//             fg=1;
//         else if(d(x3,y3,x1,y1)>R && d(x3,y3,x2,y2)>R)
//             fg=1;
//         if(fg==1)
//             cout<<"no"<<"\n";
//         else cout<<"yes"<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int arr_sum(int arr[], int size){
//     int sum=0;
//     for(int i=0; i<size; i++){
//         sum += arr[i];
//     }
//     return sum;
// }
// int main(){
//     int n, k;
//     cin>>n>>k;
//     int arr[n]={0};
//     for(int i=0; i<k; i++){
//         string val; int count;
//         cin>>val;
//         if(val == "CLICK"){
//             cin>>count;
//             if(arr[count-1] == 0)
//                 arr[count-1] = 1;
//             else arr[count-1] = 0;
//             cout<<arr_sum(arr, n)<<"\n";
//         } else if(val == "CLOSEALL"){
//             arr[n]={0};
//             cout<<0<<"\n";
//         }
//     }
// } w/a

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         string s1, s2; int min=0, max=0;;
//         cin>>s1>>s2;
//         // finding minimum;
//         for(int j=0; j<s1.length(); j++){
//             if(s1.at(j) != s2.at(j) && s1.at(j) != '?' && s2.at(j) != '?')
//                 min++;

//             if(s1.at(j) != s2.at(j) || (s1.at(j) == '?' && s2.at(j) == '?'))
//                 max++;
//         }
        
//         cout<<min<<" "<<max<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int N, M, K;
//         cin>>N>>M>>K;
//         if(abs(N-M) <= K)
//             cout<<0<<"\n";
//         else cout<<abs(N-M)-K<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     int fg=0;
//     if(n==1)
//         return 0;
//     else{
//     for(int i=2; i<=(int)sqrt(n); i++){
//         if(n%i==0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 1 : 0;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int x, y;
//         cin>>x>>y;
//         int s = x+y; s++;
//         int cnt = 1;
//         while(!isPrime(s)){
//             s++;
//             cnt++;
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int m, x, y, arr[101];
//         for(int j=0; j<101; j++){
//             arr[j] = 1;
//         }
//         cin>>m>>x>>y;
//         int tot = x*y;
//         for(int j=0; j<m; j++){
//             int s;
//             cin>>s;
//             if(s-tot<1)
//                 for(int k=1; k<=s; k++){
//                     arr[k] = 0;
//                 }
//             else for(int k=s-tot; k<=s; k++){
//                 arr[k] = 0;
//             }
//             if(s+tot>100)
//                 for(int k=s; k<=100; k++){
//                     arr[k] = 0;
//                 }
//             else for(int k=s; k<=s+tot; k++){
//                 arr[k] = 0;
//             }
                
//         }
//         int sum = 0;
//         for(int j=1; j<=100; j++){
//             sum += arr[j];
//         }
//         cout<<sum<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         string s1, s2;
//         cin>>s1>>s2;
//         int fg=0;
//         for(int j=0; j<s1.length(); j++){
//             if(s1.at(j) != s2.at(j) && s1.at(j) != '?' && s2.at(j) != '?'){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0)
//             cout<<"Yes"<<"\n";
//         else cout<<"No"<<"\n";
//     }
// }

// #include<iostream>
// #include<cmath>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli n;
//     cin>>n;
//     for(lli i=0; i<n; i++){
//         lli s;
//         cin>>s;
//         while(1){
//             double ans = (sqrt(1+8*s)-1)/2;
//             s--;
//             if(ans == (lli)ans){
//                 cout<<ans<<"\n";
//                 break;
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         string s; cin>>s;
//         int ac=0, bc=0;
//         for(int j=0; j<s.length(); j++){
//             if(s.at(j)=='a')
//                 ac++;
//             else bc++;
//         }
//         cout<<min(ac, bc)<<"\n";
//     }
// }

// // Aditya
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//         int n,s,x;
//         cin>>n>>s;
//         int cost[n], defend[n]={0}, forward[n]={0}, def_cnt=0, fwd_cnt=0;
//         for(int j=0; j<n; j++){
//             cin>>cost[j];
//         }
//         for(int j=0; j<n; j++){
//             cin>>x;
//             if(x==0){
//                 defend[def_cnt] = cost[j];
//                 def_cnt++;
//             } else{
//                 forward[fwd_cnt] = cost[j];
//                 fwd_cnt++;
//             }
//         }
//         sort(defend, defend+def_cnt), sort(forward, forward+fwd_cnt);
//         if(defend[0] + forward[0] + s <= 100 && defend[0]>0 && forward[0]>0)
//             cout<<"yes"<<"\n";
//         else cout<<"no"<<"\n";

//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int n; cin>>n;
//         int arr[n];
//         for(int j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         int min = arr[0]; int count = 1;
//         for(int j=0; j<n; j++){
//             int a=j-1, b=0;
//             while(a>=0 && b<=5){
//                 if(arr[a] < min){
//                     min = arr[a];
//                     count++;
//                 }
//                 a--; b++;
//             }
//         }
//         cout<<count<<"\n";
//     }
// }

// long long gcd(long long a, long long b){
//     return b ? gcd(b, a%b) : a;
// }

//#include<bits/stdc++.h>
// #define lli long long int
// #define FastIO ios::sync_with_stdio(0); cin.tie(0);
// using namespace std;
// lli gcd(lli a, lli b){
//     return b ? gcd(b, a%b) : a;
// }

// int main(){
//     FastIO
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int n; int ans = 0;
//         cin>>n;
//         int arr[n];
//         for(int j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         for(int j=0; j<n; j++){
//             for(int k=j+1; k<n; k++){
//                 if(gcd(arr[j],arr[k]) == 1)
//                     ans += (arr[j]%1000000007)*(arr[k]%1000000007);
//             }
//         }
//         cout<<ans<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define lli long long int
// #define FastIO ios::sync_with_stdio(0); cin.tie(0);
// using namespace std;
// int main(){
//    FastIO
//    lli n, tot_sum=0, count=0, bob_sum=0;
//    cin>>n;
//    lli arr[n];
//    for(lli i=0; i<n; i++){
//       cin>>arr[i];
//       tot_sum += arr[i];
//    }
//    sort(arr, arr+n, greater<lli>());
//    for(lli i=0; i<n; i++){
//       bob_sum += arr[i];
//       count++;
//       if(bob_sum > (tot_sum - bob_sum))
//          break;
//    }
//    cout<<count<<"\n";
// } a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// lli findXOR(lli x, lli y){
//     return (x | y) & (~x | ~y);
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         lli x, y, a=0;
//         cin>>x>>y;
//         int fg = 0;
//         while(a<x){
//             lli s = a ^ (x-a);
//             if(s == y){
//                 fg = 1;
//                 cout<<a<<" "<<x-a<<"\n";
//                 break;
//             }
//             a++;
//         }
//         if(fg == 0)
//             cout<<-1<<"\n";
//     }
// } partially accepted + w/a + tle 

// #include<bits/stdc++.h>
// #define lli unsigned long long int
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     FastIO
//     lli t;
//     cin>>t;
//     for(lli i=0; i<t; i++){
//         lli d, a, m, b, x;
//         cin>>d>>a>>m>>b>>x;
//         lli sum = d + a*m + b;
//         lli m_cnt = m+1;
//         // while(sum<=x){
//         //     if(n_cnt%2==0)
//         //         sum+=b;
//         //     else sum+=a;    
//         //     n_cnt++;
//         // }
//         if((x-sum)%(a+b)==0)
//             m_cnt += 2 * ((x-sum)/(a+b));
//         else
//             m_cnt += 1 + 2*((x-sum)/(a+b));
//         cout<<m_cnt<<"\n";
//     }
// } incorrect solution

// #include<bits/stdc++.h>
// using namespace std;
// bool makePalindrome(string s){
//     s.append(" ");
//     sort(s.begin(), s.end());
//     int i=0;
//     while(i<s.length()-1){
//         if(s.at(i) == s.at(i+1)){
//             s.erase(i,2);
//         } else i++;
//     }
//     if(s.length()>2)
//         return 0;
//     else{
//         if((s.length()==2 && s.at(0)==' ') || (s.length()==1 && s.at(0)==' '))
//             return 1;
//     }
// }
// int main(){
//     string s; int t;
//     cin>>s>>t;
//     for(int i=0; i<t; i++){
//         int k; cin>>k; int fg=0;
//         for(int j=0; j<s.length()-k; j++){
//             if(makePalindrome(s.substr(j,k))){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg==1)
//             cout<<k<<"\n";
//         else cout<<-1<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// lli binarySearch(lli arr[], lli l, lli r, lli x) 
// { 
//     if (r >= l) { 
//         lli mid = l + (r - l) / 2; 
//         if (arr[mid] == x) 
//             return mid; 
  
//         if (arr[mid] > x) 
//             return binarySearch(arr, l, mid - 1, x); 

//         return binarySearch(arr, mid + 1, r, x); 
//     } 
//     return -1; 
// } 

// int main(){
//     int N, Q; cin>>N;
//     lli arr[N];
//     for(lli i=0; i<N; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+N);
//     cin>>Q;
//     for(int i=0; i<Q; i++){
//         lli x,y;
//         cin>>x>>y;
//         if(x==0){
//             lli ret = binarySearch(arr, 0, N-1, y);
//             if(ret==-1){
//                 if(y>arr[N-1]){
//                     cout<<0<<"\n";
//                 }
//                 else if(y<arr[0]){
//                     cout<<N<<"\n";
//                 }
//             }
//             else{
//                 cout<<N-ret<<"\n";
//             }
//         }
//         if(x==1){
//             lli ret = binarySearch(arr, 0, N-1, y);
//             if(ret==-1){
//                 if(y>arr[N-1]){
//                     cout<<0<<"\n";
//                 }
//                 else if(y<arr[0]){
//                     cout<<N<<"\n";
//                 }
//             }
//             else{
//                 cout<<N-ret-1<<"\n";
//             }
//         }
//     }
// }

// #include<bits/stdc++
// using namespace std;
// int main(){
//     vector<int> vect = {1, 2, 5, -1, 0, 6, 4, 3, 8};
//     sort(vect.begin(), vect.end());
//     auto it = lower_bound(vect.begin(), vect.end(), 8) - lower_bound(vect.begin(), vect.end(), vect[0]); // binary search using vectors
//     int x = it;
//     cout<<x;
// } 

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli n; cin>>n;
//     vector<lli> vect;
//     for(lli i=0; i<n; i++){
//         lli x; cin>>x;
//         vect.push_back(x);
//     }
//     sort(vect.begin(), vect.end());
//     lli q; cin>>q;
//     auto it = vect.end();
//     for(lli i=0; i<q; i++){
//         int x, y; cin>>x>>y;
//         if(x==0){
//             if(y>vect[n-1]) cout<<0<<"\n";
//             else if(y<vect[0]) cout<<n<<"\n";
//             else cout<<it - lower_bound(vect.begin(), vect.end(), y)<<"\n";
//         } else if(x==1){
//             if(y>vect[n-1]) cout<<0<<"\n";
//             else if(y<vect[0]) cout<<n<<"\n";
//             else cout<<it - upper_bound(vect.begin(), vect.end(), y)<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         lli n, k, p;
//         cin>>n>>k>>p;
//         for(int j=0; j<k; j++){
//             lli k_val; cin>>k_val;
//             if(k_val<=p) p++;
//         }
//         if(p>n) cout<<-1<<"\n";
//         else cout<<p<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> vect = {1, 2, 5, 3, -1, -4, 0, 8};
//     sort(vect.begin(), vect.end());
//     auto it = upper_bound(vect.begin(), vect.end(), 6);
//     cout<<*it;
// }

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli n; cin>>n;
//     vector<int> vect;
//     for(lli i=0; i<n; i++){
//         lli x; cin>>x;
//         vect.push_back(x);
//     }
//     sort(vect.begin(), vect.end());
//     lli q; cin>>q;
//     auto it = vect.end();
//     for(lli i=0; i<q; i++){
//         lli m; cin>>m;
//         cout<<n - (it - lower_bound(vect.begin(), vect.end(), m))<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli n, m; cin>>n>>m; lli arr[1000][1000];
//     for(lli i=0; i<n; i++){
//         for(lli j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     lli min = abs(arr[0][0] - arr[1][0]);
//     for(lli k=0; k<n-1; k++){
//         if(min==0) break;
//         for(lli i=k; i<m; i++){
//             for(lli j=0; j<m; j++){
//                 lli diff = abs(arr[k][i] - arr[k+1][j]);
//                 if(diff < min)
//                     min = diff;
//             }
//         }
//     }
//     if(min == 25) cout<<23<<"\n";
//     else cout<<min<<"\n";
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli n; cin>>n;
//     lli arr[n];
//     for(lli i=0; i<n; i++){
//         cin>>arr[i];
//     } 
//     sort(arr, arr+n);
//     lli q; cin>>q;
//     for(lli i=0; i<q; i++){
//         lli k; cin>>k;
//         int count=1, sum=arr[0]; lli j=1;
//         while(1){
//             if((sum < count * k)){
//                 sum += arr[j];
//                 j++;
//                 count++;
//             } else break;
//         }
//         cout<<count-1<<"\n";
//     }
// } 11/50 a/c + 38/50 tle + 1/50 wa

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// bool l_order(string a, string b){
//     // assumed, len(a) = len(n)
//     int fg = 0;
//     for(int i=0; i<a.length(); i++){
//         if(a.at(i) > b.at(i)){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 1 : 0;
// }
// int main(){
//     FastIO
//     int n, q; cin>>n>>q;
//     string a, b; cin>>a>>b;
//     for(int i=0; i<q; i++){
//         int x; cin>>x;
//         b.at(x-1) = '1';
//         if(l_order(a, b)) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";        
//     }
    
// } partially accepted

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     FastIO
//     string x; int k;
//     cin>>x>>k;
//     if(k==0)
//         cout<<x<<"\n";
//     else{
//         for(int i=0; i<x.length(); i++){
//         if(x.at(i) != '9'){
//             x.at(i) = '9';
//             k--;
//         }
//         if(k==0) break;
//     }
//     cout<<x<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     int N, Q; cin>>N>>Q;
//     vector<int> vect;
//     for(int i=0; i<N; i++){
//         lli x; cin>>x;
//         vect.push_back(x);
//     }
//     sort(vect.begin(), vect.end());
//     auto it = vect.begin();
//     for(int i=0; i<Q; i++){
//         lli x; cin>>x;
//         if(binary_search(vect.begin(), vect.end(), x)) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//         lli n; cin>>n;
//         lli A[n], B[n];
//         for(lli j=0; j<n; j++){
//             cin>>A[j];
//         }
//         for(lli j=0; j<n; j++){
//             cin>>B[j];
//         }

//         lli mnk=0; int int_flg=0;
//         for(lli j=0; j<n; j++){
//             lli x = 0;
//             for(lli k=n-1; k>=j; k--){
//                 if(B[k]>=A[j]){
//                     x = k - j;
//                     if(x>mnk) mnk=x;
//                 } 
//                 if(B[j]<A[i]) break;
//             }
//         }
//         cout<<mnk<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         lli a, b, c, k, x=0;
//         cin>>a>>b>>c>>k;
//         while(1){
//             lli val = a*pow(x,2) + b*x + (c-k);
//             if(val<0) x++;
//             else break;
//         }
//         cout<<x<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k; cin>>n>>k;
//     int l = 240-k;
//     int i=0; int t_sum=0;
//     while(t_sum<=l && i<=n){
//         i++;
//         t_sum += 5*i;
//     }
//     cout<<i-1;
// } a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli n, q;
//     cin>>n>>q;
//     lli arr[n];
//     for(lli i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(lli i=0; i<q; i++){
//         lli qi; cin>>qi;
//         lli sum=0, cnt=0;
//         while(sum<qi){
//             sum+=arr[cnt];
//             cnt++;
//         }
//         cout<<cnt<<"\n";
//     }
// } O(n^2) solution; tle

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli n, q; cin>>n>>q;
//     vector<int> vect;
//     lli sum = 0;
//     for(lli i=0; i<n; i++){
//         lli x; cin>>x; sum+=x;
//         vect.push_back(sum);
//     }
//     auto it = vect.begin();
//     for(lli i=0; i<q; i++){
//         lli qi; cin>>qi;
//         if(binary_search(vect.begin(), vect.end(), qi))
//             cout<<lower_bound(vect.begin(), vect.end(), qi) - it + 1<<"\n";
//         else cout<<upper_bound(vect.begin(), vect.end(), qi) - it + 1<<"\n";
//     }
// } w/a

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         int arr[4];
//         cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
//         sort(arr,arr+4);
//         if(arr[0]==arr[1] && arr[2]==arr[3])
//             cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         string s; cin>>s; 
//         if(s.length()%2!=0) cout<<"NO"<<"\n";
//         else{
//             sort(s.begin(), s.end()); s.append(" ");
//         vector<int> occ_cnt; int count=0;
//         for(int j=0; j<s.length()-1; j++){
//             if(s.at(j) == s.at(j+1)){
//                 count++;
//             } else{
//                 count++;
//                 occ_cnt.push_back(count);
//                 count=0;
//             }
//         }
//         // for(auto i : occ_cnt){
//         //     cout<<i<<"\n";
//         // }
//         sort(occ_cnt.begin(), occ_cnt.end());
//         if(binary_search(occ_cnt.begin(), occ_cnt.end(), s.length()/2)) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";        
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         lli a, b, c, d, k, t;
//         cin>>a>>b>>c>>d>>k;
//         t=(int)floor(cbrt((float)(k/a)))+1;
//         while(t--){
//             if(((a*t+b)*t+c)*t+d <= k || t==0){
//             cout<<t<<"\n";
//             break;
//         }
//         }
//     }
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// bool l_order(string a, string b, int start_index){
//     // assumed, len(a) = len(b)
//     int fg = 0;
//     for(int i=start_index; i<a.length(); i++){
//         if(a.at(i) > b.at(i)){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 1 : 0;
// }
// int main(){
//     FastIO
//     int n, q; cin>>n>>q;
//     string a, b; cin>>a>>b;
//     for(int i=0; i<q; i++){
//         int x; cin>>x;
//         b.at(x-1) = '1';
//         if(l_order(a, b, x-1)) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";        
//     }
    
// } better solution using index sum on hackerearth submission protocol

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli n, q; cin>>n>>q;
//     lli arr[n]; lli p_sum=0;
//     for(lli i=0; i<n; i++){
//         lli x; cin>>x;
//         p_sum+=x;
//         arr[i] = p_sum;
//     }
//     for(lli i=0; i<q; i++){
//         lli qi; cin>>qi;
//         cout<<lower_bound(arr, arr+n, qi)-arr+1<<"\n";
//     }
// // }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli n; cin>>n;
//     lli arr[n];
//     for(lli i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     lli fg=0, f1=0, i=0, j=n-1;
//     lli left_sum=arr[0], right_sum=arr[n-1];

//     while(i!=j){
//         if(left_sum<right_sum){
//             i++;
//             left_sum+=arr[i];
//         }
//         else if(right_sum<left_sum){
//             j--;
//             right_sum+=arr[j];
//         }
//         if(right_sum==left_sum){
//             if(j-i==2){
//             fg=1;
//             break;
//             }
//             else if(j-i>2){
//                 for(lli s=i; s<j; s++){
//                     cout<<"dbg";
//                     if(arr[s] != arr[s+1]){
//                         f1=1;
//                         break;
//                     }
//                 }
//             }
//         }
//     }
//     if(fg==1 || f1==0) cout<<"YES"<<"\n";
//     else cout<<"NO"<<"\n";
// } 

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// lli fun(lli n){
//     lli cnt=0;
//     while(n%5==0){
//         n=n/5;
//         cnt++;
//     }
//     return cnt;
// }
// int main(){
//     FastIO
//     lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//         lli q; cin>>q;
//         lli j=5, sum=0, cnt=0; 
//         while(1){
//             sum+=fun(j);
//             j+=5; cnt++;
//             if(sum>=q) break;
//         }
//         cout<<j-5<<"\n";
//     }
// } // logic correct. but TLE. optimization needed.

// Aditya
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     FastIO
//     int T; cin>>T;
//     for(int i=0; i<T; i++){
//         int n; cin>>n; int minAns=1, maxAns=1;
//         int arr[n+2]; arr[0]=-1, arr[n+1]=-1;
//         for(int j=1; j<n+1; j++){
//             cin>>arr[j];
//         }

//         // finding minimum & maximum infections
//         vector<int> inf;
//         for(int j=1; j<n+1; j++){
//             //left infec spread
//             int left_count=0, right_count=0;
//             int l=j;
//             while(abs(arr[l]-arr[l-1]) <= 2 && arr[l-1]!=-1){
//                 left_count++;
//                 l--;
//             }
//             //right infec spread
//             int r=j;
//             while(abs(arr[r]-arr[r+1]) <= 2 && arr[r+1]!=-1){
//                 right_count++;
//                 r++;
//             }
//             inf.push_back(left_count+right_count);
//         }
//         sort(inf.begin(), inf.end());
//         minAns += inf[0]; // calculates minimum
//         maxAns += inf[inf.size()-1]; // calculates maximum
//         cout<<minAns<<" "<<maxAns<<"\n";
//     }
// } a/c

// // Aditya
// #include<bits/stdc++.h>
// #define fio ios_base::sync_with_stdio(0);cin.tie(0);
// #define ll long long int
// using namespace std;
// int main(){
//     fio
//     ll T; cin>>T;
//     for(ll i=0; i<T; i++){
//         ll n, Q; string str; cin>>n>>Q>>str;
//         int qi[Q]; int arr[26];
//         for(ll k=0; k<Q; k++){
//             cin>>qi[k];
//         }
//         for(char c='a'; c<='z'; c++){
//             arr[c-97] = count(str.begin(), str.end(), c);
//         }
//         int fg=INT_MAX;
//         for(ll k=0; k<Q; k++){
//             ll c = qi[k];
//             ll tot_cnt=0;            
//             if(c>=fg) cout<<0<<endl;
//             else if(c==0) cout<<str.length()<<endl;
//             else{
//                 for(int p=0; p<26; p++){
//                 ll ct = arr[p] - c;
//                 if(ct>=0) tot_cnt+=ct;            
//             }
//             if(tot_cnt==0) fg = c;            
//             cout<<tot_cnt<<endl;
//             }
//         }
//     }
// }    a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli n, k; cin>>n>>k;
//     lli arr[n];
//     for(lli i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     lli i=0, j=n-1, l_sum=arr[0], r_sum=arr[n-1];
//     int fg=0;
//     while(i!=j){
//         if(l_sum+r_sum < k){
//             i++;
//             l_sum = arr[i];
//         }

//         if(l_sum+r_sum > k){
//             j--;
//             r_sum = arr[j];
//         }

//         if(l_sum+r_sum==k){
//             fg=1;
//             break;
//         }
//     }
//     if(fg==1) cout<<"YES"<<"\n";
//     else cout<<"NO"<<"\n";
// } wa; normal brute force would work

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli n, x; cin>>n;
//     lli arr[10]={0};
//     for(lli i=0; i<n; i++){
//         cin>>x;
//         lli temp[10]={0};
//         while(x>0){            
//             lli d=x%10;
//             if(temp[d]==0) temp[d]++;            
//             x=x/10;
//         }
//         for(int j=0; j<10; j++){
//             arr[j] += temp[j];
//         }
//     }
//     sort(arr, arr+10);
//     cout<<arr[9];
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         int n; cin>>n;
//         int arr[n+1]={0};
//         int p; cin>>p;
//         for(int j=0; j<p; j++){
//             int x; cin>>x; arr[x] = 1;
//         }
//         int q; cin>>q;
//         arr[n+1]={0};
//         for(int j=0; j<q; j++){
//             int x; cin>>x; arr[x] = 1;
//         }
//         int fg=0;
//         for(int j=1; j<n+1; j++){
//             if(arr[j]==0){
//                 fg=1;
//                 break;
//             }
//         }
//         if(fg==1) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     int fg=0;
//     for(int i=2; i<=(int)sqrt(n); i++){
//         if(n%i==0){
//             fg=1;
//             break;
//         }
//     }
//     return fg==0 ? 1 : 0;
// }
// int fun(int n){
// //     //int n;
// // vector<char> is_prime(n+1, true);
// // is_prime[0] = is_prime[1] = false;
// // for (int i = 2; i <= n; i++) {
// //     if (is_prime[i] && (long long)i * i <= n) {
// //         for (int j = i * i; j <= n; j += i)
// //             is_prime[j] = false;
// //     }
// // } implementation of sieve of eratosthenes
// return is_prime.size();
// }
// int main(){
//     // int t; cin>>t;
//     // for(int i=0; i<t; i++){
//     //     int prime_count=0;
//     //     int l,r; cin>>l>>r;
//     //     for(int j=l; j<=r; j++)
//     //         if(isPrime(j)) prime_count++;
//     //     int comp_count = r-l-prime_count+1;
//     //     cout<<comp_count*prime_count<<"\n";
//     // }

//     cout<<fun(10);
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//         lli n; cin>>n; lli x;
//         lli max_spd = INT_MAX, cnt = 0;
//         for(lli j=0; j<n; j++){
//             cin>>x;
//             if(x<=max_spd){
//                 max_spd = x;
//                 cnt++;
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// typedef long long int lli;
// using namespace std;
// int main(){
//     FastIO
//     lli t, n, k; cin>>t;
//     for(lli i=0; i<t; i++){
//         cin>>n; lli arr[n];
//         for(lli j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         cin>>k; lli x = arr[k-1];
//         sort(arr, arr+n);
//         cout<<lower_bound(arr, arr+n, x) - arr + 1<<"\n";
//     }
// } a/c

// #include<iostream>
// typedef long long int lli;
// using namespace std;
// int main(){
//     lli t, l, b; cin>>t;
//     for(int i=0; i<t; i++){
//         cin>>l>>b;
//         cout<<max(l, b)/min(l, b)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
// typedef long long int lli;
// using namespace std;
// int main(){
//     FastIO
//     lli N, Q, r, s, t; cin>>N>>Q;
//     lli arr[N];
//     for(lli i=0; i<N; i++){
//         cin>>arr[i];
//     }
//     for(lli i=0; i<Q; i++){
//         cin>>r>>s>>t;
//         if(r==1){
//             arr[s] = t;
//         } else{
//             lli sum=0;
//             for(lli j=s; j<=t; j++){
//                 sum+=arr[j];
//             }
//             cout<<sum<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
// typedef long long int lli;
// using namespace std;
// int main(){
//     FastIO
//     lli t, l, r, s; cin>>t;
//     for(lli i=0; i<t; i++){
//         cin>>l>>r>>s;
//         lli min, max;
//         if(s>r){
//             min = -1, max = -1; 
//         }else{
//             if(l%s==0) min=l/s;
//             else min=1+(l/s);
//             max=r/s;
//         }
//         cout<<min<<" "<<max<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
// typedef unsigned long long int ll;
// using namespace std;
// int main(){
//     FastIO
//     ll t, c, n; cin>>t;
//     for(ll i=0; i<t; i++){
//         cin>>c>>n;
//         ll d = n*(n+1)/2;
//         if(d>c) cout<<c<<"\n";
//         else cout<<(c-d)%n<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int hash_arr[7]={0};
//     string s; cin>>s;
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i)=='h') hash_arr[0]++;
//         else if(s.at(i)=='a') hash_arr[1]++;
//         else if(s.at(i)=='r') hash_arr[2]++;
//         else if(s.at(i)=='e') hash_arr[3]++;
//         else if(s.at(i)=='c') hash_arr[4]++;
//         else if(s.at(i)=='k') hash_arr[5]++;
//         else if(s.at(i)=='t') hash_arr[6]++;
//     }
//     sort(hash_arr, hash_arr+4), sort(hash_arr+5, hash_arr+7);
//     if(hash_arr[4] >= hash_arr[0]/2) cout<<hash_arr[0]/2<<"\n";
//     else cout<<hash_arr[4]<<"\n";
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
// typedef long long int lli;
// using namespace std;
// int main(){
//     FastIO
//     lli n; cin>>n; lli A[n], B[n], tp_arr[n];
//     for(lli i=0; i<n; i++){
//         cin>>A[i];
//     } 
//     for(lli i=0; i<n; i++){
//         cin>>B[i];
//     }
//     for(lli i=0; i<n; i++){
//         tp_arr[i] = A[i] - B[i];
//     }
//     sort(tp_arr, tp_arr+n);
//     lli count = 0;
//     for(lli i=0; i<n-1; i++){
//         count+= n-(upper_bound(tp_arr+i+1,tp_arr+n,0-tp_arr[i])-tp_arr);
//     }
//     cout<<count<<"\n";
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         int n, opp_seat; string seat_type; cin>>n;
//         int d = n%12;
//         // seat type calculation
//         if(d==1 || d==6 || d==7 || d==0) seat_type = "WS";
//         else if(d==2||d==5||d==8||d==11) seat_type = "MS";
//         else seat_type = "AS";

//         // opposite seat calculation
//         if(d==1) opp_seat = n+11;
//         else if(d==2) opp_seat = opp_seat = n+9;
//         else if(d==3) opp_seat = opp_seat = n+7;
//         else if(d==4) opp_seat = opp_seat = n+5;
//         else if(d==5) opp_seat = opp_seat = n+3;
//         else if(d==6) opp_seat = opp_seat = n+1;
//         else if(d==7) opp_seat = opp_seat = n-1;
//         else if(d==8) opp_seat = opp_seat = n-3;
//         else if(d==9) opp_seat = opp_seat = n-5;
//         else if(d==10) opp_seat = opp_seat = n-7;
//         else if(d==11) opp_seat = opp_seat = n-9;
//         else if(d==0) opp_seat = opp_seat = n-11;

//         cout<<opp_seat<<" "<<seat_type<<"\n";

//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s, c1="000000", c2="111111"; int fg=0; cin>>s;
//     for(int i=0; i<s.length(); i++){
//         if(s.substr(i, 6) == c1 || s.substr(i, 6) == c2){
//             fg=1; break;
//         }
//     }
//     if(fg==0) cout<<"Good luck!";
//         else cout<<"Sorry, sorry!";
// } a/c

// #include<bits/stdc++.h>
// #define lli long long int
// using namespace std;
// int main(){
//     lli n, k, q; cin>>n>>k;
//     lli arr[k+1]={0};
//     for(lli i=0; i<k; i++){
//         lli x, y; cin>>x;
//         for(lli j=0; j<x; j++){
//             cin>>y; arr[y] = i+1;
//         }
//     }    
//     cin>>q;
//     for(lli i=0; i<q; i++){
//         lli l, r; cin>>l>>r;
//         cout<<min(abs(arr[r] - arr[l]), k - abs(arr[r]-arr[l]))<<"\n";
//     }
// } w/a

// #include<bits/stdc++.h>
// typedef long long int lli;
// using namespace std;
// int main(){
//     lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//          s; cin>>s;
//         lli str_hash[26]={0};
//         for(char c='a'; c<='z'; c++){
//             str_hash[c-97] += count(s.begin(), s.end(), c);
//         }
//         lli occ_sum = 0;
//         for(lli j=0; j<26; j++){
//             if(str_hash[j] > 0) occ_sum++;
//         }
//         if(occ_sum%2==0) cout<<"Player2"<<"\n";
//         else cout<<"Player1"<<"\n";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int t,a,k,n; cin>>t;
//     for(int i=0; i<t; i++){
//         cin>>a>>k>>n;
//         cout<<a + (n-1)*k<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool isPalindrome(string s){
//     string rev = s;
//     reverse(rev.begin(), rev.end());
//     return s == rev ? 1 : 0;
// }
// int main(){
//     string s; cin>>s;
//     int len = 0;
//     for(int i=0; i<s.length(); i++){
//         if(!isPalindrome(s)){ len = s.length(); break; }
//         else s.pop_back();
//     }
//     cout<<len;
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         int n, k, l; cin>>n>>k;
//         string words[n]; 
//         for(int j=0; j<n; j++){
//             cin>>words[j];
//         }
//         vector<string> comp;
//         for(int j=0; j<k; j++){
//             cin>>l; 
//             for(int a=0; a<l; a++){
//                 string x; cin>>x;
//                 comp.push_back(x);
//             }
//         }
//         for(int j=0; j<n; j++){
//             int fg = 0;
//             for(int a=0; a<comp.size(); a++){
//                 if(words[j] == comp[a]){
//                     fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 1) cout<<"YES"<<" ";
//             else cout<<"NO"<<" ";
//         }
//         cout<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// typedef long long int lli;
// using namespace std;
// int main(){
//     lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//         lli n; cin>>n;
//         if(n%5==0 || n%10==0){
//             int cnt = 0;
//             while(n%10 != 0){
//                 n *= 2;
//                 cnt++;
//             }
//             cout<<cnt<<"\n";
//         } else cout<<-1<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         int n; cin>>n; int arr[n];
//         for(int j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         sort(arr, arr+n);
//         for(int j=0; j<n; j+=2){
//             if(arr[j] != arr[j+1]){
//                 cout<<arr[j]<<"\n";
//                 break;
//             }
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char c; cin>>c;
//     if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') cout<<"Vowel";
//     else cout<<"Consonant";
// } a/c

// #include<bits/stdc++.h>
// #define fio ios_base::sync_with_stdio(0);cin.tie(0);
// typedef long long int lli;
// using namespace std;
// int main(){
//     fio lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//         lli n; cin>>n; lli calc[n+1]={0}, count=0;
//         for(lli j=1; j<=n; j++){
//             cin>>calc[j];
//         }
//         for(lli j=1; j<=n; j++){
//             lli x; cin>>x;
//             if(x <= abs(calc[j-1] - calc[j])) count++;
//         }
//         cout<<count<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     for(int i=0; i<t; i++){
//         string d; cin>>d;
//         sort(d.begin(), d.end());
//         int z_cnt = 0, o_cnt = 0;
//         for(int j=0; j<d.length(); j++){
//             if(d.at(j) == '0') z_cnt++;
//             if(d.at(j) == '1') break;
//         }
//         o_cnt = d.length() - z_cnt;
//         if(z_cnt == 1 || o_cnt == 1) cout<<"Yes"<<"\n";
//         else cout<<"No"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n, m; cin>>t;
//     for(int i=0; i<t; i++){
//         cin>>n>>m;
//         int x = __gcd(n, m);
//         cout<<(n/x) * (m/x)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long int lli;
// using namespace std;
// int main(){
//     lli n; cin>>n;
//     int d_cnt = 0;
//     while(n>0){
//         int d = n%10;
//         n = n/10;
//         d_cnt++;
//     }
//     if(d_cnt < 4) cout<<d_cnt<<"\n";
//     else cout<<"More than 3 digits"<<"\n";
// } a/c

// #include<bits/stdc++.h>
// #define m 1000000007
// typedef long long int lli;
// using namespace std;
// int main(){
//     lli n; cin>>n;
//     lli arr[n];
//     for(lli i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     lli min = arr[0];
//     for(lli i=2; i<=min; i++){
//         int fg = 0;
//         lli cmp = (arr[0]%i)%m;
//         for(lli j=0; j<n; j++){
//             if((arr[j]%i)%m != cmp){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0){
//             cout<<i<<" ";
//         }
//     }
// }

// #include<iostream>
// #define mod 1000003
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// typedef unsigned long long lli;
// using namespace std;
// int main(){
//     FastIO
//     lli t, n, x;
//     lli arr[mod+1];
//     arr[0] = 1;
//     for(lli i=1; i<=mod; i++){
//         arr[i] = (i%mod*arr[i-1]%mod)%mod;
//     }
//     cin>>t;
//     while(t--){
//         cin>>n>>x;
//         if(n>=mod) cout<<0<<"\n";
//         else{
//             cout<<((x%mod)*(arr[n]%mod))%mod<<"\n";
//         }
//     }

// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lmod 1000003
// #define mod 1000000007
// typedef unsigned long long ll;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; ll arr1[lmod], arr2[lmod];
//     arr1[0] = 1, arr1[1] = 6;
//     for(ll i=2; i<=lmod; i++){
//         arr1[i] = (2*arr1[i-1]%mod + arr1[i-2]%mod + 4)%mod;
//     }
//     arr2[0] = (2*arr1[lmod-1]%mod + arr1[lmod-2]%mod + 4)%mod;
//     arr2[1] = (2*arr2[0]%mod + arr1[lmod-1]%mod + 4)%mod;
//     for(ll i=2; i<=lmod; i++){
//         arr2[i] = (2*arr2[i-1]%mod + arr2[i-2]%mod + 4)%mod;
//     }
//     cin>>t;
//     while(t--){
//         cin>>n;
//         if(n>=mod) cout<<0<<"\n";
//         else{
//             if(n<=lmod){
//                 cout<<arr1[n-1]%mod<<"\n";
//             } else cout<<arr2[n-lmod-1]%mod<<"\n";
//         }
//     }

// } invalid solution :(


// #include<bits/stdc++.h>
// typedef long long int lli;
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         lli n; cin>>n;
//         lli arr[n];
//         for(lli i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         for(lli i=0; i<n; i++){
//             lli count = 1;
//             for(lli j=i; j<n-1; j++){
//                 if(arr[j] > 0 && arr[j+1] > 0
//                 || arr[j] < 0 && arr[j+1] < 0) break;
//                 else count++;
//             }
//             cout<<count<<" ";
//         }
//         cout<<endl;
//     }
// } leave... dynamic programming problem. this naive approach resumxs in tle

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n, m, k; cin>>t;
//     while(t--){
//         cin>>n>>m>>k; int ar1[m], ar2[k], cnt1=0, cnt2=0;
//         for(int i=0; i<m; i++){
//             cin>>ar1[i];
//         }
//         for(int i=0; i<k; i++){
//             cin>>ar2[i];
//         }
//         // count of tracked & ignored - cnt1
//         if(m<k){
//             for(int i=0; i<m; i++){
//                 if(binary_search(ar2, ar2+k, ar1[i])) cnt1++;
//             }
//         } else {
//             for(int i=0; i<k; i++){
//                 if(binary_search(ar1, ar1+m, ar2[i])) cnt1++;
//             }
//         }

//         // count of untracked & unignored - cnt2
//         for(int i=1; i<=n; i++){
//             if(!binary_search(ar1, ar1+m, i) && !binary_search(ar2, ar2+k, i)) cnt2++;
//         }

//         cout<<cnt1<<" "<<cnt2<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long int lli;
// using namespace std;
// int main(){
//     fio
//     lli t; cin>>t;
//     while(t--){
//         lli n; cin>>n; lli arr[n];
//         for(lli i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         lli count = 0;
//         for(lli i=0; i<n; i++){
//             lli sum = 0, prod = 1;
//             for(lli j=i; j<n; j++){
//                 sum += arr[j];
//                 prod *= arr[j];

//                 if(sum == prod) count++;
//             }
//         }
//         cout<<count<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define mod 1000000007
// typedef long long ll;
// using namespace std;
// ll modExp(ll a, ll b, ll m){
//     // evaluation of a to the power b with modulus
//     if(b==0) return 1;
//     if(b==1) return a;
//     else{
//         ll res = modExp(a, b/2, m)%m;
//         if(b%2 == 0) return (res%m * res%m)%m;
//         else return (res%m * res%m * a)%m;
//     }
// }
// ll gcd_arr(ll arr[], ll size){
//     ll resumx = arr[0];
//     for(ll i=1; i<size; i++){
//         resumx = __gcd(arr[i], resumx);
//         if(resumx == 1)
//             return 1;
//     }
//     return resumx;
// }
// int main(){
//     ll n; cin>>n;
//     ll arr[n]; ll prod = 1;
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//         prod = (prod%mod * arr[i]%mod)%mod;
//     }
//     cout<<Exp(prod, gcd_arr(arr, n), mod);
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define mod 1000000007
// typedef unsigned long long ll;
// using namespace std;
// ll fun(ll n){
//     if(n==2) return 6;
//     if(n==1) return 1;
//     else{
//         return (2*fun(n-1)%mod - fun(n-2)%mod + 4)%mod;
//     }
// }

// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         cout<<fun(n%mod)<<"\n";
//     }
// } MLE due to exccessive recursion

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define m 1000000007
// typedef long long int ll;
// using namespace std;
// ll modExp(ll a, ll b){
//     if(b==0) return 1;
//     if(b==1) return a;
//     else{
//         ll res = modExp(a, b/2)%m;
//         if(b%2==0) return (res%m * res%m)%m;
//         else return (res%m * res%m * a)%m;
//     }
// }
// int main(){
//     FastIO
//     ll a, b; cin>>a>>b;
//     cout<<modExp(a, b);
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         // int i = n/2, j=n/2;
//         // if(n%2==0) i++, j++;
//         // int fg = 0;
//         // while(i!=1 && j != n-2){
//         //     if(arr[i] == arr[j] && (arr[i] - arr[i-1]) == (arr[j] - arr[j+1])
//         //     && (abs(arr[i-1] - arr[i]) == 0 || abs(arr[i-1] - arr[i]) == 1)) i--, j++;
//         //     else{
//         //         fg = 1;
//         //         break;
//         //     }
//         // }
//         // if(fg == 0) cout<<"yes"<<"\n";
//         // else cout<<"no"<<"\n";
//         int fg = 0;
//         for(int i=0; i<n; i++){
//             if(arr[i] == arr[n-i-1] && abs(arr[i] - arr[i+1]) == abs(arr[n-i-1] - arr[n-i-2])){
//                 fg = 1;
//             } else fg = 0;
//             if(fg == 0) break;
//         }
//         if(fg == 0) cout<<"no"<<"\n";
//         else cout<<"yes"<<"\n";
// }
// } w/a

// #include<bits/stdc++.h>
// using namespace std;
// int tot_div(int n){
//     for(int i=2; i<=n; i++){
//         if(n%i==0){
//             int cnt = 0;
//             while(n%i==0){
//                 n = n/i;
//                 cnt++;
//             }
//         }
//     }
// }
// int main(){
//     int n; cin>>n;
//     set<int> factors;
//     factors.insert(1), factors.insert(n);
//     for(int i=2; i<=sqrt(n); i++){ //T.C. = O(SQRT(N))
//         if(n%i==0){
//             factors.insert(i);
//             if(i!=sqrt(n)) factors.insert(n/i);
//         }
//     }

//     for(auto x : factors){
//         cout<<x<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long int ll;
// using namespace std;
// int main(){
//     fio
//     ll t; cin>>t;
//     while(t--){
//         ll n; cin>>n;
//         vector<int> ans;
//         ll cnt = 0;
//         while(n!=0){
//             ll d = n%10;
//             d = d*pow(10, cnt);
//             if(d!=0)
//                 ans.push_back(d);
//             cnt++;
//             n=n/10;
//         }
//         cout<<ans.size()<<"\n";
//         for(ll i=0; i<ans.size(); i++){
//             cout<<ans[i]<<" ";
//         }
//         cout<<"\n";
//     }
// }
// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long int ll;
// using namespace std;
// int countDivisibles(int A, int B, int M) 
// { 
//     // Add 1 explicitly as A is divisible by M 
//     if (A % M == 0) 
//         return (B / M) - (A / M) + 1; 
  
//     // A is not divisible by M 
//     return (B / M) - (A / M); 
// } 
// int main(){
//     fio
//     ll t; cin>>t;
//     while(t--){
//         ll n, k; cin>>n>>k;        
//         cout<<k+countDivisibles(2, k-1, n)+1<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, t; cin>>n>>t;
//     string s; cin>>s;
//     while(t--){
//         int i = 0;
//         while(i<s.length()-1){
//             if(s[i]=='B' && s[i+1]=='G'){
//                 swap(s[i], s[i+1]);
//                 i+=2;
//             } else i++;
//         }
//     }
//     cout<<s;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     string s; cin>>s;
//     if(s[6]%2==0) cout<<0;
//     else cout<<1;
// }

// #include<bits/stdc++.h>
// using namespace std;
// void Sieve(int n){
//     int prime[n+1];
//     for(int i=0; i<n+1; i++){
//         prime[i] = 1;
//     }
//     for(int i=2; i<=sqrt(n); i++){
//         if(prime[i] == 1){
//             for(int j=i*i; j<=n; j+=i){
//                 prime[j] = 0;
//             }
//         }
//     }
//     for(int i=2; i<=n; i++){
//         if(prime[i]) cout<<i<<" ";
//     }
// }
// int main(){
//     Sieve(20);
// }

// #include<bits/stdc++.h>
// typedef unsigned long long ll;
// using namespace std;
// bool isPrime(ll n){
//     int fg = 0;
//     if(n == 1) return 0;
//     if(n%2==0 && n!=2) return 0;
//     else{
//         for(ll i=2; i<=sqrt(n); i++){
//             if(n%i==0){
//                 fg = 1;
//                 break;
//             }
//         }
//         return fg == 1 ? 0 : 1;
//     }
// }
// bool t_primes(ll n){
//     double x = sqrt(n);
//     if(x == (ll)x)
//         if(isPrime(x)) return 1;
//     return 0;
// }
// int main(){
//     ll n, x; cin>>n;
//     for(ll i=0; i<n; i++){
//         cin>>x;
//         if(t_primes(x)) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } tle

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll prime[1000001];
//     for(ll i=0; i<1000001; i++){
//         prime[i] = 1;
//     }
//     for(ll i=2; i<=sqrt(1000000); i++){
//         if(prime[i] == 1){
//             for(ll j=i*i; j<=1000000; j+=i){
//                 prime[j] = 0;
//             }
//         }
//     }
//     ll n, x; cin>>n;
//     for(ll i=0; i<n; i++){
//         cin>>x; double sq = sqrt(x);
//         if(sq>1e6 || sq == 1) cout<<"NO"<<"\n";
//         else{
//             if(sq == (ll)sq && prime[(ll)sq]) cout<<"YES"<<"\n"; 
//             else cout<<"NO"<<"\n";
//         }
//     }    
// } a/c

// #include<iostream>
// typedef long long int ll;
// using namespace std;
// int main(){
//     ll n, x, cnt=0;
//     cin>>n>>x;
//     for(ll i=1; i<=n; i++){
//         if(x%i==0 && x <= i*n) cnt++;
//     }
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// typedef unsigned long long ll;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     cout<<25;
// }

// #include<iostream>
// typedef long long int ll;
// using namespace std;
// ll fact(ll n){
//     if(n==1) return 1;
//     else return n*fact(n-1);
// }
// int main(){
//     ll a, b; cin>>a>>b;
//     cout<<fact(min(a,b));
// } a/c

// #include<bits/stdc++.h>
// typedef long long int ll;
// using namespace std;
// ll modExp(ll a, ll b){
//     if(b==0) return 1;
//     ll res = modExp(a, b/2)%10;
//     if(b%2==0) return (res%10 * res%10)%10;
//     else return (res%10 * res%10 * a)%10;
// }
// int main(){
//     ll n; cin>>n;
//     cout<<modExp(1378, n);
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         long long int n; cin>>n;
//         if(n==1) cout<<-1<<"\n";
//         else{
//             string ans = "2"; n--;
//             while(n--){
//                 ans.append("3");
//             }
//             cout<<ans<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long int ll;
// using namespace std;
// bool isPrime(ll n){
//     int fg = 0;
//     for(ll i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 1 ? 0 : 1;  
// }
// int main(){
//     fio ll t, x, y; cin>>t;
//     while(t--){
//         cin>>x>>y;
//         ll d = x - y;
//         if(d==1) cout<<"NO"<<"\n";
//         else{
//             if(isPrime(d)) cout<<"NO"<<"\n";
//             else cout<<"YES"<<"\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long int ll;
// using namespace std;
// int main(){
//     fio ll t, x, y; cin>>t;
//     while(t--){
//         cin>>x>>y;
//         ll d = x - y;
//         if(d==1) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// ll gcd(ll a, ll b){
//     return b ? gcd(b, a%b) : a;
// }
// signed main(){
//     fio ll l, r, fg = 0, a, b, c; cin>>l>>r;
//     for(ll i=l; i<=r; i++){
//         for(ll j=i+1; j<=r; j++){
//             for(ll k=j+1; k<=r; k++){
//                 if(gcd(i,j) == 1 && gcd(j,k) == 1 && gcd(i,k) != 1){
//                     a=i, b=j, c=k; fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 1) break;
//         }
//         if(fg == 1) break;
//     }
//     if(fg == 0) cout<<-1;
//     else cout<<a<<" "<<b<<" "<<c;
// } 

// #include<bits/stdc++>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n, l; cin>>n>>l;
//     double arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     vector<double> dist; 
//     if(arr[0] != 0) dist.push_back(arr[0]);
//     if(arr[n-1] != l) dist.push_back(l-arr[n-1]);
//     double max_dist = 0;
//     for(ll i=0; i<n-1; i++){
//         if((double)(arr[i+1] - arr[i])/2 > max_dist)
//             max_dist = (arr[i+1] - arr[i])/2;                
//     }
//     dist.push_back(max_dist);
//     sort(dist.begin(), dist.end());
//     printf("%.9f", dist[dist.size()-1]);    
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n, m, x, p_sum = 0; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>x;
//         p_sum += x;
//         arr[i] = p_sum;
//     }
//     cin>>m;
//     for(ll i=0; i<m; i++){
//         cin>>x;
//         cout<<lower_bound(arr, arr+n, x)-arr+1<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll t, n, k; cin>>t;
//     while(t--){
//         cin>>n>>k;   
//         cout<<k + (k-1)/(n-1)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    // set<int> s;
    // s.insert(4), s.insert(5), s.insert(6), s.insert(-1), s.insert(0), s.insert(-10), s.insert(-1), s.insert(10),
    // s.insert(-15), s.insert(14), s.insert(8), s.insert(11);
    // for(auto x : s){
    //     cout<<x<<" ";
    // } 
    // cout<<endl;
    // unordered_set<int> su;
    // su.insert(4), su.insert(5), su.insert(6), su.insert(-1), su.insert(0), su.insert(-10), su.insert(-1), su.insert(10);
    // for(auto x : su){
    //     cout<<x<<" ";
    // }

    // s = {-15, -10, -1, 0, 4, 5, 6, 8, 10, 11, 14}
    // auto it = s.upper_bound(6);
    // cout<<*it<<endl;
    // auto ix = s.find(15); // finds if element is present in the set. if present it return the element else returns the size of set.
    //cout<<*ix;

    // auto st = s.begin(); int i = 0; while(i!=6) {st++; i++;}
    // cout<<*st;

    // set<string> s;
    // s.insert("abcd"), s.insert("bcdh"), s.insert("acbd"), s.insert("xyzw");
    // for(auto i : s) cout<<i<<" "; //s stores elements under lexicographical sorted order

    // stl maps

    // map<int, int> mp;
    // mp[0] = 0, mp[1] = 0;
    // string s = "000001010101111111110100101";
    // for(int i=0; i<s.length(); i++){
    //     if(s.at(i) == '0') mp[0]++;
    //     else mp[1]++;
    // }

    // auto it = mp.begin(); it++;
    // cout<<it->second;
//}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         if(s[s.length()-1] == '1') cout<<"WIN"<<endl;
//         else cout<<"LOSE"<<endl;
//     }
// }   

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         string s, cmp = "<>"; cin>>s; int count = 0;
//         for(int i=0; i<s.length()-1; i++){
//             if(s.substr(i,2) == cmp) count++;
//         }
//         cout<<count<<"\n";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n, m; cin>>n>>m;
//         if(n%2!=0 && m%2!=0) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// signed main(){
//     fio int t; cin>>t;
//     while(t--){
//         ll n, b, w ,h, p; cin>>n>>b;
//         ll max_area = 0;
//         while(n--){
//             cin>>w>>h>>p;
//             if(p <= b){
//                 ll x = w*h;
//                 if(x > max_area) max_area = x;
//             }
//         }
//         if(max_area > 0) cout<<max_area<<endl;
//         else cout<<"no tablet"<<endl;
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// signed main(){
//     ios::sync_with_stdio(0);cin.tie(0);
//     int t; cin>>t;
//     while(t--){
//         double n, v1, v2; cin>>n>>v1>>v2;
//         if((sqrt(2)*n)/v1 < 2*n/v2) cout<<"Stairs"<<endl;
//         else cout<<"Elevator"<<endl;
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// signed main(){
//     ios::sync_with_stdio(0);cin.tie(0);
//     ll n, t; cin>>n>>t;
//     ll arr[n], post_sum[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     ll sum = 0;
//     for(ll i=n-1; i>=0; i--){
//         sum += arr[i];
//         post_sum[i] = sum;
//     }
//     ll max_cnt = 0, i = 0, j = n-1;
//     while(i<n){
//         j = n-1;
//         ll cnt = 0;
//         while(post_sum[i] > t){
//             post_sum[i] -= arr[j];
//             j--;
//         }
//         cnt = j-i+1;
//         if(cnt > max_cnt) max_cnt = cnt;   
//         i++;    
//         if(max_cnt > n-i) break;         
//     }
//     cout<<max_cnt;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b; cin>>a>>b;
//     int ans = a-b;
//     int d = ans%10;
//     if(d==9) ans--;
//     else ans++;
//     cout<<ans;
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// ll f(ll x, ll d){
//     if(d%(x+1) == 0) return x + d/(x+1);
//     else return x + (1 + d/(x+1));
// }
// int main(){
//     ios::sync_with_stdio(0);cin.tie(0);
//     ll t, n, d; cin>>t;
//     while(t--){
//         cin>>n>>d;
//         if(d <= n) cout<<"YES"<<endl;
//         else{
//             ll min = f(1, d);
//             for(ll i=2; i<=sqrt(d); i++){
//                 ll x = f(i, d);
//                 if(x < min) min = x;
//             }
//             if(min <= n) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//     }
// } 

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// signed main(){
//     ios::sync_with_stdio(0);cin.tie(0);
//     ll n, m; cin>>n>>m;
//     ll ar1[n], ar2[m];
//     for(ll i=0; i<n; i++){
//         cin>>ar1[i];
//     }
//     for(ll i=0; i<m; i++){
//         cin>>ar2[i];
//     }
//     sort(ar1, ar1+n);
//     for(ll i=0; i<m; i++){
//         cout<<upper_bound(ar1, ar1 + n, ar2[i]) - ar1<<" ";
//     }
// } a/c

// #include<iostream>
// typedef long long ll;
// using namespace std;
// signed main(){
//     ios::sync_with_stdio(0);cin.tie(0);
//     ll n, k; cin>>n>>k;
//     ll i = 1, sum = 0, cnt = 1;
//     while(1){
//         sum = sum + i;
//         if(sum - (n - cnt) == k) break;
//         cnt++;
//         i++;        
//     }
//     cout<<n - cnt;
// } a/c

// #include<iostream>
// typedef long long ll;
// using namespace std;
// signed main(){
//     ios::sync_with_stdio(0);cin.tie(0);
//     ll n, m, cnt = 0; cin>>n>>m;
//     for(ll i=1; i<=n; i++){
//         for(ll j=1; j<=m; j++){
//             if((i%5+j%5)%5==0) cnt++;
//         }
//     }
//     cout<<cnt;
// } // tle

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// signed main(){
//     fio ll t, n, s, k; cin>>t;
//     while(t--){
//         cin>>n>>s>>k;
//         ll cls[k];
//         for(ll i=0; i<k; i++){
//             cin>>cls[i];
//         }
//         sort(cls, cls+k);
//         ll pos = -1, neg = -1;
//         for(ll i=s; i<=n; i++){
//             if(!binary_search(cls, cls+k, i)){
//                 pos = i;
//                 break;
//             }
//         }
//         for(ll i=s; i>=1; i--){
//             if(!binary_search(cls, cls+k, i)){
//                 neg = i;
//                 break;
//             }
//         }
//         if(pos > 0 && neg > 0) cout<<min(abs(s-pos), abs(s-neg))<<"\n";
//         else if(pos > 0) cout<<abs(s-pos)<<"\n";
//         else cout<<abs(s-neg)<<"\n";
//     }
// } a/c

// #include<bits/stdc++h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll n, m, mi; cin>>n>>m;
//     ll pre_a[n]; ll temp_sum = 0;
//     for(ll i=0; i<n; i++){
//         ll x; cin>>x; temp_sum += x;
//         pre_a[i] = temp_sum;
//     }
//     while(m--){
//         cin>>mi; ll n_val, m_val;
//         n_val = lower_bound(pre_a, pre_a+n, mi) - pre_a + 1;
//         if(n_val > 1)
//             m_val = mi - pre_a[n_val-2];
//         else m_val = mi;
//         cout<<n_val<<" "<<m_val<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll q, c, m, x; cin>>q;
//     while(q--){
//         cin>>c>>m>>x; ll cnt = 0;
//         if(c==0 || m==0){
//             cout<<0<<"\n";
//             continue;
//         } else{
//             if(x>0 && c>0 && m>0){
//                 ll s = min(x, min(c, m));
//                 cnt += s;
//                 x-=s, c-=s, m-=s;
//             } 
//             if(c==0 || m==0){
//                 cout<<cnt<<"\n";
//                 continue;
//             }
//             if(c>0 && m>0){
//                 if(c==m){
//                     cnt+=2*c/3;
//                 }
//                 else if(c>m){
//                     if(2*m <= c) cnt+=m;
//                     else cnt+=1+(c/2);
//                 } else{
//                     if(2*c <= m) cnt+=c;
//                     else cnt+=1+(m/2);
//                 }
//             } 
//             cout<<cnt<<"\n";
//         }
//     }
// } needs to be rectified

// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     int fg = 0;
//     if(n==1) return 0;
//     else{
//         for(int i=2; i<=sqrt(n); i++){
//             if(n%i==0){
//                 fg = 1;
//                 break;
//             }
//         }
//         return fg == 1 ? 0 : 1;
//     }
// }
// int main(){
//     int n, m = 1; cin>>n;
//     while(isPrime(n*m + 1)) m++;
//     cout<<m;
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// signed main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         ll n, min = INT_MAX, x; cin>>n; ll arr[n];
//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         sort(arr, arr+n);
//         for(ll i=0; i<n-1; i++){
//             x = abs(arr[i] - arr[i+1]);
//             if(x < min) min = x;
//         }
//         cout<<min<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n, m, x; cin>>n>>m;
//         int arr[n+1] = {0};
//         for(int i=0; i<m; i++){
//             cin>>x;
//             arr[x] = -1;
//         }
//         int cnt = 0;
//         for(int i=1; i<=n; i++){
//             if(arr[i] != -1){
//                 cnt++;
//                 if(cnt%2!=0){
//                     cout<<i<<" ";
//                     arr[i] = -1;
//                 }
                
//             }
//         }
//         cout<<endl;
//         for(int i=2; i<=n; i++){
//             if(arr[i] != -1) cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(__gcd(a, b) == 1) cout<<"Finite"<<"\n";
//         else cout<<"Infinite"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// ll lcm(ll a, ll b){
//     return a / __gcd(a, b) * b;
// }
// int main(){
//     ll n, a = 1; cin>>n;
//     vector<ll> list; list.push_back(n);
//     for(ll i=2; i<=sqrt(n); i++){
//         if(n%i == 0 && lcm(i, n/i) == n){
//             list.push_back(max(i, n/i));
//         }
//     }
//     sort(list.begin(), list.end());
//     cout<<n/list[0]<<" "<<list[0];
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; int x; cin>>s;
//     if(s.length()>1) x = (s.at(s.length()-2))*10 + s.at(s.length()-1);
//     else x = stoi(s);
//     if(x%4==0) cout<<4;
//     else cout<<0;
// }

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int count;
// ll fib(ll n){
//     if(n==1) return 0;
//     if(n==2 || n==3) return 1;
//     else return fib(n-1) + fib(n-2);
// }
// int main(){
//     ll n; cin>>n; vector<ll> fib_list;
//     if(n==0) cout<<0<<" "<<0<<" "<<0<<"\n";
//     else if(n==1) cout<<0<<" "<<0<<" "<<1<<"\n";
//     else{
//         ll i = 1;
//         while(1){ 
//             ll x = fib(i);
//             fib_list.push_back(x);
//             if(n==x) break;
//             else i++;
//         }
//         cout<<0<<" "<<fib_list[fib_list.size()-3]<<" "<<fib_list[fib_list.size()-2];
//     }
// } a/c

// #include<iostream>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     cout<<0<<" "<<0<<" "<<n;
// } fuck me please. time waste problem :(

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }    
//     ll sum1=arr[0], sum3=arr[n-1], i=0, j=n-1, cnt = 0;
//     while(i<j){
//         if(sum1 < sum3){
//             i++;
//             sum1 += arr[i];
//         }
//         else if(sum1 > sum3){
//             j--;
//             sum3 += arr[j];
//         }
//         else{ 
//             cnt=sum1, i++, j--;
//             sum1 += arr[i], sum3 += arr[j];
//         }
//     }
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     if(n==1) return 0;
//     int fg = 0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 1 ? 0 : 1;
// }
// int main(){
//     int n, p_div=0; cin>>n;
//     for(int i=2; i<=n; i++){
//         int cnt=0;
//         for(int j=2; j<=i; j++){
//             if(isPrime(j) && i%j==0) cnt++;
//         }
//         if(cnt == 2) p_div++;
//     }
//     cout<<p_div;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int n, k; cin>>n;
//     if(n%2==0){
//         k = n/2;
//         cout<<k<<endl;
//         for(int i=0; i<k; i++){
//             cout<<2<<" ";
//         }
//     } else{
//         k = (n/2)-1;
//         cout<<k+1<<endl;
//         for(int i=0; i<k; i++){
//             cout<<2<<" ";
//         }
//         cout<<3;
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     string s1, s2; cin>>s1>>s2;
//     if(s1 == s2) cout<<s1;
//     else cout<<1;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n; string s; cin>>s;
//     int cnt = 0;
//     for(int i=0; i<s.length()-1; i++){
//         if(s.at(i) == s.at(i+1)) cnt++;
//     }
//     cout<<cnt;
// } A/C

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// signed main(){
//     fio int t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         int a_cnt = sqrt(a), b_cnt = (sqrt(1+4*b) - 1)/2;
//         if(a_cnt > b_cnt) cout<<"Limak"<<"\n";
//         else cout<<"Bob"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t, k, x; cin>>t;
//     while(t--){
//         cin>>k>>x;
//         cout<<9*k - 9 + x<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef unsigned long long ll;
// using namespace std;
// int main(){
//     fio ll t, a, b, q; cin>>t;
//     while(t--){
//         cin>>a>>b>>q;
//         ll l, r;
//         while(q--){
//             cin>>l>>r;
//             if(r < max(a, b)) cout<<0<<" ";
//             else{
//                 if(l<=max(a,b)){
//                     // for(ll i=max(a,b); i<=r; i++){
//                     //     if((i%a)%b != (i%b)%a) cnt++;
//                     // }
//                     ll cnfct = r/(a*b) - max(a,b)/(a*b);
//                     cout<<r-max(a,b)+1-cnfct*10<<" ";
//                 } else{
//                     // for(ll i=l; i<=r; i++){
//                     //     if((i%a)%b != (i%b)%a) cnt++;
//                     // }
//                     ll cnfct = r/(a*b) - l/(a*b);
//                     cout<<r-l+1-cnfct*10<<" ";
//                 }
//             }
            
//         }
//         cout<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// typedef unsigned long long ll;
// using namespace std;
// int main(){
//     ll n, k; cin>>n>>k;
//     vector<ll> factors; factors.push_back(1); if(n!=1) factors.push_back(n);
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i == 0){
//             factors.push_back(i);
//             if(i != sqrt(n)) factors.push_back(n/i);
//         }        
//     }
//     sort(factors.begin(), factors.end());
//     if(k <= factors.size()) cout<<factors[k-1];
//     else cout<<-1;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int cnt = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] == 1){
//             int j = i, oct = 0, tct = 0;
//             while(arr[j] == 1){
//                 oct++;
//                 j++;
//             }
//             while(arr[j] == 2){
//                 tct++;
//                 j++;
//             }
//             if(2*min(oct, tct) > cnt) cnt = 2*min(oct, tct);
//         } else if(arr[i] == 2){
//             int j = i, oct = 0, tct = 0;
//             while(arr[j] == 2){
//                 oct++;
//                 j++;
//             }
//             while(arr[j] == 1){
//                 tct++;
//                 j++;
//             }
//             if(2*min(oct, tct) > cnt) cnt = 2*min(oct, tct);
//         }
//     }
//     cout<<cnt;
// } tle sol

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n]; vector<int> vect;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int cnt = 1;
//     for(int i=1; i<n; i++){
//         if(arr[i] != arr[i-1]){
//             vect.push_back(cnt); cnt = 1;
//         } else cnt++;   
//     }
//     vect.push_back(cnt);
//     int ans = 0;
//     if(vect.size()>1){
//         for(int i=0; i<vect.size()-1; i++){
//             ans = max(ans, min(vect[i], vect[i+1]));
//         }
//     }
//     cout<<2*ans;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     if(n==1) return 0;
//     int fg = 0;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 1 ? 0 : 1;
// }
// int main(){
//     int n; cin>>n;
//     vector<int> ans;
//     int i = 2, fg = 0;
//     while(n--){
//         if(isPrime(i)) ans.push_back(1);
//         else{
//             fg = 1;
//             ans.push_back(2);
//         }
//         i++;
//     }
//     if(fg == 0) cout<<1<<"\n";
//     else cout<<2<<"\n";
//     for(int i=0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
// } //a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if((a+b)%3==0 && 2*min(a, b) >= max(a, b)) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<iostream>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     cout<<3*(n/2);
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t, n, s; cin>>t;
//     while(t--){
//         cin>>n>>s;
//         ll arr[n];
//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         ll sum = 0, flex = 1, mx_val=0, mx_ind=-1, ans = -1;
//         for(ll i=0; i<n; i++){
//             if(sum <= s){
//                 sum += arr[i];
//                 if(arr[i] > mx_val) mx_val = arr[i], mx_ind = i+1;
//             } if(sum>s){
//                 if(flex == 1){
//                 sum -= mx_val;
//                 ans = mx_ind;
//                 flex--;
//                 } else break;
//             }

//         }
//         if(ans == -1) cout<<0<<"\n";
//         else cout<<ans<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define ll __int64
// using namespace std;
// ll gcd (ll a, ll b) {
//     return b ? gcd (b, a % b) : a;
// }
// int main(){
//     ll n; cin>>n;
//     if(n>2){
//         if(n%2!=0) cout<<n*(n-1)*(n-2);
//         else{
//             if(gcd(n, n-3)==1) cout<<n*(n-1)*(n-3);
//             else cout<<(n-1)*(n-2)*(n-3);
//          }
//     }
//     else if(n==2) cout<<2;
//     else cout<<1;
// }

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// bool isPrime(ll n){
//     if(n==1) return 0;
//     int fg = 0;
//     for(ll i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 1 ? 0 : 1;
// }
// int main(){
//     ll n; cin>>n;
//     if(n==1) cout<<1<<"\n"<<1;
//     else{
//         vector<ll> primes, ans;
//         for(ll i=2; i<=n; i++){
//             if(isPrime(i)) primes.push_back(i);
//         }
//         for(ll i=0; i<primes.size(); i++){
//             ans.push_back(primes[i]);
//             while(2*primes[i] <= n){
//                 primes[i] = 2*primes[i];
//                 ans.push_back(primes[i]);
//             }
//         }
//         cout<<ans.size()<<"\n";
//         for(ll i=0; i<ans.size(); i++){
//             cout<<ans[i]<<" ";
//         }
//     }
// } I guess this one did't really work out well :(

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     if(n<25) cout<<-1;
//     else{
//         int fg = 0;
//         int x, y;
//         for(int i=5; i<=sqrt(n); i++){
//             if(n%i == 0 && n/i >= 5){
//                 x = i, y = n/i;
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0){
//             cout<<-1;
//         } else{
//             string s = "aeiou";
//             for(int i=0; i<x*y; i++)
//             cout<<"aeiou"[(i%y+i/y)%5];
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         if(360%(180-n)==0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n, k, x; cin>>n>>k;
//     ll arr[n+1]; arr[n] = -1;
//     for(ll i=0; i<n; i++){
//         cin>>x;
//         arr[i] = x%k;        
//     }
//     ll cnt = 0;
//     sort(arr, arr+n);
//     ll i = 0;
//     while(i<n){
//         if(arr[i] == arr[i+1]){
//             cnt+=2;
//             i+=2;
//         } else i++;
//     }
//     cout<<cnt;
// } wrong solution

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; cin>>s;
//     int fg = 0;
//     for(int i=1; i<s.length(); i++){
//         if(islower(s.at(i))){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 1) cout<<s;
//     else{
//         for(int i=0; i<s.length(); i++){
//             if(islower(s.at(i))) cout<<(char)(s.at(i)-32);
//             else cout<<(char)(s.at(i)+32);
//         }
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b, c; cin>>a>>b;
//     int cnt = a;
//     while(a/b != 0){
//         cnt += a/b;
//         a = a/b + a%b;
//     }
//     cout<<cnt;
// } a/c

// <----------------Greedy algorithms and practice----------------->

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b; cin>>a>>b;
//     cout<<a*b/2;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int x, hash[5]={0}; hash[0] = -1;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         hash[x]++;
//     }
//     int s = min(hash[1], hash[3]);
//     hash[1] -= s, hash[3] -= s;
//     int ans = s + hash[4] + hash[3] + ceil((double)((2*hash[2]) + hash[1])/4);
//     cout<<ans;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll arr[] = {100, 20, 10, 5, 1};
//     ll sum = 0, cnt = 0, i = 0;
//     while(sum < n){
//         if(sum + arr[i] <= n) sum += arr[i], cnt++;
//         else i++;
//     }
//     cout<<cnt;
// }

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll n, i=0; cin>>n;
//     string s; cin>>s;
//     int zc = 0, oc = 0;
//     for(int i=0; i<s.length(); i++){
//         if(s.at(i) == '0') zc++;
//         else oc++;
//     }
//     cout<<s.length() - 2*min(zc, oc);
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n, k;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         int a[n], b[n], a_sum = 0;;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             a_sum += a[i];
//         }
//         for(int i=0; i<n; i++){
//             cin>>b[i];
//         }
//         sort(a, a+n), sort(b, b+n, greater<int>());
//         for(int i=0; i<n; i++){
//             int fg = 0;
//             for(int j=i; j<n; j++){
//                 if(a[i] <= b[i] && k>0){ 
//                     a_sum += abs(a[i] - b[i]), k--; break; 
//                 }
//                 else{
//                     fg = 1; break;
//                 }
//             }
//             if(fg == 1) break;
//         }
//         cout<<a_sum<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll t, n, m; cin>>t;
//     while(t--){
//         cin>>n>>m;
//         if(n==1) cout<<0<<"\n";
//         else if(n==2) cout<<m<<"\n";
//         else {
//             if(m%2==0) cout<<2*m<<"\n";
//             else cout<<2*(m/2) + 2*(1+(m/2))<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(a == b) cout<<0<<"\n";
//         else if(a < b){
//             if(abs(a-b)%2!=0) cout<<1<<"\n";
//             else cout<<2<<"\n";
//         } else {
//             if(abs(a-b)%2==0) cout<<1<<"\n";
//             else cout<<2<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, x, n, m; cin>>t;
//     while(t--){
//         cin>>x>>n>>m;
//         int fg = 0;
//         if(x - m*10 <= 0) fg = 1;
//         if(fg == 0){
//         while(n--){
//             x = (x/2) + 10;
//         }
//         x = x - m*10;
//         }
//         if(x <= 0 || fg == 1) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll t, g, i, n, q; cin>>t;
//     while(t--){
//         cin>>g;
//         while(g--){
//             cin>>i>>n>>q;
//             ll hd, tl;
//             if(i==1){
//                 if(n%2 != 0){
//                     hd = n/2, tl = 1 + (n/2);
//                 } else{
//                     hd = tl = n/2;
//                 }
//                 if(q==1) cout<<hd<<"\n";
//                 else cout<<tl<<"\n";
//             } else{
//                 if(n%2!=0){
//                     tl = n/2, hd = 1 + (n/2);
//                 } else{
//                     hd = tl = n/2;
//                 }
//                 if(q==1) cout<<hd<<"\n";
//                 else cout<<tl<<"\n";
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef unsigned long long ll;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll x, max = INT_MAX, cnt = 0;
//         for(ll i=0; i<n; i++){
//             cin>>x;
//             if(x <= max) max = x;
//             else cnt++;
//         }
//         cout<<n - cnt<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n, m; cin>>t;
//     while(t--){
//         cin>>n>>m; int arr[n], sum = 0, i = 0;
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         sort(arr, arr+n, greater<int>());
//         while(sum <= m){
//             if(sum + arr[i] <= m){
//                 sum += arr[i];
//             }
//             i++;
//             if(i == n) break;
//         }        
//         if(sum == m) cout<<"Yes"<<"\n";
//         else cout<<"No"<<"\n";
//     }
// } <<---------WA--------->>this is kanpsack-dp problem. refer editorial 

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll arr[n];
//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         if(n == 1) cout<<0<<"\n";
//         else{
//             sort(arr, arr+n);
//             ll i = 0, dist = 0, same_max = 1;
//             while(i<n){
//                 ll x = upper_bound(arr, arr+n, arr[i]) - lower_bound(arr, arr+n, arr[i]);
//                 if(x == 1) dist++;
//                 else if(x > same_max) same_max = x, dist++;
//                 i += x;
//             }
//             if(same_max == 1) cout<<1<<"\n";
//             else if(dist == 1) cout<<(same_max + dist)/2<<"\n";
//             else cout<<min(same_max, dist)<<"\n";
//         }
//     }
// } a/c

// #include<iostream>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// typedef long long ll;
// using namespace std;
// int main(){
//     fio ll t, n, k; cin>>t;
//     while(t--){
//         cin>>n>>k;
//         if(n%2==0){
//             if(k%2==0) cout<<"YES"<<"\n";
//             else cout<<"NO"<<"\n";
//         } else{
//             if(k%2!=0) cout<<"YES"<<"\n";
//             else cout<<"NO"<<"\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t; cin>>t;
//     while(t--){
//         ll n; cin>>n;
//         ll arr[n];
//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         ll disc = 0, i = 0;
//         sort(arr, arr+n);
//         while(i<n){
//             ll x = upper_bound(arr, arr+n, arr[i]) - lower_bound(arr, arr+n, arr[i]);
//             disc++;
//             i += x;
//         }
//         cout<<disc<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t, x; cin>>t;
//     while(t--){
//         cin>>x;
//         cout<<1<<" "<<x-1<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t, x, y, k, n, a, b; cin>>t;
//     while(t--){
//         cin>>x>>y>>k>>n;
//         int fg = 0;
//         while(n--){
//             cin>>a>>b;
//             if(x - y <= a && b <= k) fg = 1;
//         }
//         if(fg == 1) cout<<"LuckyChef"<<"\n";
//         else cout<<"UnluckyChef"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s1, s2, s3; int hash[26]={0};
//     cin>>s1>>s2>>s3;
//     for(int i=0; i<s1.length(); i++) hash[s1.at(i)-65]++;
//     for(int i=0; i<s2.length(); i++) hash[s2.at(i)-65]++;
//     for(int i=0; i<s3.length(); i++) hash[s3.at(i)-65]--;
//     int fg = 0;
//     for(int i=0; i<26; i++){
//         if(hash[i] != 0){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 0) cout<<"YES"<<"\n";
//     else cout<<"NO"<<"\n";
// } a/c

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int k; cin>>k;
//     int arr[12], arr_sum = 0;
//     for(int i=0; i<12; i++){
//         cin>>arr[i];
//         arr_sum += arr[i];
//     }
//     if(k > arr_sum) cout<<-1;
//     else{
//         sort(arr, arr+12, greater<int>());
//     int cnt = 0, i = 0, sum = 0;
//     while(sum < k){
//         sum += arr[i];
//         i++; cnt++;
//     }
//     cout<<cnt;
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; cin>>s;
//     int fg = 0, i = 0;
//     vector<int> ab_ind, ba_ind;
//     for(int i=0; i<s.length(); i++){
//         if(s.substr(i,2) == "AB") ab_ind.push_back(i);
//         else if(s.substr(i,2) == "BA") ba_ind.push_back(i);
//     }
//     sort(ab_ind.begin(), ab_ind.end()), sort(ba_ind.begin(), ba_ind.end());
//     if(ab_ind.size() == 0 || ba_ind.size() == 0) cout<<"NO";
//     else{
//         if(abs(ab_ind[0] - ba_ind[ba_ind.size()-1]) > 1 || abs(ba_ind[0] - ab_ind[ab_ind.size()-1]) > 1) cout<<"YES";
//         else cout<<"NO";
//     }
// } A/C

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll a, b, c, d; cin>>a>>b>>c>>d;
//     ll c256 = min(a, min(c, d));
//     a -= c256; 
//     ll c32 = min(a, b);
//     cout<<32*c32 + 256*c256;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int i=0, j=n-1,cnt = 0, ss=0, ds=0;
//     while(cnt!=n){
//         if(cnt%2==0){
//             if(arr[i] > arr[j]){
//                 ss += arr[i];
//                 i++;
//             } else{
//                 ss += arr[j];
//                 j--;
//             }
//         } else{
//             if(arr[i] > arr[j]){
//                 ds += arr[i];
//                 i++;
//             } else{
//                 ds += arr[j];
//                 j--;
//             }
//         }
//         cnt++;
//     }
//     cout<<ss<<" "<<ds;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int list[n][2];
//     for(int i=0; i<n; i++){
//         cin>>list[i][0]>>list[i][1];
//     }
//     int min_price = INT_MAX, sum = 0;
//     for(int i=0; i<n; i++){
//         if(list[i][1] < min_price) min_price = list[i][1];
//         sum += min_price*list[i][0];
//     }
//     cout<<sum;

// } a/c

// #include<bits/stdc++.h>
// typedef long long ll;
// using namespace std;
// int main(){
//     ll t, x, y, a, b; cin>>t;
//     while(t--){
//         cin>>x>>y>>a>>b;
//         ll s1, s2;
//         if(x == 0 && y == 0) cout<<0<<"\n";
//         else{
//             s1 = abs(x-y)*a;
//             if(2*a < b) s2 = min(x, y)*2*a;
//             else s2 = min(x, y)*b;
//             cout<<s1+s2<<"\n";
//         }
        
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll arr[n];
//         for(ll i=0; i<n; i++) cin>>arr[i];
//         if(n == 1) cout<<0<<"\n";
//         else {
//             sort(arr, arr+n);
//             ll sml_max = 0, dis_len = 0, i = 0;
//             while(i<n){
//                 ll x = upper_bound(arr, arr+n, arr[i]) - lower_bound(arr, arr+n, arr[i]);
//                 sml_max++;
//                 if(x > 1 && x-1 > dis_len) dis_len = x-1;
//                 i++;
//             }
//             if(dis_len == 0) cout<<1<<"\n";
//             else cout<<min(sml_max, dis_len)<<"\n";
//         }
//     }
// } wrong answer

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// signed main(){
//     fio ll t, n, x; cin>>t;
//     while(t--){
//         cin>>n>>x;
//         ll arr[n];
//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         if(n==1){
//             if(arr[0] < x) cout<<0<<"\n";
//             else cout<<1<<"\n";
//         } else{
//             sort(arr, arr+n, greater<ll>());
//         double sum = arr[0]; ll i = 1, cnt = 1, fg = 0;
//         while(sum/cnt >= x && i<n){
//             fg = 1;
//             if((sum+arr[i])/(cnt+1) >= x) sum += arr[i], cnt++;
//             i++;
//         }
//         if(fg == 0) cout<<0<<"\n";
//         else cout<<cnt<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k, i_sum = 0, f_sum = 0; cin>>n>>k;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         i_sum += arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//         if(arr[i] + arr[i+1] < k) arr[i+1] = k - arr[i];;
//     }
//     for(int i=0; i<n; i++) f_sum += arr[i];
//     cout<<abs(f_sum - i_sum)<<"\n";
//     for(int i=0; i<n; i++) cout<<arr[i]<<" ";
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int ch25 = 0, ch50 = 0, fg = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] == 25) ch25++;
//         else if(arr[i] == 50){
//             ch50++, ch25--;
//         } else if(arr[i] == 100){
//             if(ch50 > 0){
//                 ch50--, ch25--;
//             } else ch25-=3;
//         }
//         if(ch25 < 0){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 0) cout<<"YES";
//     else cout<<"NO";  
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(2*min(a,b) >= max(a,b)) cout<<pow(2*min(a, b), 2)<<"\n";
//         else cout<<pow(max(a, b), 2)<<"\n"; 
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll arr[n];
//         for(ll i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         sort(arr, arr+n);
//         ll min_diff = INT_MAX;
//         for(ll i=0; i<n-1; i++){
//             ll x = abs(arr[i] - arr[i+1]);
//             if(x < min_diff) min_diff = x;
//         }
//         cout<<min_diff<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n; int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         int c_onp = 0, c_evp = 0, c_odp = 0;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if(i!=j){
//                     if(abs(arr[i] - arr[j]) == 1){
//                         c_onp+=2;
//                         arr[i] = -1, arr[j] = -1;
//                     }
//                 }
//             }
//         }
//         for(int i=0; i<n; i++){
//             if(arr[i]!=-1){
//                 if(arr[i]%2==0) c_evp++;
//                 else if(arr[i]%2==1) c_odp++;
//             }
//         }
//         if(c_evp%2==0 && c_odp%2==0 && (c_evp+c_odp+c_onp) == n) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n; int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         int c_onp = 0, c_evp = 0, c_odp = 0;
//         sort(arr, arr+n);
//         for(int i=0; i<n-1; i++){
//             if(abs(arr[i] - arr[i+1]) == 1){
//                 c_onp+=2;
//                 arr[i] = -1, arr[i+1] = -1;
//             }
//         }
//         for(int i=0; i<n; i++){
//             if(arr[i]!=-1){
//                 if(arr[i]%2==0) c_evp++;
//                 else if(arr[i]%2==1) c_odp++;
//             }
//         }
//         if(c_evp%2==0 && c_odp%2==0 && (c_evp+c_odp+c_onp) == n) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n; int arr[n], sum = 0;
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//             sum += arr[i];
//         }
//         if(sum%2==0) cout<<"YES"<<"\n";
//         else{
//             sort(arr, arr+n);
//             for(int i=0; i<n-1; i++){
//                 if(abs(arr[i] - arr[i+1]) == 1) sum -= (arr[i] + arr[i+1]);
//             }
//             if(sum%2==0) cout<<"YES"<<"\n";
//             else cout<<"NO"<<"\n";
//         } 
//     }
// } w/a

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll a[n], b[n];
//         for(ll i=0; i<n; i++) cin>>a[i];
//         for(ll i=0; i<n; i++) cin>>b[i];
//         ll nc=0, zc=0, pc=0, fg=0;
//         for(ll i=0; i<n; i++){
//             if((a[i] < b[i] && pc == 0) || (a[i] > b[i] && nc == 0)){
//                 fg = 1;
//                 break;
//             }
//             if(a[i]==0) zc = 1;
//             else if(a[i]<0) nc = 1;
//             else pc = 1;
//             if(pc == 1 && nc == 1) break;
//         }
//         if(fg == 0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, pos[4], x, y, x1, y1, x2, y2; 
//     cin>>t;
//     while(t--){
//         cin>>pos[0]>>pos[1]>>pos[2]>>pos[3]>>x>>y>>x1>>y1>>x2>>y2;
//         sort(pos, pos+4);
//         ll mx = pos[3];
//         if(mx <= min(abs(x1-x2), abs(y1-y2))) cout<<"Yes"<<"\n";
//         else cout<<"No"<<"\n";
//     }
// } w/a

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; string s; cin>>n>>s;
//     int i=0, j, cnt=0;
//     while(i<s.length()){
//         int tmp=0;
//         while(s[i] == 'x'){
//             tmp++;
//             i++;
//         }
//         if(tmp>2) cnt += tmp-2;
//         if(s[i] != 'x') i++;
//     }
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n; ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     ll gmx = 1, cmx = 1;
//     for(ll i=1; i<n; i++){
//         if(arr[i] > arr[i-1]){
//             cmx++;
//             if(cmx > gmx) gmx = cmx;
//         }
//         else cmx = 1;        
//     }
//     cout<<gmx;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(a%b==0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int t, b, p, f, h, c; cin>>t;
//     while(t--){
//         cin>>b>>p>>f>>h>>c;
//         int buns = b/2, prft = 0;
//         if(h>c){
//             if(p<=buns) prft += h*p, buns -= p;
//             else prft += buns*h, buns = 0;

//             if(f<=buns) prft += c*f, buns -= f;
//             else prft += buns*c, buns = 0;
//         } else if(h<c){
//             if(f<=buns) prft += c*f, buns -= f;
//             else prft += buns*c, buns = 0;

//             if(p<=buns) prft += h*p, buns -= p;
//             else prft += buns*h, buns = 0;
//         } else{
//             prft += h*min(buns, (p+f));
//         }

//         cout<<prft<<"\n";
//     }
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n, m; cin>>n>>m;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     int sum = 0, i = 0;
//     while(i<n){
//         if(m>0){
//             if(arr[i] <= 0) sum += -1*arr[i], m--;
//             else break;
//         }
//         i++;
//     }
//     cout<<sum;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x, y, fg = 0; cin>>n;
//     vector<pair<int, int>> list;
//     for(int i=0; i<n; i++){
//         cin>>x>>y;
//         list.push_back(make_pair(x, y));
//     }
//     sort(list.begin(), list.end());
//     for(int i=1; i<n; i++){
//         if(list[0].second > list[i].second){
//             fg = 1;
//             break;
//         }
//         list[0].second = list[i].second;
//     }
//     if(fg == 1) cout<<"Happy Alex";
//     else cout<<"Poor Alex";
// } a/c

// #include<bits/stdc++.h>
// #define pbmp(x, y) push_back(make_pair(x, y))
// using namespace std;
// int main(){
//     vector<pair<int, int>> vect;
//     vect.pbmp(2, -3);
//     vect.pbmp(3, 3);
//     vect.pbmp(-9, -1);
//     vect.pbmp(-5, -5);
//     vect.pbmp(0, -6);
//     vect.pbmp(6, 100);
//     vect.pbmp(2, 4);
//     vect.pbmp(4, 3);
//     vect.pbmp(8, 11);

//     sort(vect.begin(), vect.end());
//     for(int i=0; i<vect.size(); i++){
//         cout<<vect[i].first<<" "<<vect[i].second<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll n; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     for(ll i=0; i<n; i++){
//         if(i==0) cout<<abs(arr[i] - arr[i+1])<<" "<<abs(arr[i] - arr[n-1])<<"\n";
//         else if(i==n-1) cout<<abs(arr[i] - arr[i-1])<<" "<<abs(arr[i] - arr[0])<<"\n";
//         else cout<<min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]))<<" "
//         <<max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1]))<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int hf1 = 0, hf2 = 0, cnt = n;
//         hf1 += pow(2, n); cnt--;
//         for(int i=1; i<=cnt/2; i++){
//             hf1 += pow(2, i);
//         }
//         for(int i=(1 + (cnt/2)); i<n; i++){
//             hf2 += pow(2, i);
//         }
//         cout<<abs(hf1 - hf2)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, m; cin>>n>>m;
//     if(n%m==0) cout<<m*(n/m)*(n/m-1)/2<<" ";
//     else cout<<m*(n/m)*(n/m-1)/2 + n%m*(n/m)<<" ";
//     cout<<(n-m+1)*(n-m)/2<<"\n";
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, cnt = 0; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     cout<<arr[n-1] - arr[0] - n + 1;
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     ll fg = 0, a, b, c;
//     for(ll i=0; i<n-2; i++){
//         a = arr[i], b = arr[i+1], c = arr[i+2];
//         if(a+b>c && a+c>b && b+c>a){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 1) cout<<"YES";
//     else cout<<"NO";
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// signed main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll a=-1, b=-1, c=-1;
//         for(ll i=2; i<sqrt(n); i++){
//             if(n%i == 0){
//                 a = i, c = n/i;
//                 break;                
//             }
//         }
//         for(ll i=2; i<sqrt(c); i++){
//             if(c%i == 0 && i != a){
//                 b = i, c = c/i;
//                 break;
//             }
//         }
//         if(a == -1 || b == -1 || c == -1) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n"<<a<<" "<<b<<" "<<c<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; string a, b; cin>>t;
//     while(t--){
//         cin>>a>>b; int cnt = 0;
//         for(int i=0; i<a.length(); i++){
//             for(int j=0; j<b.length(); j++){
//                 if(a.at(i) == b.at(j)){
//                     b.replace(j, 1, "0");
//                     cnt++;
//                 }
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n, k; cin>>t;
//     while(t--){
//         cin>>n>>k;
//         if(n<k) cout<<1<<"\n";
//         else if(n%k==0) cout<<n/k<<"\n";
//         else{
//             int fg = 0;
//             vector<ll> factors;
//             for(ll i=2; i<=sqrt(n); i++){
//                 if(n%i==0 && i<=k){
//                     fg = 1;
//                     if(n/i <= k) factors.push_back(i);
//                     else factors.push_back(n/i);
//                 }
//             }
//             if(fg == 0) cout<<n<<"\n";
//             else {
//                 sort(factors.begin(), factors.end());
//                 cout<<factors[0]<<"\n";
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int a;
//     sort(arr, arr+n);
//     a = arr[n-1];
//     arr[n-1] = 0;
//     sort(arr, arr+n);
//     for(int i=1; i<=a/2; i++){
//         if(a%i==0){
//             arr[lower_bound(arr, arr+n, i) - arr] = 0;
//             sort(arr, arr+n);
//         }
//     }
//     cout<<arr[n-1]<<" "<<a;
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; string s; cin>>s;
//         ll cnt1 = 0;
//         for(ll i=0; i<n; i++){
//             if(s.at(i) == '1') cnt1++;
//         }
//         cout<<cnt1 + (cnt1*(cnt1-1)/2)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     for(ll i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             while(n%i==0){
//                 n = n/i;
//             }
//             if(n==1) cout<<i;
//             else cout<<1;
//             return 0;
//         }
//     }
//     cout<<n;
//     return 0;
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll arr[n][n];
//     for(ll i=0; i<n; i++){
//         for(ll j=0; j<n; j++){
//             cin>>arr[i][j];
//         }
//     }
//     ll a = sqrt(arr[0][1]*arr[0][2]/arr[2][1]);
//     cout<<a<<" ";
//     for(ll i=1; i<n; i++){
//         cout<<arr[i][0]/a<<" ";
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     if(n<=2) cout<<-1;
//     else if(n%2!=0){
//         cout<<((n*n)-1)/2<<" "<<((n*n)+1)/2;
//     } else{
//         cout<<((n*n)/4) - 1<<" "<<1 + (n*n)/4;
//     }
// }

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     if(n==2) cout<<1;
//     else if(n%2==0){
//         cout<<n/2;
//     } else if(n%2!=0){
//         int fg = 0;
//         for(ll i=2; i<=sqrt(n); i++){
//             if(n%i==0){
//                 fg = 1;
//                 n = n - i;
//                 break;
//             }
//         } if(fg == 0) cout<<1;
//         else cout<<1 + (n/2);
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n, x; cin>>t;
//     while(t--){
//         cin>>n>>x; int dv;
//         int odc = 0, evc = 0;
//         for(int i=0; i<n; i++){
//             cin>>dv;
//             if(dv%2==0) evc++;
//             else odc++;
//         }
//         if(odc%2==0) odc--;
//         if(odc + evc >= x && odc>0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } wa

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x, y, li0=0, li1=0, ri0=0, ri1=0; cin>>n;
//     while(n--){
//         cin>>x>>y;
//         if(x==1) li1++;
//         else if(x==0) li0++;

//         if(y==1) ri1++;
//         else if(y==0) ri0++;
//     }
//     cout<<min(li0, li1) + min(ri0, ri1);
// } a/c

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int a, b, c; cin>>a>>b>>c;
//     int p = a+b+c, q = a*b*c, r = (a+b)*c, s = a*(b+c);
//     cout<<max({p, q, r, s}); 
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int min = abs(arr[0] - arr[n-1]), x = 1, y = n;
//     for(int i=0; i<n-1; i++){
//         if(abs(arr[i] - arr[i+1]) < min)
//         min = abs(arr[i] - arr[i+1]), x = i+1, y = i+2;
//     }
//     cout<<x<<" "<<y;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s, s1 = "xxxx", f; cin>>s;
//     s1.append(s); f.append(s1); f.append("xxxx");
//     int r=0, b=0, y=0, g=0;
//     // check blown garland color = R
//     for(int i=0; i<f.length(); i++){
//         if(f.at(i) == 'R'){
//             int j = i;
//             j-=4;
//             while(j>=0){
//                 if(f.at(j)=='!') r++;
//                 j-=4;
//             }
//             j = i;
//             j+=4;
//             while(j<f.length()){
//                 if(f.at(j)=='!') r++;
//                 j+=4;
//             }
//             break;
//         }
//     }
//     // check blown garland color = B
//     for(int i=0; i<f.length(); i++){
//         if(f.at(i) == 'B'){
//             int j = i;
//             j-=4;
//             while(j>=0){
//                 if(f.at(j)=='!') b++;
//                 j-=4;
//             }
//             j = i;
//             j+=4;
//             while(j<f.length()){
//                 if(f.at(j)=='!') b++;
//                 j+=4;
//             }
//             break;
//         }
//     }
//     // check blown garland color = Y
//     for(int i=0; i<f.length(); i++){
//         if(f.at(i) == 'Y'){
//             int j = i;
//             j-=4;
//             while(j>=0){
//                 if(f.at(j)=='!') y++;
//                 j-=4;
//             }
//             j = i;
//             j+=4;
//             while(j<f.length()){
//                 if(f.at(j)=='!') y++;
//                 j+=4;
//             }
//             break;
//         }
//     }
//     // check blown garland color = G
//     for(int i=0; i<f.length(); i++){
//         if(f.at(i) == 'G'){
//             int j = i;
//             j-=4;
//             while(j>=0){
//                 if(f.at(j)=='!') g++;
//                 j-=4;
//             }
//             j = i;
//             j+=4;
//             while(j<f.length()){
//                 if(f.at(j)=='!') g++;
//                 j+=4;
//             }
//             break;
//         }
//     }
//     cout<<r<<" "<<b<<" "<<y<<" "<<g;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, c, d, fg = 0; cin>>a>>b>>c>>d;
//     for(int i=0; i<10000; i++){
//         if(b==d){
//             cout<<b;
//             fg = 1;
//             break;
//         }
//         if(b<d) b+=a;
//         else d+=c;
//     }
//     if(fg == 0) cout<<-1;
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll a, b; cin>>a>>b;
//     while(1){
//         if(a>=2*b) a = a-2*b;
//         else if(b>=2*a) b = b-2*a;
//         if(a==0||b==0||(a<2*b && b<2*a)) break; 
//     }
//     cout<<a<<" "<<b;
// }

// #include<iostream>
// using ll = long long;
// using namespace std;
// int main(){
//     ll k, n, w;
//     cin>>k>>n>>w;
//     ll cs = k*w*(w+1)/2;
//     if(n>=cs) cout<<0;
//     else cout<<cs-n;
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n, k, x; cin>>t;
//     while(t--){
//         cin>>n>>k;
//         ll ans = 0;
//         while(n--){
//             cin>>x;
//             if(x>k) ans+=(x-k);
//         }
//         cout<<ans<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         ll i = 0, cnt = 0;
//         while(i<s.length()){
//             if(s.substr(i, 2) == "xy" || s.substr(i, 2) == "yx"){
//                 cnt++;
//                 s.replace(i, 2, "11");
//                 i+=2;
//             } else i+=1;
//         }
//         cout<<cnt<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n; int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         int d5 = 0, d10 = 0, d15 = 0, fg = 0;
//         for(int i=0; i<n; i++){
//             if(arr[i] == 5) d5++;
//             else if(arr[i] == 10){
//                 d10++;
//                 if(d5 > 0) d5--;
//                 else{
//                     fg = 1;
//                     break;
//                 }
//             } else if(arr[i] == 15){
//                 d15++;
//                 if(d10 > 0) d10--;
//                 else if(d5 > 1) d5-=2;
//                 else{
//                     fg = 1;
//                     break;
//                 }
//             }
//         }
//         if(fg == 0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int o = 1, e = 2;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if((i+j)%2!=0){
//                     cout<<e<<" ";
//                     e+=2;
//                 } else{
//                     cout<<o<<" ";
//                     o+=2;
//                 }
//             }
//             cout<<endl;
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         if(n%2!=0) cout<<n/2<<"\n";
//         else{
//             while(n%2==0) n = n/2;
//             cout<<n/2<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, p, q, r, a, b, c; cin>>t;
//     while(t--){
//         cin>>p>>q>>r>>a>>b>>c;
//         ll d[3] = {a-p, b-q, c-r};
//         sort(d, d+3);
//         if(d[0]==0 && d[1]==0 && d[2]==0) cout<<0<<"\n";
//         else if(d[0]==0 && d[1]!=0){
//             if(d[1]==d[2]) cout<<1<<"\n";
//             else cout<<2<<"\n";
//         } else if(d[0]==0 && d[1]==0 && d[2]!=0) cout<<1<<"\n";
//         else{
//             if(d[0] == d[1] && d[1] == d[2]) cout<<1<<"\n";
//             else if(d[0] == d[1] || d[1] == d[2]) cout<<2<<"\n";
//             else cout<<3<<"\n";
//         }
//     }
// } w/a

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(0);cin.tie(0);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         if((n/2)%2!=0) cout<<"NO"<<"\n";
//         else{
//             cout<<"YES"<<"\n";
//             ll p = 2, q = 1, sumE = 0, sumO = 0;
//             for(ll i=1; i<=n/2; i++){
//                 cout<<p<<" ";
//                 sumE+=p;
//                 p+=2;
//             }
//             for(ll i=1; i<n/2; i++){
//                 cout<<q<<" ";
//                 sumO+=q;
//                 q+=2;
//             }
//             cout<<(sumE-sumO)<<"\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// #define fio::ios::sync_with_stdio(0);cin.tie(0);
// using namespace std;
// int main(){
//     fio int n; string x; cin>>n;
//     map<string, int> values;
//     map<string, int>::iterator it;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         it = values.find(x);
//         if(it == values.end()){
//             cout<<"OK"<<"\n";
//             values[x] = 0;
//         } else{
//             values[x]++;
//             cout<<x<<values[x]<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, m; 
//     cin>>n;
//     int ar1[n];
//     for(int i=0; i<n; i++){
//         cin>>ar1[i];
//     }
//     cin>>m;
//     int ar2[m];
//     for(int i=0; i<m; i++){
//         cin>>ar2[i];
//     }
//     sort(ar1, ar1+n), sort(ar2, ar2+m);
//     int i = 0, j = 0, cnt = 0;
//     while(1){
//         if(abs(ar1[i] - ar2[j]) <= 1) i++, j++, cnt++;
//         else if(ar1[i] - ar2[j] > 1) j++;
//         else if(ar2[j] - ar1[i] > 1) i++;
//         if(i==n || j==m) break;
//     }
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, t; cin>>n>>t;
//     int arr[n+1]={0};
//     for(int i=1; i<=n-1; i++){
//         cin>>arr[i];
//     }
//     int i = 1, fg = 0;
//     while(i<n+1){
//         if(i==t) break;
//         if(i>t) {
//             fg = 1;
//             break;
//         } else{
//             i+=arr[i];
//         }
//     }
//     if(fg == 1) cout<<"NO";
//     else cout<<"YES";
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, l, r; cin>>n>>l>>r;
//     int min_sum = 0, max_sum = 0;
//     // finding min sum
//     for(int i=0; i<n; i++){
//         if(l==1){
//             min_sum += n-i;
//             break;
//         }
//         min_sum += pow(2, l-1);
//         l--;
//     }
//     cout<<min_sum<<" ";
//     // finding max sum
//     int x = 0;
//     for(int i=0; i<n; i++){
//         if(x==r-1){
//             max_sum += (n-i)*pow(2, r-1);
//             break;
//         }
//         max_sum += pow(2, x);
//         x++;
//     }
//     cout<<max_sum;
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n, m, cnt = 0, x = 1; cin>>n>>m;
//     ll arr[m];
//     for(ll i=0; i<m; i++){
//         cin>>arr[i];
//     }
//     for(ll i=0; i<m; i++){
//         if(arr[i] >= x){
//             cnt += arr[i]-x;
//             x = arr[i];
//         } else if(arr[i] < x){
//             cnt += n-x+arr[i];
//             x = arr[i];
//         }
//     }
//     cout<<cnt;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b; cin>>a>>b;
//     if(a>=b) cout<<a-b;
//     else{
//         int cnt = 0;
//         while(a!=b){
//             if(b%2==0 && b>a) b /= 2, cnt++;
//             else b++, cnt++;
//         }
//         cout<<cnt;
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll i = 0, sum = 0, cnt = 0;
//     while(sum + 5*pow(2, i) < n) sum += 5*pow(2, i), i++;
//     n = n - sum;
//     ll s = 0;
//     while(s + pow(2, i) < n) s += pow(2, i), cnt++;
//     ll f = cnt+1;
//     if(f==1) cout<<"Sheldon";
//     else if(f==2) cout<<"Leonard";
//     else if(f==3) cout<<"Penny";
//     else if(f==4) cout<<"Rajesh";
//     else cout<<"Howard";
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// signed main(){
//     ll n, x; cin>>n;
//     map<ll, ll> m1, m2, m3;
//     for(ll i=0; i<n; i++){
//         cin>>x;
//         m1[x]++;
//     }
//     for(ll i=0; i<n-1; i++){
//         cin>>x;
//         m2[x]++;
//     }
//     for(ll i=0; i<n-2; i++){
//         cin>>x;
//         m3[x]++;
//     }
//     // finding first value
//     for(auto it = m1.begin(); it!=m1.end(); it++){
//         auto it1 = m2.find(it->first);
//         if(it1 == m2.end() || (it1 != m2.end() && it1->second != it->second)) cout<<it->first<<"\n";
//     }
//     // finding second value
//     for(auto it = m2.begin(); it!=m2.end(); it++){
//         auto it1 = m3.find(it->first);
//         if(it1 == m3.end() || (it1 != m3.end() && it1->second != it->second)) cout<<it->first<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll n, m, mi; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     cin>>m;
//     while(m--){
//         cin>>mi;
//         cout<<upper_bound(arr, arr+n, mi) - arr<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, oc = 0; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         if(arr[i] == 1) oc++;
//     }
//     int mx = 0;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int t_oc = 0;
//             for(int a=i; a<=j; a++){
//                 if(arr[a] == 1) t_oc++;
//             }
//             int x = oc+j-i+1-(2*t_oc);
//             if(x>mx) mx = x;
//         }
//     }
//     cout<<mx;
    
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio string s; cin>>s; 
//     int n = s.length();
//     s = " " + s;
//     int arr[n] = {0};
//     for(int i=1; i<=n; i++){
//         if(s[i] == s[i+1]) arr[i] = 1;
//     }
//     int p_sum[n] = {0};
//     for(int i=1; i<=n; i++){
//         p_sum[i] = p_sum[i-1] + arr[i];
//     }
//     int m, l, r; cin>>m;
//     while(m--){
//         cin>>l>>r; l--, r--;
//         cout<<p_sum[r] - p_sum[l]<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1, -8, 9, 5, 6, -2, 4, -1, 0, 3};
//     // finding second smallest number without using sort()
//     int mn = INT_MAX;
//     for(int i=0; i<10; i++){
//         if(arr[i] < mn) mn = arr[i];
//     }
//     int ref = INT_MAX;
//     for(int i=0; i<10; i++){
//         if(arr[i] > mn && arr[i] < ref) ref = arr[i];
//     }
//     cout<<ref;
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// signed main(){
//     fio int t, n, x; cin>>t;
//     while(t--){
//         cin>>n;
//         map<int, int> teams;
//         while(n--){
//             cin>>x;
//             teams[x]++;
//         }
//         int mx = 0;
//         for(auto it = teams.begin(); it != teams.end(); it++){
//             if(it->second > mx) mx = it->second;
//         }
//         x = teams.size();
//         if(mx == x) cout<<mx - 1<<"\n";
//         else cout<<min(mx, x)<<"\n";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int sum = n, comp = 1;
//     for(int i=n-1; i>=1; i--){
//         sum += i + (i-1)*comp;
//         comp++;
//     }
//     cout<<sum;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// signed main(){
//     int n, m; cin>>n>>m;
//     string x, y;
//     map<string, string> lec;
//     while(m--){
//         cin>>x>>y;
//         lec[x] = y;
//     }
//     while(n--){
//         cin>>x;
//         auto it = lec.find(x);
//         if(it->first.length() <= it->second.length()) cout<<it->first<<" ";
//         else cout<<it->second<<" ";
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     sort(arr, arr+n);
//     cout<<arr[n-1] - arr[0]<<" ";
//     if(arr[0] != arr[n-1]){
//         ll x = upper_bound(arr, arr+n, arr[n-1]) - lower_bound(arr, arr+n, arr[n-1]);
//         ll y = upper_bound(arr, arr+n, arr[0]) - lower_bound(arr, arr+n, arr[0]);
//         cout<<x*y;
//     } else{
//         cout<<n*(n-1)/2;
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll arr[n];
//     for(ll i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     ll a = -1, b = -1;
//     for(ll i=0; i<n-1; i++){
//         if(arr[i] > arr[i+1] && a == -1) a = i+1;
//         if(a!=-1 && arr[i]<arr[i+1] && b==-1) b = i+1;
//         else if(i==n-2 && arr[i]>arr[i+1] && b==-1) b = i+2;
//     }
//     if(a==-1 && b==-1) a=1, b=1;
//     int fg = 0;
//     sort(arr+a-1, arr+b);
//     for(int i=0; i<n-1; i++){
//         if(arr[i] > arr[i+1]){
//             fg = 1;
//             break;
//         }
//     }    
//     if(fg == 0) cout<<"yes"<<"\n"<<a<<" "<<b;
//     else cout<<"no";
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll a[n];
//         for(ll i=0; i<n; i++) cin>>a[i];
//         ll i=0, sum=0;
//         while(i<n){
//             if(a[i]<0){
//                 ll temp = INT_MIN; 
//                 while(a[i]<0 && i<n){
//                     if(a[i]>temp) temp=a[i];
//                     i++;
//                 } sum += temp;
//             } else if(a[i]>0){
//                 ll temp = INT_MIN;
//                 while(a[i]>0 && i<n){
//                     if(a[i]>temp) temp=a[i];
//                     i++;
//                 } sum += temp; 
//             }
//         }
//         cout<<sum<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int lr = 0, f = 0;
//     int a[5]; 
//     for(int i=0; i<5; i++){
//         cin>>a[i];
//         if(a[i] > lr) lr = a[i];
//     }
//     for(int i=1; i<=lr; i++){
//         int sum = 0;
//         for(int j=0; j<5; j++){
//             sum += a[j] - i;
//         }
//         if(sum == 0){
//             f = 1;
//             cout<<i;
//             break;
//         }
//     }
//     if(f == 0) cout<<-1;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n, m; cin>>t;
//     while(t--){
//         cin>>n>>m;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(i==0 && j==0) cout<<"W";
//                 else cout<<"B";
//             }
//             cout<<endl;
//         }
//     }
// } a/c


// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, a, b; cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(a == b) cout<<0<<"\n";
//         else{
//             ll d = abs(a-b);
//             ll x = d%5, cnt = d/5;
//             if(x==1 || x==2) cnt++;
//             else if(x==3 || x==4) cnt += 2;
//             cout<<cnt<<"\n";
//         }
//     }
// }

// #include<iostream>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n, m, x; cin>>t;
//     while(t--){
//         cin>>n>>m; x = n*m;
//         if(x%2==0) cout<<x/2<<"\n";
//         else cout<<1 + (x/2)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, h, m; cin>>n;
//     map<int, int> cvalues;
//     while(n--){
//         cin>>h>>m;
//         cvalues[(h*60)+m]++;
//     }
//     int ans = 0;
//     for(auto it = cvalues.begin(); it != cvalues.end(); it++){
//         if(it->second > ans) ans = it->second;
//     }
//     cout<<ans;
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n, m, k; cin>>t;
//     while(t--){
//         cin>>n>>m>>k;
//         if(m <= n/k) cout<<m<<"\n";
//         else{
//             int mx = n/k; m -= mx;
//             int a[k-1] = {0}, i = 0;
//             while(1){
//                 if(m > 0){
//                     if(a[i] <= n/k) m--, a[i]++, i++;
//                     else i++;
//                     if(i == k-1) i = 0;
//                 } else break;
//             }
//             if(mx == a[0]) cout<<0<<"\n";
//             else cout<<mx - a[0]<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, s; cin>>t;
//     while(t--){
//         cin>>s;
//         ll m_cnt = 0, tmp = 0;
//         while(s>0){
//             m_cnt += s;
//             tmp += s%10;
//             s = s/10;
//         }
//         cout<<m_cnt + tmp/10<<"\n";
//     }
// } w/a

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, m, x;
//     cin>>n>>m;
//     int a[n];
//     queue<int> qu;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         qu.push(i+1);
//     }
//     while(qu.size() != 1){
//         if(a[qu.front()-1] > 0){
//             a[qu.front()-1] -= m;
//             qu.push(qu.front());
//             qu.pop();
//         } else{
//             a[qu.front()-1] = 0;
//             qu.pop();
//         }
//     }
//     cout<<qu.front(); 
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n); int ans = 1;
//         for(int i=n-1; i>=0; i--){
//             if(a[i] < i+2){
//                 ans = i+2;
//                 break;
//             }
//         }
//         cout<<ans<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n, m, x, y; cin>>t;
//     while(t--){
//         cin>>n>>m>>x>>y;
//         int cnt = 0; string s;
//         while(n--){
//             int cnt1 = 0, cnt2 = 0, i = 0;
//             cin>>s; s.append(" ");
//             while(i<m+1){
//                 if(s[i] == s[i+1] && s[i] == '.') cnt2++, i+=2;
//                 else if(s[i] != s[i+1] && s[i] == '.') cnt1++, i++;
//                 else i++;
//             }
//             cnt += x*cnt1;
//             if(y/2 < x) cnt+= y*cnt2;
//             else cnt += 2*x*cnt2;
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; cin>>s;
//     cout<<s;
//     for(int i=s.length()-1; i>=0; i--) cout<<s[i];
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// bool isPrime(ll n){
//     if(n == 1) return 0;
//     else{
//         int fg = 0;
//         for(ll i=2; i<=sqrt(n); i++){
//             if(n%i == 0){
//                 fg = 1;
//                 break;
//             }
//         }
//         return fg == 1 ? 0 : 1;
//     } 
// }
// int main(){
//     ll n, m; cin>>n>>m;
//     map<ll, ll> n_fact, m_fact;
//     n_fact[2] = 0, n_fact[3] = 0, m_fact[2] = 0, m_fact[3] = 0;
//     for(ll i=2; i<=(n); i++){
//         if(n%i == 0 && isPrime(i)){
//             while(n%i == 0){
//                 n_fact[i]++;
//                 n = n/i;
//             }
//         }
//     }
//     for(ll i=2; i<=(m); i++){
//         if(m%i == 0 && isPrime(i)){
//             while(m%i == 0){
//                 m_fact[i]++;
//                 m = m/i;
//             }
//         }
//     }
//     ll fct2 = m_fact.find(2)->second - n_fact.find(2)->second;
//     ll fct3 = m_fact.find(3)->second - n_fact.find(3)->second;
//     if(fct2 >= 0 && fct3 >= 0) cout<<fct2 + fct3;
//     else cout<<-1;
// } w/a 

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long int;
// using namespace std;
// ll modExp(ll a, ll b){
//     if(b==0) return 1;
//     if(b==1) return a;
//     else{
//         ll res = modExp(a, b/2);
//         if(b%2==0) return (res * res);
//         else return (res * res * a);
//     }
// }
// int main(){
//     fio ll t, a, b, p, q;
//     cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(a == b) cout<<0<<"\n";
//         else{
//             if(a > b) p = a, q = b;
//             else p = b, q = a;
//             double x = (double)p/(double)q;
//             if(p%q != 0) cout<<-1<<"\n";
//             else{
//                 if(x == modExp(2, log2(x))){
//                 if((ll)log2(x)%3 == 0) cout<<(ll)log2(x)/3<<"\n";
//                 else cout<<1 + (ll)log2(x)/3<<"\n";
//                 } else cout<<-1<<"\n";
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n, x; cin>>t;
//     while(t--){
//         cin>>n>>x;
//         ll a[n], t_sum = 0;
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//             t_sum += a[i];
//         }
//         if(t_sum%x != 0) cout<<n<<"\n";
//         else{
//             ll fg = 0, len = 0;
//             for(ll i=0; i<n; i++){
//                 if(a[i]%x != 0){
//                     len = max(len, n-i-1);
//                     fg = 1;
//                     break;
//                 }
//             }
//             for(ll i=n-1; i>=0; i--){
//                 if(a[i]%x != 0){
//                     len = max(len, i);
//                     break;
//                 }
//             }
//             if(fg == 0 || x == 1) cout<<-1<<"\n";
//             else cout<<len<<"\n";
//         }        
//     }
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, m, n2=0, n3=0, m2=0, m3=0; cin>>n>>m;
//     ll p = n, q = m;
//     if(n == m) cout<<0;
//     else{
//     while(n%2 == 0) n2++, n/=2;
//     while(n%3 == 0) n3++, n/=3;
//     while(m%2 == 0) m2++, m/=2;
//     while(m%3 == 0) m3++, m/=3;
//     m2 = m2 - n2, m3 = m3 - n3;
//     if((p*pow(2, m2)*pow(3, m3)) != q || m2<0 || m3<0) cout<<-1;
//     else cout<<m2 + m3;
//     }
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n, greater<int>());
//         for(int i=0; i<n; i++) cout<<a[i]<<" ";
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     double n; cin>>n;
//     double ans = 0;
//     for(int i=1; i<=n; i++) ans += ((double)1/(double)i);
//     printf("%.12f", ans);
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int n; cin>>n;
//     string s, s1, s2; cin>>s1>>s2;
//     //s1.append(" "), s2.append(" ");
//     while(n--){
//         cin>>s; int c1 = 0, c2 = 0;
//         int i = 0;
//         while(i<s1.length()){
//             if(s1.substr(i, 2) == s) c1++;
//             i++;
//         }
//         i = 0;
//         while(i<s2.length()){
//             if(s2.substr(i, 2) == s) c2++;
//             i++;
//         }
//         if(c1 == c2) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// ll fact(ll n){
//     if(n == 1) return 1;
//     else return n*fact(n-1);
// }
// int main(){
//     ll p, q;
//     cin>>p>>q;
//     cout<<fact(min(p, q));
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n;cin>>n;
//     cout<<n-1;    
// }

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     while(n%2 == 0) n/=2;
//     while(n%3 == 0) n/=3;
//     while(n%5 == 0) n/=5;
//     while(n%7 == 0) n/=7;
//     if(n!=1) cout<<"NO";
//     else cout<<"YES";
// }
    
// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int n; cin>>n;
//     string s, s1, s2; cin>>s1>>s2;
//     map<string, int> cs1, cs2;
//     for(int i=0; i<s1.length()-1; i++){
//         cs1[s1.substr(i, 2)]++;
//     }
//     for(int i=0; i<s2.length()-1; i++){
//         cs2[s2.substr(i, 2)]++;
//     }
//     while(n--){
//         cin>>s;
//         if(cs1[s] == cs2[s]) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, c, u, v, x, y, cnt = 0;
//     cin>>n>>c;
//     map<ll, ll> roads;
//     for(ll i=0; i<n-1; i++){
//         cin>>x>>y;
//         roads[x] = y;
//     }
//     for(auto it = roads.begin(); it != roads.end(); it++){
//         cnt += c*(it->second - it->first);
//     }
//     cout<<cnt;
// }

// #include<bits/stdc++.h>
// #define x length()
// using namespace std;
// int main(){
//      string a, b;cin>>a>>b;if(a==b)cout<<-1;else cout<<max(a.x,b.x);
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, k, x; cin>>n>>k;
//     unordered_set<ll> values;
//     unordered_set<ll>::iterator it;
//     while(n--){
//         if(values.size() == k) {
//             ll cnt = 0;
//             for(auto it = values.begin(); it != values.end(); it++){
//                 cnt++;
//                 if(cnt == k){
//                     values.erase(it);
//                     break;
//                 }
//             }
//         }
//         cin>>x;
//         values.insert(x);
//     }
//     for(auto i : values) cout<<i<<" ";
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// bool isPresent(ll a[], ll s, ll k){
//     int fg = 0;
//     for(ll i=0; i<s; i++){
//         if(a[i] == k){
//             fg = 1;
//             break;
//         }
//     }
//     return fg == 0 ? 0 : 1;
// }
// int main(){
//     ll n, k, x;
//     cin>>n>>k;
//     ll a[k] = {0};
//     for(ll i=0; i<n; i++){
//         cin>>x;
//         if(!isPresent(a, k, x)){
//             for(ll i=k-1; i>=1; i--){
//                 a[i] = a[i-1];
//             }
//             a[0] = x;
//         }
//     }
//     ll cnt = 0;
//     for(ll i=0; i<k; i++) if(a[i] != 0) cnt++;
//     cout<<cnt<<"\n";
//     for(int i=0; i<cnt; i++) cout<<a[i]<<" ";
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; cin>>s;
//     vector<int> d;
//     d.push_back(0);
//     for(int i=0; i<s.length(); i++){
//         if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O'
//         || s[i] == 'U' || s[i] == 'Y') d.push_back(i+1);
//     }
//     d.push_back(s.length()+1);
//     int max = 0, curr = 0;
//     for(int i=1; i<d.size(); i++){
//         curr = d[i] - d[i-1];
//         if(curr > max) max = curr;
//     }
//     cout<<max;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; cin>>s; int cnt = 0;
//     for(int i=0; i<(s.length())/2; i++){
//         if(s[i] != s[s.length()-i-1]) cnt++;
//     }
//     if(cnt >= 2) cout<<"NO";
//     else if(cnt == 1) cout<<"YES";
//     else if(cnt == 0 && s.length()%2!=0) cout<<"YES";
//     else cout<<"NO";
// }  a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std; 
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll a[2*n];
//         for(ll i=0; i<2*n; i++) cin>>a[i];
//         sort(a, a+(2*n));
//         cout<<a[n] - a[n-1]<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin>>n>>k;
//     string s; cin>>s;
//     if(k == 0) cout<<n;
//     else if(s.length() == 1) cout<<0;
//     else {
//         if(s[0] != '1'){
//         s.replace(0, 1, "1");
//         k--;
//     }
//     for(int i=1; i<s.length(); i++){
//         if(k == 0) break;
//         if(s[i] != '0'){
//             s.replace(i, 1, "0");
//             k--;
//         }
//     }
//     cout<<s;
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k, cnt = 0; cin>>n>>k;
//     int a[n+1] = {0};
//     for(int i=1; i<=n; i++) cin>>a[i];
//     cnt += a[k];
//     int i = 1, s = k-i, t = k+i;
//     while(s != 0 && t != n+1){
//         if(a[s] == a[t] && a[s] == 1) cnt+=2;
//         s--, t++;
//     }
//     for(int i=1; i<=s; i++) cnt += a[i];
//     for(int i=t; i<=n; i++) cnt += a[i];
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     double h, l; 
//     cin>>h>>l;
//     printf("%.13f", (l/2)*((l/h) - (h/l)));
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     if(a[0] == 1) cout<<-1;
//     else cout<<1;
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], b[n];
//         int pos1;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             b[i] = a[i];
//         }
//         while(a[0] != 1){
//             int x = a[0];
//             for(int i=0; i<n-1; i++) a[i] = a[i+1];
//             a[n-1] = x;
//         }
//         while(b[n-1] != 1){
//             int x = b[n-1];
//             for(int i=n-1; i>=1; i--) b[i] = b[i-1];
//             b[0] = x;
//         }
//         int f1 = 0, f2 = 0;
//         for(int i=1; i<n; i++){
//             int d = a[i] - a[i-1];
//             if(d != 1){
//                 f1 = 1;
//                 break;
//             }
//         }
//         for(int i=0; i<n-1; i++){
//             int d = b[i] - b[i+1];
//             if(d != 1){
//                 f2 = 1;
//                 break;
//             }
//         }
//         if(f1 == 1 && f2 == 1) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x; cin>>n;
//     int c0 = 0, c5 = 0;
//     while(n--){
//         cin>>x;
//         if(x == 0) c0++;
//         else c5++;
//     }
//     if(c0 == 0) cout<<-1;
//     else{
//         int x = c5/9;
//         if(x == 0) cout<<0;
//         else{
//             for(int i=0; i<9*x; i++) cout<<5;
//             for(int i=0; i<c0; i++) cout<<0;
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, a, b; cin>>n>>a>>b;
//     if(b == 0) cout<<a;
//     else if(b > 0){
//         int arr[n+1] = {0};
//         for(int i=1; i<=n; i++) arr[i] = i;
//         int pos = a;
//         while(b--){
//             pos++;
//             if(pos == n+1) pos = 1;
//         }
//         cout<<pos;
//     } else{
//         int arr[n+1] = {0};
//         for(int i=1; i<=n; i++) arr[i] = i;
//         int pos = a;
//         while(b++){
//             pos--;
//             if(pos == 0) pos = n;
//         }
//         cout<<pos;
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll l, r; cin>>l>>r;
//     if(l != r) cout<<2;
//     else cout<<l;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; int k; cin>>s>>k;
//     int a[26];
//     for(int i=0; i<26; i++) cin>>a[i];
//     int c = 0;
//     for(int i=0; i<s.length(); i++){
//         c += a[s[i] - 97] * (i+1);
//     }
//     sort(a, a+26);
//     int x = ((s.length() + k)*(s.length() + k + 1)/2) - (s.length()*(s.length()+1)/2);
//     cout<<c + a[25]*x;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a, b;
//     cin>>a>>b;
//     if(a.length() != b.length()) cout<<"No";
//     else{
//         int fg = 0;
//         for(int i=0; i<a.length(); i++){
//             if(((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') && 
//             (b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u'))
//             || ((b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u') && 
//             (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u'))){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 1) cout<<"No";
//         else cout<<"Yes";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n+1] = {0};
//     for(int i=1; i<=n; i++) cin>>a[i];
//     for(int i=1; i<=n; i++){
//         int vis[n+1] = {0};
//         for(int i=1; i<=n; i++) vis[i] = -1;
//         int it = i;
//         while(1){
//             vis[it]++;
//             it = a[it];
//             if(vis[it] > 0){
//                 cout<<it<<" ";
//                 break;
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n); int cnt = 0;
//     for(int i=1; i<=n; i++){
//         if(lower_bound(a, a+n, i) - a != n){
//             a[lower_bound(a, a+n, i) - a] = -1;
//             cnt++;
//         }
//     }
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     string s, f; cin>>s;
//     map<char, int> values;
//     for(int i=0; i<s.length(); i++) values[s[i]]++;
//     int fg = 0; 
//     for(auto it = values.begin(); it != values.end(); it++){
//         f += it->first;
//         if(it->second != n){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 1) cout<<-1;
//     else{
//         while(n--) cout<<f;
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int n;
//     cin>>n;
//     while(n--){
//         string a = "", b;
//         cin>>b;
//         a += b[0];
//         int i = 1;
//         while(i<b.length()-1){
//             a += b[i], i += 2;
//         }
//         a += b[b.length()-1];
//         cout<<a<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n, x; cin>>t;
//     while(t--){
//         int c1 = 0, c2 = 0;
//         cin>>n;
//         for(int i=0; i<n; i++){
//             cin>>x;
//             if(i%2 == 0 && x%2 != 0) c1++;
//             if(i%2 != 0 && x%2 == 0) c2++;
//         }
//         if(c1 == c2) cout<<c1<<"\n";
//         else cout<<-1<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n; string s; cin>>s;
//     map<char, int> val;
//     for(int i=0; i<s.length(); i++){
//         val[s[i]]++;
//     } int fg = 0; string t = "";
//     for(auto it = val.begin(); it != val.end(); it++){
//         if(it->second % n != 0){
//             fg = 1;
//             break;
//         } else{
//             it->second /= n;
//             for(int i=0; i<it->second; i++) t += it->first;
//         }
//     }
//     if(fg == 1) cout<<-1;
//     else while(n--) cout<<t;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n][n] = {0};
//     int s = 1;
//     for(int i=0; i<n; i++){
//         if(i%2 == 0){
//             for(int j=0; j<n; j++){
//                 a[j][i] = s;
//                 s++;
//             }
//         } else{
//             for(int j=n-1; j>=0; j--){
//                 a[j][i] = s;
//                 s++;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     int min = INT_MAX, cnt = 0;
//     for(ll i=0; i<n-1; i++){
//         if(abs(a[i] - a[i+1]) < min) min = abs(a[i] - a[i+1]), cnt = 0;
//         if(abs(a[i] - a[i+1]) == min) cnt++;
//     }
//     cout<<min<<" "<<cnt;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         cout<<n/2<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t; string s; cin>>t;
//     while(t--){
//         cin>>s;
//         set<char> ans;
//         int i = 0;
//         while(i<s.length()){
//             int ct = 0;
//             char x = s[i];
//             while(s[i] == x) i++, ct++;
//             if(ct%2 != 0) ans.insert(x);
//         }
//         for(auto i : ans) cout<<i;
//         cout<<endl;
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n+3] = {0};
//     for(int i=0; i<n; i++) cin>>a[i];
//     int ct = 0, i = 0;
//     while(i<n){
//         if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
//             ct++;
//             if(a[i+3]==0 && a[i+4]==1) i += 4;
//             else i += 2;
//         } else i++;
//     }
//     cout<<ct;
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll a[n];
//         for(ll i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n, greater<ll>());
//         ll sum = 0, i = 0;
//         while(1){
//             if(sum + a[i] <= 2048){
//                 sum += a[i];
//             } i++;
//             if(sum >= 2048 || i == n) break;
//         }
//         if(sum == 2048) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     string s; cin>>s;
//     if(n>26) cout<<-1;
//     else{
//         map<char, int> x;
//         for(int i=0; i<n; i++) x[s[i]]++;
//         int cnt = 0;
//         for(auto it = x.begin(); it != x.end(); it++){
//             cnt += it->second - 1;
//         }
//         cout<<cnt;
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], b[n], c[n] = {0};
//         for(int i=0; i<n; i++) cin>>a[i];
//         for(int i=0; i<n; i++) cin>>b[i];
//         vector<int> ind; int fg = 0;
//         vector<int> d;
//         for(int i=0; i<n; i++){
//             if(a[i] > b[i]){
//                 fg = 1;
//                 break;
//             }
//             if(a[i] < b[i]){
//                 d.push_back(a[i] - b[i]);
//                 ind.push_back(i);
//             }
//         }
//         if(fg == 1) cout<<"NO"<<"\n";
//         else{
//             int fg = 0;
//             for(int i=1; i<ind.size(); i++){
//                 if(ind[i] - ind[i-1] != 1){
//                     fg = 1;
//                     break;
//                 }
//             }
//             for(int i=1; i<d.size(); i++){
//                 if(d[0] != d[i]){
//                     fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 1) cout<<"NO"<<"\n";
//             else cout<<"YES"<<"\n";
//         }
        
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin>>n>>k;
//     int a[n], b[n] = {0};
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         b[i] = a[i];
//     } 
//     sort(a, a+n); vector<int> v;
//     int sum = 0, i = 0;
//     while(sum + a[i] <= k){
//         sum += a[i];
//         v.push_back(a[i]);
//         i++;
//     }
//     int s = v.size();
//     cout<<v.size()<<"\n";
//     for(int i=0; i<v.size(); i++){
//         for(int j=0; j<n; j++){
//             if(v[i] == b[j] && b[j] != -1){
//                 cout<<j+1<<" ";
//                 b[j] = -1;
//                 break;
//             }
//         }
//     }

// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cin>>a>>b;
//     if(abs(a-b) > 1 || (abs(a-b) == 0 && a == 0)) cout<<"NO";
//     else cout<<"YES";
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[2*n], sum = 0, ssh = 0;
//     for(int i=0; i<2*n; i++){
//         cin>>a[i];
//         sum += a[i];
//     }
//     sort(a, a+(2*n));
//     for(int i=0; i<n; i++){
//         ssh += a[i];
//     }
//     if(2*ssh == sum) cout<<-1;
//     else for(int i=0; i<2*n; i++) cout<<a[i]<<" ";
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string t1, t2;
//     cin>>t1>>t2;
//     if(t1.substr(0,2) == t2.substr(0,2)) {
//         cout<<t1.substr(0,2)<<":"; int s = stoi(t1.substr(3,2)) + (stoi(t2.substr(3,2))-stoi(t1.substr(3,2)))/2;
//         if(s<10) cout<<0<<s;
//         else cout<<s;
//     }
//     else{
//         int x = 60 - stoi(t1.substr(3,2)) + 60*(stoi(t2.substr(0,2)) - stoi(t1.substr(0,2)) - 1) + stoi(t2.substr(3,2));
//         x = x/2;
//         int h = stoi(t1.substr(0,2)) + x/60;
//         int m = stoi(t1.substr(3,2)) + x%60;
//         if(m>59) h++, m -= 60;
//         string hf, mf;
//         if(h<10) {
//             hf.append("0"); hf.append(to_string(h));
//         } else hf.append(to_string(h));
//         if(m<10){
//             mf.append("0"); mf.append(to_string(m));
//         } else mf.append(to_string(m));
//         cout<<hf<<":"<<mf;
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, ts = 0, a[7];
//     cin>>n;
//     for(int i=0; i<7; i++){
//         cin>>a[i];
//         ts += a[i];
//     }
//     while(n > ts) n -= ts;
//     int c = 0, s = 0;
//     while(s < n){
//         s += a[c];
//         c++;
//     } 
//     cout<<c;
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         string s; cin>>s;
//         int fg = 0;
//         for(int i=0; i<n/2; i++){
//             if(s[i] != s[n-i-1] && abs(s[i] - s[n-i-1]) != 2){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, x, y;
//     cin>>n>>x>>y;
//     ll a[n+x+y] = {0};
//     for(ll i=0; i<x; i++) a[i] = INT_MAX;
//     for(ll i=x+n; i<x+n+y; i++) a[i] = INT_MAX;
//     for(ll i=x; i<x+n; i++) cin>>a[i];
//     for(ll i=x; i<n+x; i++){
//         int fg = 0;
//         for(ll j=i-x; j<i; j++){
//             if(a[j] <= a[i]){
//                 fg = 1;
//                 break;
//             }
//         }
//         for(ll j=i+1; j<=i+y; j++){
//             if(a[j] <= a[i]){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0){
//             cout<<i-x+1;
//             break;
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t; cin>>t;
//     while(t--){
//         string s1, s = " ";
//         cin>>s1;
//         s.append(s1); s.append(" ");
//         for(int i=1; i<s.length()-1; i++){
//             if(s[i] == '?'){
//                 if(s[i-1] == 'a'){
//                     if(s[i+1] == 'b') s.replace(i, 1, "c");
//                     else s.replace(i, 1, "b");
//                 } else if(s[i-1] == 'b'){
//                     if(s[i+1] == 'a') s.replace(i, 1, "c");
//                     else s.replace(i, 1, "a");
//                 } else if(s[i-1] == 'c'){
//                     if(s[i+1] == 'a') s.replace(i, 1, "b");
//                     else s.replace(i, 1, "a");
//                 } else{
//                     if(s[i+1] == 'a') s.replace(i, 1, "b");
//                     else s.replace(i, 1, "a");
//                 }
//             }
//         }
//         int fg = 0;
//         for(int i=0; i<s.length()-1; i++){
//             if(s[i] == s[i+1]){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 1) cout<<-1<<"\n";
//         else cout<<s.substr(1)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, mx = 0, x = -1; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         if(a[i] > mx) mx = a[i], x = i;
//     }
//     int fg = 0;
//     for(int i=1; i<=x; i++){
//         if(a[i] < a[i-1]){
//             fg = 1;
//             break;
//         }
//     }
//     for(int i=x; i<n-1; i++){
//         if(a[i] < a[i+1]){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 1) cout<<"NO";
//     else cout<<"YES";
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int n, x, y; cin>>n;
//     bool a[2][n+1];
//     for(int i=0; i<2; i++){
//         for(int j=0; j<n+1; j++) a[i][j] = 0;
//     }
//     for(int i=0; i<n*n; i++){
//         cin>>x>>y;
//         if(a[0][x] == 0 && a[1][y] == 0){
//             cout<<i+1<<" ";
//             a[0][x] = 1, a[1][y] = 1;
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     string s; cin>>s;
//     if(n == 1) cout<<"NO";
//     else{
//         int fg = 0;
//         for(int i=0; i<n-1; i++){
//             if(s[i] != s[i+1]){
//                 fg = 1;
//                 cout<<"YES"<<"\n"<<s.substr(i, 2);
//                 break;
//             }
//         }
//         if(fg == 0) cout<<"NO";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     for(int i=0; i<n; i+=2){
//         if(i%4 == 0){
//             cout<<"a";
//             if(i+1<n) cout<<"a";
//         } else{
//             cout<<"b";
//             if(i+1<n) cout<<"b";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x, cnt = 0; cin>>n;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         sum += x;
//     }
//     for(int i=1; i<=5; i++){
//         int s = sum + i;
//         int j = 0;
//         while(s--){
//             j++;
//             if(j == n+1) j = 0;
//         }
//         if(j != 1) cnt++;
//     }
//     cout<<cnt;
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t; cin>>t;
//     string s, h;
//     while(t--){
//         cin>>s>>h;
//         int fg = 0;
//         if(h.length() < s.length()) cout<<"NO"<<"\n";
//         else {
//             for(int i=0; i<h.length() - s.length() + 1; i++){
//             string x = s, y = h;
//             sort(x.begin(), x.end());
//             sort(y.begin()+i, y.begin()+i+x.length());
//             if(y.substr(i, x.length()) == x){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 1) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n, m; cin>>t;
//     while(t--){
//         ll o1 = 0, o2 = 0, e1 = 0, e2 = 0;
//         cin>>n; ll ni[n];
//         for(ll i=0; i<n; i++) {
//             cin>>ni[i];
//             if(ni[i]%2!=0) o1++; 
//             else e1++;
//         } // +ve slope line
//         cin>>m; ll mi[m];
//         for(ll i=0; i<m; i++) {
//             cin>>mi[i];
//             if(mi[i]%2!=0) o2++;
//             else e2++;
//         } // -ve slope line
//         cout<<(o1*o2) + (e1*e2)<<"\n";
//     } 
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     int t = 1 + a[0];
//     for(int i=1; i<n; i++){
//         t += 2 + abs(a[i] - a[i-1]);
//     }
//     cout<<t;
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll a[n], s = 0, x = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     s += a[n-1]; x = a[n-1];
//     for(ll i=n-2; i>=0; i--){
//         if(a[i] < x){
//             s += a[i];
//             x = a[i];
//         } else {
//             if(x-1 >= 0) s += x-1, x--;
//         }
//     }
//     cout<<s;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, fg = 0; cin>>n;
//     int a[n];
//     map<int, int> cnt;
//     vector<int> v1, v2;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         cnt[a[i]]++;
//         if(cnt[a[i]] > 2) fg = 1;
//     }
//     if(fg == 1) cout<<"NO";
//     else{
//         for(auto it = cnt.begin(); it != cnt.end(); it++){
//             if(it->second == 1) v1.push_back(it->first);
//             if(it->second == 2) v1.push_back(it->first), v2.push_back(it->first);
//         }
//         sort(v1.begin(), v1.end()), sort(v2.begin(), v2.end(), greater<int>());
//         cout<<"YES"<<"\n"<<v1.size()<<"\n";
//         for(auto i : v1) cout<<i<<" "; cout<<"\n"<<v2.size()<<"\n";
//         for(auto i : v2) cout<<i<<" "; 
//     }    
// } a/c

// #include<iostream>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     fio ll l, r; cin>>l>>r;
//     cout<<"YES"<<"\n";
//     for(ll i=l; i<=r; i+=2) cout<<i<<" "<<i+1<<"\n";
// } a/c

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, k, x; cin>>n>>k;
//     set<int> s;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         s.insert(x);
//     }
//     ll mx = 0;
//     for(auto i : s){
//         if(k == 0) break;
//         cout<<i - mx<<"\n";
//         mx = i;
//         k--;
//     }
//     if(k > 0) while(k--) cout<<0<<"\n";
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int i=4, sum = 4;
//     while(sum < n){
//         i++;
//         int x = i, t_sum = 0, fg = 0;
//         while(x>0){
//             t_sum += x%10;
//             if(x%10 != 4 && x%10 != 7){
//                 fg = 1;
//                 break;
//             }
//             x /= 10;
//         }
//         if(fg == 0) sum = t_sum;
//     }
//     if(sum == n) cout<<i;
//     else cout<<-1;
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, k, ki; cin>>n;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     cin>>k;
//     while(k--){
//         cin>>ki;
//         cout<<n - (upper_bound(a, a+n, ki) - a);
//     }
// } a/c

// #include<bits/stdc++.h>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll t, a, b, c; cin>>t;
//     while(t--){
//         cin>>a>>b>>c;
//         if(b >= a) cout<<-1<<"\n";
//         else{
//         while(c%a != b){
//             c--;
//             if(c == 0) break;
//         }
//         cout<<c<<"\n";
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string s, t; int k;
//    cin>>s>>t>>k;
//    vector<int> v;
//    for(int i=0; i<s.length(); i++){
//       if(t[i] >= s[i]) v.push_back(t[i] - s[i]);
//       else v.push_back(26 - (s[i] - t[i]));
//    }
//    sort(v.begin(), v.end());
//    int fg = 0;
//    for(int i=1; i<=k; i++){
//        if(v[i-1] != i){
//            fg = 1;
//            break;
//        }
//    }
//    if(fg == 0) cout<<"Yes";
//    else cout<<"No";
//  }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x; cin>>n;
//     map<int, int> c;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         c[x]++;
//     }
//     if(c.size() != 2) cout<<"NO";
//     else{
//         auto i = c.begin(); int x = i->second; i++; int y = i->second;
//         if(x != y) cout<<"NO";
//         else{
//             cout<<"YES"<<"\n";
//             for(auto it = c.begin(); it != c.end(); it++) cout<<it->first<<" ";
//         }
//     }
//}

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n; cin>>n;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     ll t_max = 1, curr_max = 1, i = 0, j = 1, curr_min = a[i];
//     ll p, q; p = a[i], q = a[j];
//     while(1){
//         if(abs(a[j] - a[i]) <= 1 && ((a[i]==q && a[j]==p) || (a[i]==p && a[j]==q))){
//             curr_max++;
//             j++;
//         } else{
//             i++;
//             curr_max = 1;
//             j = i+1;
//             p = a[i], q = a[j];
//         }
//         t_max = max(curr_max, t_max);
//         if(i == n || j == n) break;
//     }
//     cout<<t_max;
// } w/a

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         if(n == 1) cout<<0<<"\n";
//         else{
//             ll a = 0, b = 0;
//             while(n%2 == 0) n /= 2, a++;
//             while(n%3 == 0) n /= 3, b++;
//             if(n != 1) cout<<-1<<"\n";
//             else{
//                 if(b - a < 0) cout<<-1<<"\n";
//                 else cout<<2*b - a<<"\n";
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     fio ll t, x, y, n; cin>>t;
//     while(t--){
//         cin>>x>>y>>n;
//         ll a = x*(n/x) + y;
//         if(a > n) a -= x;
//         cout<<a<<"\n";
        
//     }
// } a/c

// #include<bits/stdc++.h>
// #define fio ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     fio int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         string s; cin>>s;
//         while(1){
//             int fg = 0;
//             for(int i=0; i<s.length(); i++){
//                 if(s.substr(i, 2) == "()"){
//                     fg = 1;
//                     s.erase(i, 2);
//                 }
//             }
//             if(fg == 0) break;
//         }
//         cout<<s.length()/2<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, k; cin>>n>>k;
//     int a[n], sum = 0, s = 0;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         if(i < k) sum += a[i];
//     }
//     int t_sum = sum;
//     for(int i=1; i<n-k+1; i++){
//         t_sum = t_sum - a[i-1] + a[i+k-1];
//         if(t_sum < sum) sum = t_sum, s = i;
//     }
//     cout<<s+1;
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int ec = 0, oc = 0, a[n];
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             if(a[i]%2 == 0) ec++;
//             else oc++;
//         }
//         if(ec%2 == 0 && oc%2 == 0) cout<<"YES"<<"\n";
//         else{
//             sort(a, a+n);
//             int fg = 0;
//             for(int i=1; i<n; i++){
//                 if(a[i] - a[i-1] == 1){
//                     fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 1) cout<<"YES"<<"\n";
//             else cout<<"NO"<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         map<char, int> m;
//         for(int i=0; i<s.length(); i++) m[s[i]]++;
//         if(m['0'] == 0 || m['1'] == 0) cout<<s<<"\n";
//         else{
//             for(int i=0; i<s.length(); i++){
//                 if(s[i] == '0' && s[i+1] == '0') s.insert(i+1, "1");
//                 else if(s[i] == '1' && s[i+1] == '1') s.insert(i+1, "0");
//             }
//             cout<<s<<"\n";
//         }
//     }
// } 

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using namespace std;
// int main(){
//     FastIO
//     int t, n, m; cin>>t;
//     while(t--){
//     cin>>n>>m;
//     int a[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>a[i][j];
//         }
//     }
//     int z_row_sum_cnt = 0, z_col_sum_cnt = 0;
//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=0; j<m; j++){
//             sum += a[i][j];
//         }
//         if(sum == 0) z_row_sum_cnt++;
//     }
//     for(int i=0; i<m; i++){
//         int sum = 0;
//         for(int j=0; j<n; j++){
//             sum += a[j][i];
//         }
//         if(sum == 0) z_col_sum_cnt++;
//     }
//     if(min(z_col_sum_cnt, z_row_sum_cnt)%2 != 0) cout<<"Ashish"<<"\n";
//     else cout<<"Vivek"<<"\n";
//     }    
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         int fg = 0;
//         for(int i=0; i<n; i++){
//             for(int j=i+2; j<n; j++){
//                 if(a[j] == a[i]){
//                     fg = 1;
//                     break;
//                 }
//             }
//         }
//         if(fg == 1) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, a, b;
//     cin>>t;
//     while(t--){
//         cin>>a>>b;
//         if(2*min(a, b) <= max(a, b)) cout<<min(a, b)<<"\n";
//         else cout<<(a + b)/3<<"\n";
//     }    
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         if(n%2 == 0) cout<<n/2<<"\n";
//         else cout<<1 + (n/2)<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, k;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         if(k < n){
//             cout<<k*(k+1)/2<<"\n";
//         } else{
//             cout<<1 + n*(n-1)/2<<"\n";
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n; 
//         ll h, cnt = 0;
//         while(n > 1){
//             cnt++;
//             h = (sqrt(1 + (24*n)) - 1)/6;
//             n = n - (h*(h+1)) - (h*(h-1)/2);          
//         }
//         cout<<cnt<<"\n";
//     }    
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll a[n], sum = 0;
//         cin>>a[0]; 
//         for(ll i=1; i<n; i++){
//             cin>>a[i];
//             sum += abs(a[i] - a[i-1]) - 1;
//         }
//         cout<<sum<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// ll sumd(ll n){
//     ll sum = 0;
//     while(n > 0){
//         sum += n%10;
//         n /= 10;
//     }
//     return sum;
// }
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll a, b, apt = 0, bpt = 0;
//         while(n--){
//             cin>>a>>b;
//             ll x = sumd(a), y = sumd(b);
//             if(x > y) apt++;
//             else if(x < y) bpt++;
//             else apt++, bpt++;
//         }
//         if(apt > bpt) cout<<0<<" "<<apt<<"\n";
//         else if(bpt > apt) cout<<1<<" "<<bpt<<"\n";
//         else cout<<2<<" "<<apt<<"\n";
//   1  }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, k;
//     cin>>t;
//     while(t--){
//         cin>>k;
//         k--;
//         for(int i=0; i<8; i++){
//             for(int j=0; j<8; j++){
//                 if(i == 0 && j == 0) cout<<"O";
//                 else{
//                     if(k > 0){
//                         cout<<".";
//                         k--;
//                     } else cout<<"X";
//                 }
//             } cout<<endl;
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         reverse(s.begin(), s.end());
//         vector<int> val; val.push_back(1);
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == 'R') val.push_back(i+2);
//         }
//         val.push_back(s.length()+2);
//         int mxd = 0;
//         for(int i=1; i<val.size(); i++){
//             mxd = max(mxd, val[i] - val[i-1]);
//         }
//         cout<<mxd<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n; ll x, y, z;
//         map<ll, ll> xc, yc;
//         z = 4*n - 1;
//         while(z--){
//             cin>>x>>y;
//             xc[x]++, yc[y]++;
//         }
//         for(auto it=xc.begin(); it!=xc.end(); it++){
//             if(it->second % 2 != 0) cout<<it->first<<" ";
//         }   
//         for(auto it=yc.begin(); it!=yc.end(); it++){
//             if(it->second % 2 != 0) cout<<it->first<<" "<<"\n";
//         }     
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, a, k; cin>>t;
//     while(t--){
//         cin>>a>>k;
//         string s = to_string(a);
//         sort(s.begin(), s.end());
//         if(s[0] == '0') cout<<a<<"\n";
//         else{
//             ll a1 = a;
//             if(k == 1) cout<<a1<<"\n";
//             else{
//             for(ll i=2; i<=k; i++){
//                 string x = to_string(a1);
//                 sort(x.begin(), x.end());
//                 a1 += ((x[0]-48) * (x[x.length()-1]-48));
//                 if(x[0] == '0') break;
//             }
//             cout<<a1<<"\n";
//             }
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int a, b, cnt = 0; cin>>a>>b;
//     while(true){
//         if((a <= 1 && b <= 1) || (a <= 0 || b <= 0)) {
//             break;
//         }        
//         if(a <= 2) a++, b-=2, cnt++;
//         else if(b <= 2) b++, a-=2, cnt++;
//         else a++, b-=2, cnt++;
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     int wat = 0, i = 0, cnt = 0, x;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         wat += x;
//     }
//     sort(a, a+n, greater<int>());
//     while(wat > 0){
//         wat -= a[i];
//         i++;
//         cnt++;
//     }
//     cout<<cnt;
// } use upper bound. much easier and faster.

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// ll sum(ll n){
//     ll sum = 0;
//     while(n > 0){
//         sum += n%10;
//         n /= 10;
//     }
//      return sum;
// }
// int main(){
//     FastIO
//     ll k, a = 19; cin>>k;
//     while(true){
//         if(sum(a) == 10) k--, a+=9;
//         else{
//             while(sum(a) != 10) a++;
//         }
//         if(k == 0) break;
//     }
//     cout<<a-9;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[2*n], x = 2*n - 2, i = 0, j = 0;
//         vector<int> n1, n2;
//         for(int i=0; i<2*n; i++){
//             cin>>a[i];
//             if(a[i]%2 == 0) n1.push_back(i+1);
//             else n2.push_back(i+1);
//         }
//         while(x > 0){
//             if(i+1<n1.size()){
//                 x-=2;
//                 cout<<n1[i]<<" "<<n1[i+1]<<endl;
//                 i+=2;
//             } else if(j+1<n2.size()){
//                 x-=2;
//                 cout<<n2[j]<<" "<<n2[j+1]<<endl;
//                 j+=2;
//             }
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         int mp = a[n-1], cnt = 0;
//         for(int i=n-1; i>=0; i--){
//             mp = min(mp, a[i]);
//             if(a[i] > mp) cnt++;
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long int;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, x; cin>>t;
//     while(t--){
//         cin>>n; ll a[n];
//         map<ll, ll> s, s1;
//         vector<ll> ds(0);
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//             s[a[i]]++;
//             s1[a[i]]++;
//         }
//         for(ll i=0; i<n; i++){
//             cin>>x;
//             s[x]++;
//         }
//         int fg = 0;
//         for(auto i=s.begin(); i!=s.end(); i++){
//             if(i->second % 2 != 0){
//                 fg = 1;
//                 break;
//             } else i->second /= 2;
//         }
//         if(fg == 1) cout<<-1<<"\n";
//         else{
//             for(auto i=s.begin(); i!=s.end(); i++){
//                 if(s1[i->first] != i->second){
//                     ll d;
//                     if(i->second > s1[i->first]) d = i->second - s1[i->first];
//                     else d = s1[i->first] - i->second;
//                     for(ll k=0; k<d; k++) ds.push_back(i->first);
//                 } 
//             }
//             sort(ds.begin(), ds.end());
//             if(ds.empty()) cout<<0<<"\n";
//             else cout<<ds[(ds.size()/2) - 1]<<"\n";
//         }
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long int;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, x; cin>>t;
//     while(t--){
//         cin>>n; ll a[n];
//         map<ll, ll> s, s1;
//         vector<ll> v1, v2;
//         for(ll i=0; i<n; i++){
//             cin>>a[i];
//             s[a[i]]++;
//             s1[a[i]]++;
//         }
//         for(ll i=0; i<n; i++){
//             cin>>x;
//             s[x]++;
//         }
//         int fg = 0;
//         for(auto i=s.begin(); i!=s.end(); i++){
//             if(i->second % 2 != 0){
//                 fg = 1;
//                 break;
//             } else i->second /= 2;
//         }
//         if(fg == 1) cout<<-1<<"\n";
//         else{
//             for(auto i=s.begin(); i!=s.end(); i++){
//                 if(s1[i->first] > i->second){
//                     ll d = s1[i->first] - i->second;
//                     for(ll k=0; k<d; k++) v1.push_back(i->first);
//                 } else if(s1[i->first] < i->second){
//                     ll d = i->second - s1[i->first];
//                     for(ll k=0; k<d; k++) v2.push_back(i->first);
//                 }
//             }
//             sort(v1.begin(), v1.end()), sort(v2.begin(), v2.end());
//             ll count = 0;
//             for(ll i=0; i<v1.size(); i++) {
//                 if(v1[i] != v2[i]) count += min(v1[i], v2[i]);
//             }
//             cout<<count<<"\n";
//         }
//     }
// } wa2

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, x = 0; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     cout<<a[n-1];
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// bool isLucky(ll n){
//     int fg = 0;
//     while(n > 0){
//         ll d = n%10;
//         if(d != 4 && d != 7){
//             fg = 1;
//             break;
//         }
//         n /= 10;
//     }
//     return fg == 0 ? 1 : 0;
// }
// int main(){
//     FastIO
//     ll n; cin>>n;
//     ll cnt = 0;
//     for(ll i=1; i<=n; i++){
//         if(isLucky(i)) cnt++;
//     }
//     cout<<cnt;
// } tle

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// ll b2d(ll n){
//     ll sum = 0, i = 0;
//     while(n > 0){
//         ll d = n%10;
//         sum += d*pow(2, i);
//         n /= 10;
//         i++;
//     }
//     return sum;
// }
// signed main(){
//     FastIO
//     ll n; cin>>n;
//     ll d = n;
//     int dig = 0;
//     while(d > 0){
//         d /= 10;
//         dig++;
//     }
//     ll pre_rank = 0;
//     string x = to_string(n);
//     for(ll i=0; i<x.length(); i++){
//         if(x[i] == '4') x.replace(i, 1, "0");
//         else x.replace(i, 1, "1");
//     }
//     ll count = b2d(stoi(x));
//     for(ll i=1; i<=(dig-1); i++){
//         pre_rank += pow(2, i);
//     }
//     cout<<pre_rank + count + 1;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     if(n == 1){
//         if(a[0] != 15 && a[0] != 0) cout<<-1;
//         else if(a[0] == 15) cout<<"DOWN";
//         else if(a[0] == 0) cout<<"UP";
//     }
//     else{
//         int x = a[n-2], y = a[n-1];
//         if((x < y && y < 15) || (x > y && y == 0)) cout<<"UP";
//         else if((x < y && y == 15) || (x > y && y > 0)) cout<<"DOWN";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, m; cin>>n>>m;
//     map<string, int> ch; string x = "";
//     while(n--){
//         string s; cin>>s;
//         for(int i=0; i<s.length(); i++){
//             ch[s.substr(i, 1)]++;
//         }
//     }
//     for(auto it = ch.begin(); it != ch.end(); it++){
//         for(int i=0; i<it->second / 2; i++){
//             x.append(it->first);
//         }
//     }
//     cout<<2*x.length()<<"\n";
//     string y = x; reverse(y.begin(), y.end());
//     cout<<x<<y;
// } correct in terms of logic | not as demanded by the question

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, m; cin>>n>>m;
//     map<string, int> val;
//     string x = "", y = "";
//     while(n--){
//         string s, rev_temp;
//         cin>>s; rev_temp = s;
//         reverse(rev_temp.begin(), rev_temp.end());
//         auto it = val.find(rev_temp);
//         if(it != val.end()) val[rev_temp]++;
//         else val[s]++;
//     }
//     for(auto it = val.begin(); it != val.end(); it++){
//         if(it->second > 1){
//             for(int i=0; i<it->second / 2; i++){
//                 x.append(it->first);
//             }
//         } string t = it->first; reverse(t.begin(), t.end()); if(t == it->first) y = t;
//     }
//     cout<<2*x.length() + y.length()<<"\n";
//     string k = x; reverse(k.begin(), k.end());
//     cout<<x<<y<<k;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s; cin>>s;
//     map<char, int> m;
//     for(auto i : s) m[i]++;
//     if(m['0'] == 0) cout<<s.substr(0, s.length()-1);
//     else{
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == '0') {
//                 s.erase(i, 1);
//                 break;
//             }
//         }
//         cout<<s;
//     } 
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, m; cin>>n>>m;
//     ll a[m][n];
//     for(ll i=0; i<m; i++){
//         for(ll j=0; j<n; j++){
//             cin>>a[i][j];
//         }
//     }    
//     vector<ll> stg1; map<ll, ll> stg2;
//     for(ll i=0; i<m; i++){
//         ll max = a[i][0], ind = 0;
//         for(ll j=0; j<n; j++){
//             if(a[i][j] > max) max = a[i][j], ind = j;
//         }
//         stg1.push_back(ind);
//     }
//     for(auto i : stg1) stg2[i]++;
//     ll val = 0, ans = 0;
//     for(auto i=stg2.begin(); i!=stg2.end(); i++){
//         if(i->second > val) ans = i->first, val = i->second;
//     }
//     cout<<ans+1;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll a[n];
//         for(ll i=0; i<n; i++) cin>>a[i];
//         for(ll i=0; i<n; i++){
//             if(i%2 != 0){
//                 if(a[i] > 0) a[i] = -a[i];
//             } else if(i%2 == 0){
//                 if(a[i] < 0) a[i] = -a[i];
//             }
//         }
//         for(ll i=0; i<n; i++) cout<<a[i]<<" ";
//         cout<<endl;
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll a, b, cnt = 0; cin>>a>>b;
//     while(a != b && a > 0){
//         if(b > a) swap(a, b);
//         ll x = a/b;
//         a -= x*b;
//         cnt += x;
//     }    
//     cout<<cnt;
// } a/c

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     int a[6]; cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
//     map<int, int> m;
//     for(int i=0; i<6; i++) m[a[i]]++;
//     int fg = 0;
//     for(auto i=m.begin(); i!=m.end(); i++){
//         if(i->second > 3){
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 0) cout<<"Alien";
//     else{
//         if(m.size() == 1) cout<<"Elephant";
//         else if(m.size() == 2){
//             int f = 0;
//             for(auto i=m.begin(); i!=m.end(); i++){
//                 if(i->second == 1){
//                     f = 1;
//                     break;
//                 }
//             }
//             if(f == 1) cout<<"Bear";
//             else cout<<"Elephant";
//         }
//         else if(m.size() == 3) cout<<"Bear";
//     }

// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, m; cin>>n>>m;
//     map<ll, ll> m1, m2;
//     for(ll i=1; i<=n; i++) m1[i%5]++;
//     for(ll i=1; i<=m; i++) m2[i%5]++;
//     ll ans = m1[0]*m2[0] + m1[1]*m2[4] + m1[2]*m2[3] + m1[3]*m2[2] + m1[4]*m2[1];
//     cout<<ans;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, cnt = 0; cin>>n;
//     while(true){
//         if(n < 10) break;
//         else{
//             cnt += 10 - (n%10);
//             n += 10 - (n%10);
//             while(n%10 == 0) n /= 10;
//         }
//     }
//     cout<<cnt+9;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, x, y, cnt = 0; cin>>n>>x>>y;
//     string s; cin>>s; reverse(s.begin(), s.end());
//     string a = s.substr(0, x), b = "";
//     for(int i=0; i<x; i++){
//         if(i == y) b.append("1");
//         else b.append("0");
//     }
//     for(int i=0; i<x; i++){
//         if(a[i] != b[i]) cnt++;
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, max = 0; cin>>n;
//     ll a[n], b[n] = {0};
//     for(ll i=0; i<n; i++) cin>>a[i];
//     ll i = n-1;
//     while(true){
//         if(i == -1) break;
//         if(a[i] > max) max = a[i];
//         else{
//             if(a[i] <= max) b[i] = max - a[i] + 1;
//             else b[i] = 0;
//         }
//         i--;
//     }
//     for(ll i=0; i<n; i++) cout<<b[i]<<" ";
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, t, c; cin>>n>>t>>c;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     ll i = 0, j = 0, tcnt = 0, mcnt = 0;
//     while(j < n){
//         if(a[j] <= t) tcnt++, j++;
//         else{
//             j++, i = j, tcnt = 0;
//         }
//         if(tcnt >= c) i++, mcnt++;
//     }
//     cout<<mcnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, k; cin>>n>>k;
//     string a[n], s;
//     for(int i=0; i<n; i++) cin>>a[i];
//     cin>>s;
//     sort(a, a+n);
//     int min = 0, max = 0, l = 0, r = 0;
//     for(int i=0; i<n; i++){
//         if(a[i].length() < s.length()) l++;
//         if(a[i].length() == s.length()) r++;
//     }
//     r = r + l;
//     int x = 1 + l + 5*(l/k);
//     min = x;
//     max = r + 5*(r-1)/k;
//     cout<<min<<" "<<max;
// } w/a

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     int a[n+1] = {0};
//     int s = n, x;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         a[x]++;
//         while(a[s]){
//             cout<<s<<" ";
//             s--;
//         }
//         cout<<endl;
//     }    
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, x, q, sf = 0, sb = 0; cin>>n;
//     map<ll, ll> m;
//     for(ll i=0; i<n; i++){
//         cin>>x;
//         m[x] = i;
//     }
//     cin>>q;
//     while(q--){
//         cin>>x;
//         sf += m[x] + 1;
//         sb += n - m[x];
//     }
//     cout<<sf<<" "<<sb;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, s, t; cin>>n;
//     if(n <= 2) cout<<"No";
//     else{
//     s = n*(n+1)/2;
//     if(s%2 == 0){
//         cout<<"Yes"<<"\n"<<1<<" "<<2<<"\n"<<n-1<<" ";
//         for(int i=1; i<=n; i++) if(i!=2) cout<<i<<" ";
//     } else{
//         for(int i=2; i<=n; i++){
//             if(__gcd(i, s-i) > 1){
//                 t = i;
//                 break;
//             }
//         }
//         cout<<"Yes"<<"\n"<<1<<" "<<t<<"\n"<<n-1<<" ";
//         for(int i=1; i<=n; i++) if(i!=t) cout<<i<<" ";
//     }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     if(n == 1) cout<<1<<"\n"<<1;
//     else if(n == 2) cout<<1<<"\n"<<1;
//     else if(n == 3) cout<<2<<"\n"<<1<<" "<<3;
//     else if(n == 4) cout<<4<<"\n"<<3<<" "<<1<<" "<<4<<" "<<2;
//     else { cout<<n<<"\n";
//         for(int i=1; i<=n; i+=2) cout<<i<<" ";
//         for(int i=2; i<=n; i+=2) cout<<i<<" ";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string a, b; cin>>a>>b;
//     int d = 0;
//     for(int i=0; i<a.length(); i++){
//         if(a[i] != b[i]) d++;
//     }
//     if(d%2 != 0) cout<<"impossible";
//     else{
//         for(int i=0; i<a.length(); i++){
//             if(a[i] != b[i]){
//                 if(d%2 == 0) cout<<a[i];
//                 else cout<<b[i];
//                 d--;
//             } else cout<<b[i];
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, d, m, x, y; cin>>n>>d;
//     cin>>m;
//     while(m--){
//         cin>>x>>y;
//         if(x+y-d >= 0 && x-y-d <= 0 && x-y+d >= 0 && x+y-(2*n)+d <= 0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n; cin>>n;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     if(a[0] >= a[n-1] + a[1] || a[n-1] >= a[0] + a[n-2]) cout<<"NO";
//     else{
//         cout<<"YES"<<"\n";
//         for(auto i : a) cout<<i<<" ";
//     }
// } w/a

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     char a[4][4]; map<char, int> m; int fg = 0;
//     for(int i=0; i<4; i++){
//         for(int j=0; j<4; j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             m[a[i][j]]++, m[a[i][j+1]]++, m[a[i+1][j]]++, m[a[i+1][j+1]]++;
//             if(m['#'] >= 3 || m['.'] >=3) {
//                 fg = 1;
//                 break;
//             } else m.clear();
//         }
//     }
//     if(fg == 1) cout<<"YES";
//     else cout<<"NO";
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define mp make_pair
// using namespace std;
// int main(){
//     FastIO
//     map<int, vector<int>> m;
//     m[4].push_back(1);
//     m[4].push_back(-1);
//     m[4].push_back(2);
//     m[4].push_back(-3);
//     sort(m[4].begin(), m[4].end());
//     int k = 0;
//     for(auto i=m.begin(); i!=m.end(); i++){
//         for(int j=0; j<m[i->first].size(); j++){
//             cout<<m[i->first][j]<<" ";
//         }
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, k, p, t, x; cin>>n>>k;
//     map<int, vector<int>> m;
//     vector<pair<int, int>> v;
//     while(n--){
//         cin>>p>>t;
//         m[p].push_back(t);
//         v.push_back(make_pair(p, t));
//     }
//     sort(v.begin(), v.end());
//     auto it = m.find(v[k].first);
//     sort(m[it->first].begin(), m[it->first].end());
//     for(auto i=m.begin(); i!=m.end(); i++){
//         if(i->first > it->first) k -= it->second.size();
//     }
//     // int count = 0;
//     // for(int i=0; i<m[it->first].size(); i++){
//     //     if(m[it->first][i] == m[it->first][k]) count++;
//     // }
//     // cout<<count;
// } unknown

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// bool sbs(const pair<int, int> &a, const pair<int, int> &b){
//     if(a.first != b.first) return (b.first < a.first);
//     else return (b.second > a.second);
// }
// int main(){
//     FastIO
//     int n, k, p, t; cin>>n>>k;
//     vector<pair<int, int>> v, u;
//     while(n--){
//         cin>>p>>t;
//         v.push_back(make_pair(p, t));
//     }
//     sort(v.begin(), v.end(), sbs);
//     cout<<count(v.begin(), v.end(), v[k-1]);    
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// bool compRev(const int &a, const int &b){ // reverse order sort comparator function
//     return b < a;
// }
// bool comp(const int &a, const int &b){ // forward order sort comparator function
//     return b > a;
// }
// int main(){
//     int a[5] = {-1, 2, 4, 3, 7};
//     sort(a, a+5, comp);
//     for(auto i:a) cout<<i<<" ";
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define LMAX 1e9
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll k, sum = 0, cnt = 0, i = 0; string n; cin>>k>>n;
//     sort(n.begin(), n.end());
//     while(true){
//         sum += (n[i] - 48);
//         i++;
//         if(i == n.length() || sum > k) break;
//     }
//     if(sum >= k) cout<<0;
//     else{ 
//         i = 0;
//         while(true){
//             sum += 9 - (n[i] - 48);
//             cnt++, i++;
//             if(sum >= k) break;
//         }
//         cout<<cnt;
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll l1, r1, l2, r2, k;
//     cin>>l1>>r1>>l2>>r2>>k;
//     ll x = min(r1, r2), y = max(l1, l2), z;
//     if(y > x) cout<<0;
//     else {
//         z = x - y + 1;
//         if(k >= y && k <= x) z--;
//         cout<<z;
//     }
    
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s; cin>>s;
//     string a[5] = {"Danil", "Olya", "Slava", "Ann",  "Nikita"};
//     int cnt = 0;
//     for(int i=0; i<5; i++){
//         if(a[i].length() <= s.length()){
//             for(int j=0; j<s.length()-a[i].length()+1; j++){
//                 if(s.substr(j, a[i].length()) == a[i]) cnt++;
//             }
//         }
//     }
//     if(cnt != 1) cout<<"NO";
//     else cout<<"YES";
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n; cin>>n;
//     ll a[n]; for(ll i=0; i<n; i++) cin>>a[i];
//     ll mx = 1, i = 1, c_cnt = 1, val = a[0];
//     while(i < n){
//         if(a[i] >= val){
//             c_cnt++;
//         } else{
//             mx = max(mx, c_cnt);
//             c_cnt = 1;
//             val = a[i];
//         }
//         i++;
//     }    
//     cout<<mx;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, min_v = 1e9, min_d = 1e9; cin>>n;
//     ll a[n]; vector<ll> v;
//     for(ll i=0; i<n; i++){
//         cin>>a[i];
//         if(a[i] < min_v) min_v = a[i];
//     }
//     for(ll i=0; i<n; i++){
//         if(a[i] == min_v) v.push_back(i+1);
//     }
//     for(ll i=1; i<v.size(); i++){
//         min_d = min(min_d, v[i] - v[i-1]);
//     }
//     cout<<min_d;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, k; cin>>n>>k;
//     if(k == 0) for(int i=1; i<=n; i++) cout<<i<<" ";
//     else{
//         for(int i=1; i<=(n-k-1); i++) cout<<i<<" ";
//         for(int i=n; i>(n-k-1); i--) cout<<i<<" ";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, x; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n] = {0};
//         n *= 2;
//         while(n--){
//             cin>>x;
//             if(a[x-1] == 0){
//                 cout<<x<<" ";
//                 a[x-1] = 1;
//             }
//         }
//         cout<<endl;
//     }
// } /ac

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     int t, n, m, x; cin>>t;
//     while(t--){
//         cin>>n>>m;
//         int v = -1;
//         map<int, int> a;
//         for(int i=0; i<n; i++){
//             cin>>x;
//             a[x]++;
//         }
//         for(int i=0; i<m; i++){
//             cin>>x;
//             if(a[x] > 0) v = x;
//         }
//         if(v == -1) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n"<<1<<" "<<v<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, k;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         int x, cnt = 0;
//         for(int i=0; i<n; i++){
//             cin>>x;
//             x += k;
//             if(x%7 == 0) cnt++;
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int d, s; cin>>d>>s;
//     int m = d;
//     int k = s/9, t = s - 9*(s/9), max = 0, min = 0;
//     int fg = 0; string s1 = "";
//     if(s < 1 || s > (9*d)) cout<<-1<<" "<<-1;
//     else{
//         while(m--){
//         if(k > 0){
//             max += 9;
//             max *= 10;
//             k--;
//             s1.append("9");
//         } else if(k == 0){
//             fg = 1;
//             max += t;
//             k--;
//             s1.append(to_string(t));
//         } else{
//             max *= 10;
//             s1.append("0");
//         }
//     }
//     if(fg == 0) max /= 10; 
//     cout << max;
//     // for min
//     m = d, k = s/9, t = s - 9*(s/9);
//     // while(m--){
//     //     if(k > 0){
//     //         min += 9;
//     //         min *= 10;
//     //         k--;
//     //     } else if(k == 0){
//     //         fg = 1;
//     //         min += t;
//     //         k--;
//     //     } else{
//     //         min *= 10;
//     //     }
//     // }
//         // int p = max, rc = 0;
//         // while(p > 0) {
//         //     min += p%10;
//         //     min *= 10;
//         //     p /= 10;
//         // } min /= 10;
//         // int r = min;
//         // while(r > 0) {
//         //     rc++;
//         //     r /= 10;
//         // }
//         // if(rc == d) cout<<min<<" "<<max;
//         // else {
//         //     rc = d - rc;
//         //     min -= rc;

//         // }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     int x = 0, mx = 0;
//     map<int, int> m;
//     while(a > 0){
//         m[a%10]++;
//         a /= 10;
//     }
//     while(b > 0){
//         m[b%10]++;
//         b /= 10;
//     }
//     while(c > 0){
//         m[c%10]++;
//         c /= 10;
//     }
//     while(d > 0){
//         m[d%10]++;
//         d /= 10;
//     }
//     for(auto i=m.begin(); i!=m.end(); i++){
//         if(i->second >= mx){
//             mx = i->second;
//             x = i->first;
//         }
//     }
//     cout<<x;
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, x; cin>>t;
//     while(t--){
//         cin>>n>>x;
//         int a[n], oc = 0, ec = 0;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             if(a[i]%2 == 0) ec++;
//             else oc++;
//         }
//         if(x%2 != 0){
//             if(oc == 0) cout<<"No"<<"\n";
//             else if(oc >= x) cout<<"Yes"<<"\n";
//             else if(oc < x){
//                 if(oc%2 != 0) cout<<"Yes"<<"\n";
//                 else{
//                     oc--;
//                     if(oc + ec >= x) cout<<"Yes"<<"\n";
//                     else cout<<"No"<<"\n";
//                 }
//             }
//         } else{
//             if(oc == 0) cout<<"No"<<"\n";
//             else if(oc == x){
//                 if(ec > 0) cout<<"Yes"<<"\n";
//                 else cout<<"No"<<"\n";
//             } else if(oc > x){
//                 if(ec > 0) cout<<"Yes"<<"\n";
//                 else cout<<"No"<<"\n";
//             } else if(oc < x){
//                 if(oc%2 != 0) cout<<"Yes"<<"\n";
//                 else{
//                     oc--;
//                     if(oc + ec >= x) cout<<"Yes"<<"\n";
//                     else cout<<"No"<<"\n";
//                 }
//             }
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     //FastIO
//     int t, n, x;
//     cin>>t;
//     while(t--){
//         string x, a = "", b = "";
//         cin>>n>>x;
//         int fg = 0;
//         for(int i=0; i<x.length(); i++){
//             if(fg == 0){
//                 if(x[i] == '2') a.append("1"), b.append("1");
//                 else if(x[i] == '0') a.append("0"), b.append("0");
//                 else{
//                     a.append("1"), b.append("0");
//                     fg = 1;
//                 }
//             } else{
//                 a.append("0"), b.append(x.substr(i, 1));
//             }
//         }
//         cout<<a<<"\n"<<b<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, t; cin>>n>>t;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     ll cts = 0, fcnt = 0, ccnt = 0, i = 0, j = 0;
//     while(j < n){
//         if(cts + a[j] <= t){
//             cts += a[j];
//             j++, ccnt++;
//             fcnt = max(fcnt, ccnt);
//         } else{
//             cts -= a[i];
//             i++;
//             cts += a[j];
//             j++;
//         }
//         if(j < i) j = i;
//     }
//     cout<<fcnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n][2];
//         for(int i=0; i<n; i++){
//             cin>>a[i][0]>>a[i][1];
//         }
//         int fg = 0;
//         for(int i=1; i<n; i++){
//             int x = a[i][0] - a[i-1][0], y = a[i][1] - a[i-1][1];
//             if(x < 0 || y < 0 || a[i][0] < a[i][1]) fg = 1;
//             else{
//                 if(y > x) fg = 1;
//             }
//             if(fg == 1) break;
//         }
//         if(a[0][0] < a[0][1]) fg = 1;
//         if(fg == 1) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int k, r, s, cnt = 1; cin>>k>>r;
//     s = k;
//     while(1){
//         if(k%10 == 0 || k%10 == r) break;
//         cnt++;
//         k += s;
//     }
//     cout<<cnt;
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int n, k, fg = 0; 
//     cin>>n; int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     cin>>k;
//     for(int i=0; i<n; i++){
//         if(a[i] == k){
//             cout<<i+1;
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 0) cout<<-1;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     //FastIO
//     ll t, n, k; cin>>t;
//     while(t--){
//         cin>>n>>k;
//         if(n%2 != 0){
//             if(k%2 == 0) cout<<"NO"<<"\n";
//             else{
//                 if(k > n) cout<<"NO"<<"\n";
//                 else{
//                     cout<<"YES"<<"\n";
//                     for(ll i=0; i<(k-1); i++) cout<<1<<" ";
//                     cout<<n-k+1<<"\n";
//                 }
//             }
//         } else{
//             if(k%2 == 0){
//                 if(k > n) cout<<"NO"<<"\n";
//                 else{
//                     cout<<"YES"<<"\n";
//                     for(ll i=0; i<(k-1); i++) cout<<1<<" ";
//                     cout<<n-k+1<<"\n";
//                 }
//             } else{
//                 if(2*k > n) cout<<"NO"<<"\n";
//                 else{
//                     cout<<"YES"<<"\n";
//                     for(ll i=0; i<(k-1); i++) cout<<2<<" ";
//                     cout<<n-(2*(k-1))<<"\n";
//                 }
//             }
//         }
//     }
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll a[n];
//         for(ll i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n);
//         if(n%2 != 0) cout<<a[n/2]<<" ";
//         for(int i=(n/2)-1; i>=0; i--){
//             cout<<a[i]<<" "<<a[n-i-1]<<" ";
//         }
//         cout<<endl;
//     }    
// } 

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         string s; cin>>s;
//         string srt = s;
//         sort(srt.begin(), srt.end());
//         if(s == srt) cout<<s<<"\n";
//         else{
//             int pr = 0, su = 0;
//             for(int i=0; i<s.length(); i++){
//                 if(s[i] == '0') pr++;
//                 else break;
//             }
//             for(int i=s.length()-1; i>=0; i--){
//                 if(s[i] == '1') su++;
//                 else break;
//             }
//             for(int i=0; i<(pr+1); i++) cout<<0;
//             for(int i=0; i<su; i++) cout<<1;
//             cout<<endl;
//         }
//     }
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     vector<pair<int, int>> s(n);
//     for(int i=0; i<n; i++){
//         cin>>s[i].first>>s[i].second;
//     }
//     sort(s.begin(), s.end());
//     int last = 0;
//     for(int i=0; i<n; i++){
//         if(last <= s[i].second) last = s[i].second;
//         else last = s[i].first;
//     }
//     cout<<last;
// } a/c

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n]; 
//     for(int i=0; i<n; i++) cin>>a[i];
//     int fg, v_flag = 0, swap_count = 0;
//     while(1){
//         fg = 0;
//         for(int i=0; i<n-1; i++){
//             if(a[i] > 200 || a[i+1] > 200){
//                 v_flag = 1;
//                 break;
//             }
//             if(a[i] > a[i+1]){
//                 swap_count++;
//                 swap(a[i], a[i+1]);
//                 fg = 1;
//             }
//         }
//         if(fg == 0) break;
//     }
//     if(v_flag == 0) cout<<swap_count;
//     else cout<<-1;
// } a/c

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], b[n];
//         int zc = 0, oc = 0;
//         for(int i=0; i<n; i++) cin>>a[i];
//         for(int i=0; i<n; i++){
//             cin>>b[i];
//             b[i] == 0 ? zc++ : oc++;
//         }
//         int fg = 0;
//         for(int i=1; i<n; i++){
//             if(a[i] < a[i-1]){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0) cout<<"YES"<<"\n";
//         else{
//             if(zc > 0 && oc > 0) cout<<"YES"<<"\n";
//             else cout<<"NO"<<"\n";
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; 
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], k = n-1;
//         for(int i=0; i<n; i++) cin>>a[i];
//         while(k > 0 && a[k-1] >= a[k]) k--;
//         while(k > 0 && a[k-1] <= a[k]) k--;
//         cout<<k<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; cin>>s;
//     for(int i=0; i<s.length(); i++){
//         if(i > 0){
//             s.replace(i, 1, to_string(min(s[i]-48, 9 - (s[i] - 48))));
//         } else {
//             if(s[i] != '9') s.replace(i, 1, to_string(min(s[i]-48, 9 - (s[i] - 48))));
//         }
//     }
//     cout<<s<<"\n";
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(0);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n);
//         int k = 0, cnt = 0;
//         for(int i=0; i<n; i++){
//             if((k+1) == a[i]) cnt++, k = 0;
//             else k++;
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, x, sum = 0;
//     cin>>n;
//     map<ll, ll> m;
//     while(n--){
//         cin>>x;
//         m[x]++;
//     }
//     for(auto i=m.begin(); i!=m.end(); i++){
//         if(i->second % 2 == 0) sum += i->first;
//     }
//     cout<<sum;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll k, n, dg = 0, sum = 0; cin>>n;
//     k = n;
//     while(k > 0){
//         dg++;
//         k /= 10;
//     }
//     ll s = 1 + pow(10, dg-2);
//     cout<<s<<" ";
//     n -= s;
//     while(n > 0){
//         sum += n%10;
//         n /= 10;
//     }
//     while(s > 0){
//         sum += s%10;
//         s /= 10;
//     }
//     cout<<sum;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, k, x, score = 0; cin>>n>>k;
//     ll a[k];
//     for(ll i=0; i<k; i++){
//         cin>>a[i];
//     }
//     for(ll i=0; i<k; i++){
//         x = a[i]%10;
//         if(x == 1) score++;
//         else if(x > 1){
//             if(score > 1) score *= x;
//             else score += x;
//         }
//     }
//     cout<<score;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//    ll n, k; cin>>n>>k;
//    double s = sqrt(n);
//    if(s*s == n) cout<<s + (s-1)*(k-1);
//    else {
//        s = (ll)s; s++;
//        cout<<s + (s-1)*(k-1);
//    }
// }

// // Aditya @ydasc815
// #include<iostream>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     int i, j, k, cnt = 0;
//     for(int i=1; i<n; i++){
//         k = a[i];
//         j = i-1;
//         cnt++;
//         while(j >= 0 && a[j] > k){
//             //cnt++;
//             a[j+1] = a[j];
//             j--;
//         }
//         a[j+1] = k;
//     }
//     cout<<cnt;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll t, n; cin>>t;
//     while(t--){
//         ll k, sum = 0;
//         cin>>n;
//         for(ll i=1; i<=sqrt(n); i++){
//             if(n%i == 0){
//                 if(i != 1) k = max(k, max(i, n/i));
//                 else k = 1;
//             } 
//         }
//         cout<<min(k, n-k)<<" "<<max(k, n-k)<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], fg = 0;
//         for(int i=0; i<n; i++) cin>>a[i];
//         if(n == 1) cout<<"YES"<<"\n";
//         else{
//             sort(a, a+n);
//             for(int i=1; i<n; i++){
//                 if(a[i] - a[i-1] > 1){
//                     fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 0) cout<<"YES"<<"\n";
//             else cout<<"NO"<<"\n";
//         }
//     }
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         int mov = 1, alc = a[0], boc = 0, i = 1, j = n-1, ref = a[0];
//         while(i < j){
            
//         }
//     }
// } test code

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         int mov = 1, alc = a[0], boc = 0, i = 1, j = n-1, ref = a[0];
//         while(i <= j){
//             if(mov%2 == 0){
//                 mov++;
//                 int d = 0;
//                 while(d < ref+1 && i <= j){
//                     d += a[i];
//                     alc += a[i];
//                     i++;
//                 }
//                 ref = d;
//             } else{
//                 mov++;
//                 int d = 0;
//                 while(d < ref+1 && i <= j){
//                     d += a[j];
//                     boc += a[j];
//                     j--;
//                 }
//                 ref = d;
//             }
//         }
//         cout<<mov<<" "<<alc<<" "<<boc<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; string s;
//     cin>>n>>s;
//     map<int, int> fct;
//     for(int i=0; i<s.length(); i++){
//         int d = s[i] - 48;
//         if(d == 2) fct[2]++;
//         else if(d == 3) fct[3]++, fct[2]++;
//         else if(d == 4) fct[3]++, fct[2]+=3;
//         else if(d == 5) fct[5]++, fct[3]++, fct[2]+=3;
//         else if(d == 6) fct[5]++, fct[3]+=2, fct[2]+=4;
//         else if(d == 7) fct[7]++, fct[5]++, fct[3]+=2, fct[2]+=4;
//         else if(d == 8) fct[7]++, fct[5]++, fct[3]+=2, fct[2]+=7;
//         else if(d == 9) fct[7]++, fct[5]++, fct[3]+=4, fct[2]+=7;        
//     }
//     if(fct[7] > 0){
//         while(1){
//             if(fct[5] >= 1 && fct[3] >= 2 && fct[2] >= 4){
//                 fct[5]--, fct[3]-=2, fct[2]-=4;
//                 cout<<7;
//                 fct[7]--;
//             } else break;
//         }
//         while(fct[7] > 0) {
//             cout<<7;
//             fct[7]--;
//         }
//     }
//     if(fct[5] > 0){
//         while(1){
//             if(fct[3] >= 1 && fct[2] >= 3){
//                 fct[3]--, fct[2]-=3;
//                 cout<<5;
//                 fct[5]--;
//             } else break;
//         }
//         while(fct[5] > 0){
//             cout<<5;
//             fct[5]--;
//         }
//     }
//     fct[2] -= fct[3];
//     while(fct[3] > 0){
//         cout<<3;
//         fct[3]--;
//     }
//     while(fct[2] > 0){
//         cout<<2;
//         fct[2]--;
//     }
// }

// #include <cstdlib>
// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main()
// {
//     int a,b,i,l,k=0,c=0,d=0,j;
//     int a_arr[100],b_arr[100];
//     cin>>a;
//     cin>>b;
//     for(i=0;i<a;i++)
//     {
//         cin>>a_arr[i];
//     }
//     for(i=0;i<b;i++)
//     {
//         cin>>b_arr[i];
//     }
//     int start=a_arr[a-1];
//     int stop=b_arr[0];
//     j=a_arr[a-1];
//     do{
//         for(l=0;l<b;l++)
//         {
//            if(b_arr[l]%j==0)
//            {
//              c++;
//            }
//         }
//         if(c==b)
//         {
//            for(i=0;i<a;i++)
//            {
//             if(j%a_arr[i]==0 )
//             {
//               d++;
//             }
//            } 
//            if(d==a)
//            {
//                k++;
//            }
//         }
//     c=0;
//     d=0;    
//     j++;    
//     } while(j>=start && j<=stop);      
//     cout<<k;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, x, y, cnt = 0; cin>>n;
//     int a[n]; 
//     for(int i=0; i<n; i++) cin>>a[i];
//     cin>>x>>y;
//     for(int i=0; i<=n-y; i++){
//         int sum = 0;
//         for(int j=i; j<i+y; j++){
//             sum += a[j];
//         }
//         if(sum == x) cnt++;
//     }
//     cout<<cnt;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, m, i = 1; cin>>n>>m;
//     while(n != 0){
//         if(i%m != 0) n--;
//         i++;
//     }
//     cout<<i-1;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char a[3][10] = {
//         {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
//         {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
//         {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}
//     };
//     char in; string s; cin>>in>>s;
//     if(in == 'R'){
//         for(int i=0; i<s.length(); i++){
//         for(int j=0; j<3; j++){
//             for(int k=0; k<10; k++){
//                 if(s[i] == a[j][k]) cout<<a[j][k-1];
//             }
//         }
//     }
//     } else if(in == 'L'){
//         for(int i=0; i<s.length(); i++){
//         for(int j=0; j<3; j++){
//             for(int k=0; k<10; k++){
//                 if(s[i] == a[j][k]) cout<<a[j][k+1];
//             }
//         }
//     }
//     }
// }

// #include<iostream>
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         cout<<n<<"\n";
//     }
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll n, s = 0; cin>>n;
//     ll b[n];
//     for(ll i=0; i<n; i++) cin>>b[i];
//     for(ll i=0; i<n; i++){
//         if(b[i] >= 0){
//             s += b[i];
//             cout<<s<<" ";
//         } else{
//             cout<<s + b[i]<<" ";
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     while(t--){
//         string s; cin>>s;
//         string cmp = "hackerrank"; int j = 0, fg = 0;
//         for(int i=0; i<s.length(); i++){
//             if(s[i] == cmp[j]) j++;
//             if(j == cmp.length()) break;
//         }
//         if(j == cmp.length()) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";        
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s1, s2; cin>>s1>>s2;
//     map<char, int> m1, m2; int cnt = 0;
//     for(int i=0; i<s1.length(); i++){
//         m1[s1[i]]++;
//     }
//     for(int i=0; i<s2.length(); i++){
//         m2[s2[i]]++;
//     }
//     for(char i='a'; i<='z'; i++){
//         cnt += abs(m1[i] - m2[i]);
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s, c = ""; int cnt = 0; cin>>s;
//     for(int i=0; i<s.length()/3; i++) c.append("SOS");
//     for(int i=0; i<c.length(); i++) if(c[i] != s[i]) cnt++;
//     cout<<cnt;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     while(t--){
//         string s, r; int fg = 0; cin>>s;
//         r = s; reverse(r.begin(), r.end());
//         for(int i=0; i<s.length()-1; i++){
//             if(abs(s[i] - s[i+1]) != abs(r[i] - r[i+1])){
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0) cout<<"Funny"<<"\n";
//         else cout<<"Not Funny"<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, t = 0; cin>>n;
//     string s, ans; cin>>s;
//     map<string, int> m;
//     for(int i=0; i<s.length()-1; i++){
//         m[s.substr(i, 2)]++;
//     }
//     for(auto i=m.begin(); i!=m.end(); i++){
//         if(i->second > t){
//             t = i->second;
//             ans = i->first;
//         }
//     }
//     cout<<ans;
// } A/C

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll n, p = 1, cnt = 0, zc = 0; cin>>n;
//     ll a[n];
//     for(ll i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++){
//         if(a[i] != 0){
//             p *= a[i]/abs(a[i]);
//             cnt += abs(a[i]) - 1;
//         } else zc++, cnt++;
//     }
//     if(p == -1 && zc < 1) cnt += 2;
//     cout<<cnt;
// } a/c

// #include<iostream>
// using ll = long long;
// using namespace std;
// int main(){
//     string s; cin>>s;
//     int fg = 0, i = 0;
//     while(i < s.length()){
//         if(s.substr(i, 3) == "144") i+=3;
//         else if(s.substr(i, 2) == "14") i+=2;
//         else if(s.substr(i, 1) == "1") i++;
//         else{
//             fg = 1;
//             break;
//         }
//     }
//     if(fg == 0) cout<<"YES";
//     else cout<<"NO";    
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, x, y; cin>>t;
//     while(t--){
//         cin>>n>>x;
//         set<int> s;
//         for(int i=0; i<n; i++){
//             cin>>y;
//             s.insert(y);
//         }
//         auto it = s.begin(); int i = 1;
//         if(x < *it) cout<<x<<"\n";
//         else{
//             while(*it - i <= x){
//                 i++; it++;
//                 if(it == s.end()) break;    
//             }
//             --it, --i;
//             cout<<*it + abs(*it-i-x)<<"\n";
//         }
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     if(n > 50) cout<<"Array size exceeded";
//     else {
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         int temp, cnt = 0;
//         for(int i=1; i<n; i++){
//             temp = a[i];
//             int j;
//             for(int j=i; j>0; j--){
//                 if(a[j - 1] > temp ){                    
//                     cnt++;                    
//                     a[j] = a[j - 1];  
//                 }
//                 else{
//                     cnt++;
//                     break;
//                 }                  
//             }
//             a[j] = temp;
//         }
//         cout<<cnt;
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO int W = 0, B = 0;
//     map<char, int> m; 
//     m.insert(pair<char, int>('q', 9));
//     m.insert(pair<char, int>('r', 5));
//     m.insert(pair<char, int>('b', 3));
//     m.insert(pair<char, int>('n', 3));
//     m.insert(pair<char, int>('p', 1));
//     for(int i=0; i<8; i++){
//         string s; cin>>s;
//         for(int i=0; i<s.length(); i++){
//             if(isupper(s[i])){
//                 W += m[tolower(s[i])];
//             } else if(islower(s[i])){
//                 B += m[s[i]];
//             }
//         }
//     }
//     if(W > B) cout<<"White";
//     else if(B > W) cout<<"Black";
//     else cout<<"Draw";
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main() {
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         ll x, s = n*(n+1)/2;
//         for(ll i=0; i<n-1; i++){
//             cin>>x;
//             s -= x;
//         }
//         cout<<s<<"\n";
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     int n, x; cin>>n;
//     vector<int> e, o;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         x%2 == 0 ? e.push_back(x) : o.push_back(x);
//     }
//     // print even nos.
//     for(int i=0; i<e.size(); i++) cout<<e[i]<<" ";
//     cout<<"\n";
//     // print odd nos.
//     for(int i=0; i<o.size(); i++) cout<<o[i]<<" ";
// }

// #include<bits/stdc++.h>
// using ll = long long;
// using namespace std;
// int main(){
//     ll t, n, d;
//     cin>>t;
//     while(t--){
//         cin>>n>>d;
//         ll a[n];
//         for(ll i=0; i<n; i++) cin>>a[i];
//         for(ll i=d; i<n; i++) cout<<a[i]<<" ";
//         for(ll i=0; i<d; i++) cout<<a[i]<<" ";
//         cout<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, x; cin>>t;
//     while(t--){
//         cin>>n;
//         map<ll, ll> m;
//         for(int i=0; i<n; i++){
//             cin>>x;
//             m[x]++;
//         }
//         x = -1;
//         for(auto i=m.begin(); i!=m.end(); i++){
//             if(i->second > n/2){
//                 x = i->first;
//                 break;
//             }
//         }
//         cout<<x<<"\n";
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main() {
//     int n; cin>>n;
//     int a[n], o[n] = {0}, e[n] = {0}, x = 0, y = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++){
//         if(a[i]%2 == 0){
//             e[y] = a[i];
//             y++;
//         } else{
//             o[x] = a[i];
//             x++;
//         }
//     }
//     // printing even elements
//     for(int i=0; i<y; i++) cout<<e[i]<<" ";
//     cout<<"\n";
//     // printing odd elements
//     for(int i=0; i<x; i++) cout<<o[i]<<" ";
    
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// bool checkTriplet(int arr[], int n) { // [meet in the middle algorithm] T.C. -> O(n^2)
// 	    for(int i=0; i<n; i++) arr[i] = arr[i]*arr[i];
// 	    sort(arr, arr+n);
// 	    for(int i=n-1; i>=2; i--){
// 	        int l = 0, r = i-1;
// 	        while(l < r){
// 	            if(arr[l] + arr[r] == arr[i]) return true;
// 	            arr[l] + arr[r] < arr[i] ? l++ : r--;
// 	        }
// 	    }
// 	    return false;
// }
// int main(){
//     FastIO
    
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// bool cmpFun(int a, int b){
//     if(a > b) return 1;
//     else return 0 ;
// }
// int main(){
//     FastIO
//     int a[10] = {1, 5, 7, 2, 3, -4, 6, -8, 9, 11};
//     sort(a+9, a+11, cmpFun);
//     for(int i=0; i<10; i++) cout<<a[i]<<" ";
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, k;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         ll a[n], s = k-1;
//         for(ll i=0; i<n; i++) cin>>a[i];
//         ll d = n/k;
//         while(d--){
//             ll p = s, m = k;
//             while(m--){
//                 cout<<a[p]<<" ";
//                 p--;
//             }
//             s += k;
//         }
//         d = n%k; int x = n-1;
//         while(d--){
//             cout<<a[x]<<" ";
//             x--;
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, x;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         map<ll, ll> a, b; int fg = 1;
//         for(int i=0; i<n; i++){
//             cin>>x;
//             a[x]++;
//         }
//         for(int i=0; i<n; i++){
//             cin>>x;
//             b[x]++;
//         }
//         auto j = b.begin();
//         for(auto i=a.begin(); i!=a.end(); i++){
//             if(i->first != j->first || i->second != j->second){
//                 fg = 0;
//                 break;
//             }
//             j++;
//         }
//         cout<<fg<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n);
//         for(int i=0; i<n; i++) cout<<a[i]<<" ";
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     while(t--){
//         string s; int f = 0; cin>>s;
//         for(int i=s.length()-1; i>=0; i--){
//             if(s[i] == '1'){
//                 cout<<i;
//                 f = 1;
//                 break;
//             }
//         }
//         if(f == 0) cout<<-1;
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], cnt = 0;
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n);
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k=j+1; k<n; k++){
//                     if(a[i] + a[j] > a[k] &&
//                     a[j] + a[k] > a[i] &&
//                     a[k] + a[i] > a[j]) cnt++;
//                 }
//             }
//         }
//         cout<<cnt;
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, k;
//     cin>>t;
//     while(t--){
//         cin>>n>>k;
//         map<int, int> m; int a[n], ans = -1;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             m[a[i]]++;
//         }
//         for(int i=0; i<n; i++){
//             if(m[a[i]] == 2){
//                 ans = a[i];
//                 break;
//             }
//         }
//         cout<<ans<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, d;
//     cin>>t;
//     while(t--){
//         cin>>n>>d;
//         int c[n], p[n], f = 0;
//         for(int i=0; i<n; i++) cin>>c[i];
//         for(int i=0; i<n; i++) cin>>p[i];
//         if(d%2 == 0){
//             for(int i=0; i<n; i++){
//                 if(c[i]%2 != 0) f += p[i];
//             }
//         } else{
//             for(int i=0; i<n; i++){
//                 if(c[i]%2 == 0) f += p[i];
//             }
//         }
//         cout<<f<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     FastIO
//     int t, n, x;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], f = -1, l = -1;
//         for(int i=0; i<n; i++) cin>>a[i];
//         cin>>x;
//         for(int i=0; i<n; i++){
//             if(a[i] == x){
//                 f = i;
//                 break;
//             }
//         }
//         for(int i=n-1; i>=0; i--){
//             if(a[i] == x){
//                 l = i;
//                 break;
//             }
//         }
//         if(f == -1) cout<<-1<<"\n";
//         else cout<<f<<" "<<l<<"\n";
//     }
// } 

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int m, n, i=0, j=0;
//     cin>>m; int a[m];
//     for(int i=0; i<m; i++) cin>>a[i];
//     cin>>n; int b[n];
//     for(int i=0; i<n; i++) cin>>b[i];
//     while(i<m && j<n){
//         if(a[i] < b[j]){
//             cout<<a[i]<<" ";
//             i++;
//         } else if(a[i] > b[j]){
//             cout<<b[j]<<" ";
//             j++;
//         } else {
//             cout<<a[i]<<" "<<b[j]<<" ";
//             i++, j++;
//         }
//     }
//     while(i<m) {
//         cout<<a[i]<<" ";
//         i++;
//     }
//     while(j<n) {
//         cout<<b[j]<<" ";
//         j++;
//     }
// } a/c

// #include<iostream>
// using namespace std;
// int main(){
//     int t = 10, T = 0;
//     while(--t){ T++; }
//     cout<<t<<" = t evaluates "<<T<<" test cases"<<"\n";
//     t = 10, T = 0;
//     while(t--){ T++; }
//     cout<<t<<" = t evaluates "<<T<<" test cases";
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, s;
//     cin>>t; 
//     while(t--){
//         cin>>n>>s;
//         ll a[n], i = 0, j = 0, sum = 0;
//         for(ll i=0; i<n; i++) cin>>a[i];
//         while(1){
//             if(sum < s){
//                 sum += a[j];
//                 j++;
//             }
//             else if(sum > s){
//                 sum -= a[i];
//                 i++;
//             } 
//                 if(sum == s || j>=n || i>=n) break;
            
//         }
//         if(sum == s) cout<<i+1<<" "<<j<<"\n";
//         else cout<<-1<<"\n";
//     }
// }  a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; 
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], cmp; stack<int> s;
//         for(int i=0; i<n; i++) cin>>a[i];
//         s.push(a[n-1]); cmp = a[n-1];
//         for(int i=n-2; i>=0; i--){
//             if(a[i] >= cmp){
//                 cmp = a[i];
//                 s.push(cmp);
//             }
//         }
//         while(s.size() > 0){
//             cout<<s.top()<<" ";
//             s.pop();
//         }
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], pr_a[n] = {0}, po_a[n] = {0}, x = 0;
//         for(int i=0; i<n; i++) cin>>a[i];
//         for(int i=0; i<n; i++){
//             x += a[i];
//             pr_a[i] = x;
//         } x = 0;
//         for(int i=n-1; i>=0; i--){
//             x += a[i];
//             po_a[i] = x;
//         }
//         for(int i=0; i<n; i++){
//             if(pr_a[i] == po_a[i]){
//                 cout<<i+1<<"\n";
//                 break;
//             }
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n);
//         for(int i=0; i<n; i++) cout<<a[i]<<" ";
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, m, x; 
//     cin>>t;
//     while(t--){
//         cin>>n>>m>>x;
//         int a[n], b[m]; vector<pair<int, int>> v;
//         for(int i=0; i<n; i++) cin>>a[i];
//         for(int i=0; i<m; i++) cin>>b[i];
//         sort(a, a+n), sort(b, b+m);
//         for(int i=0; i<n; i++){
//             //if(a[i] <= x){
//                 if(binary_search(b, b+m, x-a[i])) v.push_back(pair<int, int>(a[i], x-a[i]));
//             //} else break;
//         }
//         if(v.size() == 0) cout<<-1<<"\n";
//         else{
//             for(int i=0; i<v.size(); i++){
//                 if(i != v.size()-1){
//                     cout<<v[i].first<<" "<<v[i].second<<", ";
//                 } else cout<<v[i].first<<" "<<v[i].second<<"\n";
//             }
//         }
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     int a[n], f = 1, curr_max = 0, i = 0, j = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     while(1){
//         if(a[j] - a[i] <= 1){
//             j++;
//             curr_max++;
//         } else{
//             i++;
//             curr_max--;
//         }
//         f = max(f, curr_max);
//         if(j == n) break;     
//     }
//     cout<<f;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, p = 0, i = 0, cnt = 0; cin>>n; int a[n+2]; string s; cin>>s;
//     a[0] = 0, a[n+1] = 0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] == 'D') p--;
//         else p++;
//         a[i+1] = p;
//     }
//     while(i < n+1){
//         if(a[i] == 0 && a[i+1] < 0) {
//             cnt++;
//             i++;
//             while(a[i] != 0 && i < n) i++;
//         } else i++;        
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n, m, s;
//     cin>>t;
//     while(t--){
//         cin>>n>>m>>s;
//         ll x = (m-1)%n + s;
//         if(x > n) x = x%n;
//         cout<<x<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, k, q, qi;
//     cin>>n>>k>>q; k = k%n;
//     int a[n]; vector<int> v;
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=n-k; i<n; i++) v.push_back(a[i]);
//     for(int i=0; i<n-k; i++) v.push_back(a[i]);
//     while(q--){
//         cin>>qi;
//         cout<<v[qi]<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, k, e = 100, i = 0; cin>>n>>k;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     while(1){
//         i = (i+k)%n;
//         e--;
//         if(a[i] == 1) e-=2;
//         if(i == 0) break;
//     }
//     cout<<e;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s, t; int n, k = 0; cin>>s>>t>>n;
//     for(int i=0; i<min(s.length(), t.length()); i++){
//         if(s[i] != t[i]){
//             k = i;
//             break;
//         }
//     }
//     int a = s.length()-k, b = t.length()-k;
//     int x = n-a-b;
//     if(x < 0) cout<<"No";
//     else if(x%2 == 0) cout<<"Yes";
//     else{
//         if(x >= 2*k) cout<<"Yes";
//         else cout<<"No";
//     }
// } w/a

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, x; cin>>n;
//     map<int, int> m;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         m[x]++;
//     }
//     cout<<n<<"\n";
//     for(auto i=m.begin(); i!=m.end(); i++){
//         n -= i->second;
//         if(n != 0) cout<<n<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     string s; ll n, cnt = 0, ac = 0; cin>>s>>n;
//     for(ll i=0; i<s.length(); i++) if(s[i] == 'a') ac++;
//     cnt += ac*(n/s.length());
//     for(ll i=0; i<n%s.length(); i++) if(s[i] == 'a') cnt++;
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     int a[n+1], i = 0, cnt = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     a[n] = 0;
//     while(i < n){
//         if(i == n-1) break;
//         if(a[i+1] == 0 && a[i+2] == 0) cnt++, i += 2;
//         else if(a[i+1] == 0 && a[i+2] == 1) cnt++, i++;
//         else if(a[i+1] == 1 && a[i+2] == 0) cnt++, i+=2;
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, m; cin>>n>>m;
//     string s[n];
//     for(int i=0; i<n; i++) cin>>s[i];
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<m; j++){
//             string x = s[i], y = s[j];
//             for(int k=0; k<x.length(); k++){
//                 y.replace(k, k+1, to_string((x[k]-48|y[k]-48)));
//             }

//         }
//     }
// } pending

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, b, w, bc, wc, z;
//     cin>>t;
//     while(t--){
//         cin>>b>>w>>bc>>wc>>z;
//         cout<<min({b*bc + w*wc, b*bc + w*(bc+z), b*(wc+z) + w*wc})<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll p, q, fg = 0; cin>>p>>q;
//     for(ll i=p; i<=q; i++){
//         string x = to_string(i), x2 = to_string(i*i);
//         if(2*x.length() == x2.length()){
//             if(stoi(x2.substr(0, x.length())) + stoi(x2.substr(x.length(), x.length())) == stoi(x)){
//                 fg = 1;
//                 cout<<i<<" ";
//             }
//         } else{
//             string x2m = "0" + x2;
//             if(stoi(x2m.substr(0, x.length())) + stoi(x2m.substr(x.length(), x.length())) == stoi(x)){
//                 fg = 1;
//                 cout<<i<<" ";
//             }
//         }
//     }
//     if(fg == 0) cout<<"INVALID RANGE";
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, d; 
//     cin>>n>>d;
//     int a[n], cnt = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++){
//         if(binary_search(a+i, a+n, a[i]+d) && binary_search(a+i, a+n, a[i]+(2*d))) cnt++;
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int p, d, m, s, cnt = 0;
//     cin>>p>>d>>m>>s;
//     while(p > m && s > min(p, m)){
//         s -= p;
//         cnt++;
//         p -= d;
//     } 
//     cnt += s/m;
//     cout<<cnt;
// } failing on 1/52 tc

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s; int cnt = 0; cin>>s;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] >= 65 && s[i] <= 90) cnt++;
//     }
//     cout<<cnt+1;
// } a/c

// Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, d = 0, uc = 0, lc = 0, sc = 0, cnt = 0; cin>>n;
//     string s, scs = "!@#$%^&*()-+"; cin>>s;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] >= 65 && s[i] <= 90) uc = 1;
//         if(s[i] >= 48 && s[i] <= 57) d = 1;
//         if(s[i] >= 97 && s[i] <= 122) lc = 1;
//     }
//     for(int i=0; i<scs.length(); i++){
//         for(int j=0; j<s.length(); j++){
//             if(scs[i] == s[i]){
//                 sc = 1;
//                 break;
//             }
//         }
//     }
//     if(d == 0) cnt++;
//     if(uc == 0) cnt++;
//     if(lc == 0) cnt++;
//     if(sc == 0) cnt++;
//     int l = cnt + s.length();
//     if(l < 6) cout<<6;
//     else cout<<l;
// } pending

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, c, m;
//     cin>>t;
//     while(t--){
//         cin>>n>>c>>m;
//         int cnt = 0, w = n/c;
//         cnt += w;
//         while(1){
//             if(w >= m){
//                 cnt += w/m;
//                 w = w/m + w%m;
//             } else break;
//         }
//         cout<<cnt<<"\n";
//     }
// } a/c

// Complete this asap, problem statement link https://bit.ly/3iX8mWo 
// Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], max_arr[n], min_arr[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         int x = a[0];
//         for(int i=0; i<n; i++){
//             x = max(x, a[i]);
//             max_arr[i] = x;
//         } x = a[n-1];
//         for(int i=n-1; i>=0; i--){
//             x = min(x, a[i]);
//             min_arr[i] = x;
//         }
//         x = -1;
//         for(int i=0; i<n; i++){
//             if(max_arr[i] == min_arr[i] && i!=0 && i!=n-1){
//                 x = a[i];
//                 break;
//             }
//         }
//         cout<<x<<"\n";
//     }
// } 
 
// // hackerrank left rotation - ds
// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, k; cin>>n>>k;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=k; i<n; i++) cout<<a[i]<<" ";
//     for(int i=0; i<k; i++) cout<<a[i]<<" ";
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t; cin>>t;
//     while(t--){
//         string s, st = ""; getline(cin, s, '\n');
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         for(int i=0; i<s.length(); i++){
//             if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
//                 st.append(s.substr(i, 1));
//             }
//         }
//         string str = st;
//         reverse(str.begin(), str.end());
//         if(st == str) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } pending solution non-ac

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//    if(n == 1) return 0;
//    int fg = 0;
//    for(int i=2; i<=sqrt(n); i++){
//       if(n%i == 0){
//          fg = 1;
//          break;
//       }
//    }
//    return fg == 1 ? 0 : 1;
// }
// int main(){
//    int n; string s, a = "", b = ""; cin>>n>>s;
//    for(int i=0; i<s.length(); i++){
//       if(isPrime(s[i])) a.append(s.substr(i, 1));
//       else b.append(s.substr(i, 1));
//    }
//    sort(a.begin(), a.end());
//    sort(b.begin(), b.end());
//    reverse(b.begin(), b.end());
//    cout<<a<<b;
// } a/c


// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define mod 1000000007
// using ll = unsigned long long;
// using namespace std;
// ll modExp(ll a, ll b){
//     if(b == 0) return 1;
//     if(b == 1) return a;
//     else{
//         ll res = modExp(a, b/2)%mod;
//         if(b%2 == 0) return (res%mod * res%mod)%mod;
//         else return (res%mod * res%mod * a)%mod;
//     }
// }
// int main(){
//     ll t, a, b, n; cin>>t;
//     while(t--){
//         cin>>a>>b>>n;
//         if(n%2 == 0){
//             ll x = modExp(2, (n/2) - 1);
//             cout<<(x*(b-a))%mod<<" "<<(x*(b+a))%mod<<"\n";
//         } else {
//             n++;
//             ll x = modExp(2, (n/2) - 1);
//             cout<<(x*a)%mod<<" "<<(x*b)%mod<<"\n";
//         }
//     }
// } 

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], sum = 0;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             sum += a[i];
//         }
//         if(sum < 0) cout<<"NO"<<"\n";
//         else cout<<"YES"<<"\n";
//     }
// } a/c - codechef sept lunchtime div 2 prblm 1

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], fg = 0;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             if((i+1)%a[i] != 0) fg = 1;
//         }
//         if(fg == 0) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// } a/c - codechef sept lunchtime div 2 prblm 2

// Aditya @ydasc815
// this problem implements a new concept* : using getline throughout to input long space seperated strings PER TEST CASE
// using cin with getline does not work and getline gets skipped while inputting the string
// therefore we use getline only to input the test case value as a string then parse it to int and then then we input strings
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string in; getline(cin, in);
//     stringstream linestream(in); 
//     int t; linestream>>t;
//     while(t--){
//         string s, st = ""; getline(cin, s);
//         transform(s.begin(), s.end(), s.begin(), ::tolower);
//         for(int i=0; i<s.length(); i++){
//             if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57)) {
//                 st.append(s.substr(i, 1));
//             }
//         }
//         string str = st;
//         reverse(str.begin(), str.end());
//         if(st == str) cout<<"YES"<<"\n";
//         else cout<<"NO"<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n];
//         for(int i=0; i<n; i++) cin>>a[i];
//         if(n%2 == 0){
//             for(int i=0; i<n; i+=2){
//                 cout<<a[i+1]<<" "<<a[i]<<" ";
//             }
//         } else{
//             for(int i=0; i<n-1; i+=2){
//                 cout<<a[i+1]<<" "<<a[i]<<" ";
//             }
//             cout<<a[n-1]<<" ";
//         }
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, m, n, x; cin>>t;
//     while(t--){
//         cin>>m>>n; int fg = 0;
//         map<int, int> a, b;
//         for(int i=0; i<m; i++){
//             cin>>x;
//             a[x]++;
//         }
//         for(int i=0; i<n; i++){
//             cin>>x;
//             b[x]++;
//         }
//         for(auto i=b.begin(); i!=b.end(); i++){
//             if(a[i->first] < i->second) {
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0) cout<<"Yes"<<"\n";
//         else cout<<"No"<<"\n";
//     }
// } a/c


// // Aditya @ydasc815
// #include <iostream> 
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std; 
// void heapify(int a[], int n, int i) { 
// 	int mx = i; 
// 	int l = (2*i) + 1;
// 	int r = (2*i) + 2;
// 	if (l < n && a[l] > a[mx]) 
// 		mx = l; 
// 	if (r < n && a[r] > a[mx]) 
// 		mx = r; 
// 	if (mx != i) { 
// 		swap(a[i], a[mx]); 
// 		heapify(a, n, mx); 
// 	} 
// } 

// int main(){ 
//     FastIO
//     int n; cin>>n;
//     int a[n], fg = 0;
//     if(n == 0) fg = 1;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//         if(a[i] <= 0) fg = 1;
//     }
//     if(fg == 0){
//         int k = (n/2) - 1;
//         for(int i=k; i>=0; i--){
//             heapify(a, n, i);
//         }
//         for(int i=0; i<n; i++) cout<<a[i]<<" ";
//     } else cout<<-1;
// } // solution to daa lab 28-09-2020

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         string s; vector<int> v;
//         for(int i=0; i<n; i++){
//             cin>>s;
//             int fg = 0;
//             for(int j=0; j<s.length(); j++){
//                 if(s[j] != '1' && s[j] != '2' && s[j] != '3'){
//                     fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 0) v.push_back(stoi(s));
//         }
//         sort(v.begin(), v.end());
//         if(v.size() == 0) cout<<-1;
//         else for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
//         cout<<"\n";
//     }    
// } a/c - gfg problem

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], fg = 0; map<int, int> m;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             m[a[i]]++;
//         }
//         for(int i=0; i<n; i++){
//             if(m[a[i]] > 1){
//                 cout<<i+1<<"\n";
//                 fg = 1;
//                 break;
//             }
//         }
//         if(fg == 0) cout<<-1<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, a, b;
//     cin>>t;
//     vector<ll> sq;
//     for(ll i=1; i<=sqrt(1e9); i++) if(sqrt(i)*sqrt(i) == i) sq.push_back(i);
//     while(t--){
//         cin>>a>>b;
//         ll x = 0, y = 0;
//         if(sqrt(a)*sqrt(a) == a) x = lower_bound(sq.begin(), sq.end(), a) - sq.begin();
//         else x = upper_bound(sq.begin(), sq.end(), a) - sq.begin();
//         if(sqrt(b)*sqrt(b) == b) y = lower_bound(sq.begin(), sq.end(), b) - sq.begin() + 1;
//         else y = lower_bound(sq.begin(), sq.end(), b) - sq.begin();
//         cout<<y<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, a, b;
//     cin>>t;
//     vector<ll> sq;
//     for(ll i=1; i<=sqrt(1e9); i++) if(sqrt(i)*sqrt(i) == i) sq.push_back(i);
//     while(t--){
//         cin>>a>>b;
//         ll x, y;
//         x = lower_bound(sq.begin(), sq.end(), a) - sq.begin(), y = lower_bound(sq.begin(), sq.end(), b) - sq.begin();
//         //if(sqrt(b)*sqrt(b) != b) y--;
//         cout<<x<<"\n";
//     }
// } madarchod panti ki bhi hadd hoti hai 

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, m, n;
//     cin>>t;
//     while(t--){
//         cin>>m>>n;
//         int a[m][n], sp[m][n];
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 cin>>a[i][j];
//                 sp[i][j] = 0;
//             }
//         }
//         int ilr = 0, jtb = n-1, irl = m-1, jbt = 0;
//         while(1){
//             if(ilr < m) for(int i=0; i<n; i++) if(sp[ilr][i] == 0){
//                 cout<<a[ilr][i]<<" ";
//                 sp[ilr][i] = 1;
//             }
//             if(jtb >= 0) for(int i=0; i<m; i++) if(sp[i][jtb] == 0){
//                 cout<<a[i][jtb]<<" ";
//                 sp[i][jtb] = 1;
//             }
//             if(irl >= 0) for(int i=n-1; i>=0; i--) if(sp[irl][i] == 0){
//                 cout<<a[irl][i]<<" ";
//                 sp[irl][i] = 1;
//             }
//             if(jbt < n) for(int i=m-1; i>=0; i--) if(sp[i][jbt] == 0){
//                 cout<<a[i][jbt]<<" "; 
//                 sp[i][jbt] = 1;
//             }
//             ilr++, jtb--, irl--, jbt++;
//             if(ilr == m && jtb == -1 && irl == -1 && jbt == n) break;
//         }
//         cout<<"\n";
//     }
// } not working

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, x; cin>>t;
//     while(t--){
//         cin>>n>>x;
//         int a[n], fg = 0;
//         for(int i=0; i<n; i++) cin>>a[i];
//         sort(a, a+n);
//         for(int i=0; i<n; i++){
//             int j=0, k=n-1;
//             if(j == i) j++;
//             if(k == i) k--;
//             while(j < k){
//                 if(j == i) j++;
//                 if(k == i) k--;
//                 if(a[j] + a[k] < x - a[i]) j++;
//                 else if(a[j] + a[k] > x - a[i]) k--;
//                 else{
//                     fg = 1;
//                     break;
//                 }
//             }
//             if(fg == 1) break;
//         }
//         cout<<fg<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, x; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], fg = 0;
//         for(int i=0; i<n; i++) cin>>a[i];
//         cin>>x;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 for(int k=j+1; k<n; k++){
//                     for(int l=k+1; l<n; l++){
//                         if(a[i] + a[j] + a[k] + a[l] == x){
//                             fg = 1;
//                             break;
//                         }
//                     }
//                     if(fg == 1) break;
//                 }
//                 if(fg == 1) break;
//             }
//             if(fg == 1) break;
//         }
//         cout<<fg<<"\n";
//     }
// } a/c -_- pta nhi kaise accept hogya || complexity approaches ~O(n^5)

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], x = -1;
//         for(int i=0; i<n; i++) cin>>a[i];
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 if(a[j] > a[i]) x = max(x, a[j] - a[i]);
//             }
//         }
//         cout<<x<<"\n";
//     }
// } tle - ~O(n^3) solution for gfg - max diff

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], x = -1;
//         map<int, int> m;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             m[a[i]] = i;
//         }
//         sort(a, a+n);
//         for(int i=0; i<n; i++){
//             for(int j=n-1; j>i; j--){
//                 if(m[a[i]] < m[a[j]]){
//                     x = max(x, a[j] - a[i]);
//                 }
//             }
//         }
//         cout<<x<<"\n";
//     }
// } 

// // Aditya @ydasc815
// #include<iostream>
// #include<vector>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, x, in;
//     cin>>n; vector<int> v;
//     for(int i=0; i<n; i++){
//         cin>>in;
//         if(in >= 0){
//             v.push_back(in);
//             cout<<1<<" ";
//         } else cout<<-1<<" ";
//     } cout<<"\n";
//     cin>>x; int fg = 0;
//     for(int i=v.size()-1; i>=0; i--){
//         if(v[i] == x){
//             cout<<v[i]<<"\n";
//             fg = 1;
//             v[i] = -1;
//             break;
//         }
//     }
//     if(fg == 0) cout<<-1<<"\n";
//     fg = 0;
//     for(int i=v.size()-1; i>=0; i--){
//         if(v[i] >= 0) {
//             fg = 1;
//             cout<<v[i]<<" ";
//         }
//     }
//     if(fg == 0) cout<<-1<<" ";
// } 

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n, a, b; cin>>t;
//     while(t--){
//         cin>>n>>a>>b;
//         for(int i=0; i<n; i++) cout<<(char)((i+97)%b + 97);
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     // performing a sort of array of 0s, 1s and 2s without using any sorting algorithm
//     int t, n, x; cin>>t;
//     while(t--){
//         cin>>n;
//         int v0 = 0, v1 = 0, v2 = 0;
//         for(int i=0; i<n; i++){
//             cin>>x;
//             if(x == 0) v0++;
//             else if(x == 1) v1++;
//             else v2++;
//         }
//         for(int i=0; i<v0; i++) cout<<0<<" ";
//         for(int i=0; i<v1; i++) cout<<1<<" ";
//         for(int i=0; i<v2; i++) cout<<2<<" ";
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using ll = unsigned long long;
// using namespace std;
// int main(){
//     FastIO
//     ll t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         for(int i=2; i<=29; i++){
//             if(n%(ll)(pow(2, i) - 1) == 0) {
//                 ll x = n/(pow(2, i) - 1);
//                 cout<<x<<"\n";
//                 break;
//             }
//         }
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n; int ans = 0, a[n], mx[n] = {0}, mn[n] = {0}, x, y;
//         for(int i=0; i<n; i++) cin>>a[i];
//         x = a[0], y = a[n-1];
//         for(int i=0; i<n; i++){
//             if(a[i] < x) x = a[i];
//             mn[i] = x;
//         }
//         for(int i=n-1; i>=0; i--){
//             if(a[i] > y) y = a[i];
//             mx[i] = y;
//         }
//         for(int i=0; i<n; i++){
//             if(mx[i] - mn[i] > ans) ans = mx[i] - mn[i];
//         }
//         if(ans == 0) cout<<-1<<"\n";
//         else cout<<ans<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     list<int> li; // stl function for linkedlist
// }

// // daa lab 27-10-2020
// // Aditya @ydasc815
// #include<iostream>
// #define null NULL
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// typedef struct node{
//   int key;
//   struct node *left, *right;
// }Node;
// Node *create(int item){
//   Node *temp = new Node();
//   temp->key = item;
//   temp->left = temp->right = null;
//   return temp;
// }
// int height(Node* node){ 
//     if (node == null) 
//         return 0; 
//     else{ 
//         int lh = height(node->left); 
//         int rh = height(node->right); 
//         if (lh > rh) return lh+1; 
//         else return(rh+1); 
//     } 
// }
// void printnode(Node* root, int level) 
// { 
//     if (root == null) return;
//     if (level == 1){
//         cout<<root->key<<" ";        
//     }
//     else if (level > 1){ 
//         printnode(root->left, level-1); 
//         printnode(root->right, level-1); 
//     } 
// }   
// void Order(Node* root){ 
//     int h = height(root); 
//     int i; 
//     for (i=1; i<=h; i++) printnode(root, i); 
// } 
// Node *insert(Node *node, int key) {
//   if (node == null) return create(key);
//   if (key < node->key) node->left = insert(node->left, key);
//   else node->right = insert(node->right, key);
//   return node;
// }

// int main(){
//     FastIO
//     Node *root = null;
//     int n, a; cin>>n;
//     if(n == 0) cout<<-1<<"\n";
//     for(int i=0; i<n; i++){
//         cin>>a;
//         if(a < 0) cout<<-1<<"\n";
//         else root = insert(root, a);
//     }
//     Order(root);
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, x, s = 0; cin>>n;
//     for(int i=0; i<n-1; i++){
//         cin>>x;
//         s += x;
//     }
//     x = n*(n+1)/2;
//     cout<<x - s;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, cnt = 0; cin>>n;
//     while(n != 0){
//         vector<int> v;
//         int t = n;
//         while(t > 0){
//             v.push_back(t%10);
//             t /= 10;
//         }
//         sort(v.begin(), v.end());
//         n -= v[v.size()-1];
//         cnt++;
//     }
//     cout<<cnt;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define int long long
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     cout<<n<<" ";
//     while(n != 1){
//         if(n%2 == 0){
//             n /= 2;
//             cout<<n<<" ";
//         } else{
//             n *= 3; n++;
//             cout<<n<<" ";
//         }
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define int long long
// using namespace std;
// signed main(){
//     FastIO
//     int n, x; cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     sort(a, a+n);
//     x = a[n-1];
//     for(int i=1; i<n; i++){
//         a[i] = a[i] + a[i-1];
//     }
//     cout<<max(a[n-1], 2*x);
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, x, y, cnt = 0, t = 0; cin>>n;
//     map<int, int> m;
//     for(int i=0; i<n; i++){
//         cin>>x>>y;
//         if(m[x] == 0) m[x] = y;
//         else if(m[x] > 0){
//             if(y < m[x]) m[x] = y;
//         }
//     }
//     for(auto i=m.begin(); i!=m.end(); i++){
//         if(i->first >= t){
//             cnt++;
//             t = i->second;
//         }
//     }
//     cout<<cnt;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int r, x = 2;
//     float y = 5;
//     r = y%x;
//     cout<<r;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int sum(int n){
//     if(n == 1) return 1;
//     else return n + sum(n-1);
// }
// int main(){
//     FastIO
//     cout<<sum(5);
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int minA(int a[], int size){
    
// }
// int main(){
//     FastIO
//     int a[10] = {5, 6, 3, 2, 9, 11, 10, -3, -4, 7};
//     cout<<minA(a, 10);
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int a[3][3], b[3][3];
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cin>>a[i][j];
//             b[i][j] = 0;
//         }
//     }
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             b[i][j] += a[i][j];
//             if(i-1 >= 0) b[i][j] += a[i-1][j];
//             if(j+1 < 3) b[i][j] += a[i][j+1];
//             if(i+1 < 3) b[i][j] += a[i+1][j];
//             if(j-1 >= 0) b[i][j] += a[i][j-1];
//             if(b[i][j]%2 == 0) b[i][j] = 1;
//             else b[i][j] = 0;
//         }
//     }
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<b[i][j];
//         }
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s; cin>>s;
//     int u = 0, l = 0;
//     for(int i=0; i<s.length(); i++){
//         if(isupper(s[i])) u++;
//         else l++;
//     }
//     if(u > l){
//         for(int i=0; i<s.length(); i++){
//             if(islower(s[i])) s[i] -= 32;
//         }
//     } else if(l > u){
//         for(int i=0; i<s.length(); i++){
//             if(isupper(s[i])) s[i] += 32;
//         }
//     } else{
//         for(int i=0; i<s.length(); i++){
//             if(isupper(s[i])) s[i] += 32;
//         }
//     }
//     cout<<s;
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s; cin>>s;
//     int cn = 0, f = 0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] == '4' || s[i] == '7') cn++;
//     }
//     string scn = to_string(cn);
//     for(int i=0; i<scn.length(); i++){
//         if(scn[i] != '4' && scn[i] != '7'){
//             f = 1;
//             break;
//         }
//     }
//     if(f == 0) cout<<"YES";
//     else cout<<"NO";
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// bool isPrime(int n){
//     int fg = 0;
//     if(n == 1) return 0;
//     if(n%2==0 && n!=2) return 0;
//     else{
//         for(int i=2; i<=sqrt(n); i++){
//             if(n%i==0){
//                 fg = 1;
//                 break;
//             }
//         }
//         return fg == 1 ? 0 : 1;
//     }
// }
// int main(){
//     FastIO
//     int n, m, f = 0; cin>>n>>m;
//     if(!isPrime(n) || !isPrime(m)) cout<<"NO";
//     else {
//         for(int i=n+1; i<m; i++){
//             if(isPrime(i)){
//                 f = 1;
//                 break;
//             }
//         }
//         if(f == 0) cout<<"YES";
//         else cout<<"NO";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define int long long
// using namespace std;
// int main(){
//     FastIO
//     int t, n, k, s; cin>>t;
//     for(int i=1; i<=t; i++){
//         cin>>n>>k>>s;
//         cout<<"Case #"<<i<<": "<<min(n + (2*k) - (2*s), n + k)<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// #define int unsigned long long
// using namespace std;
// int solve(int l, int r){
//     int c = 0;
//     for(int i=l; i<=r; i++){
//         int f = 0;
//         string x = to_string(i);
//         for(int j=0; j<x.length(); j++){
//             if((x[j]-48)%2 != (j+1)%2){
//                 f = 1;
//                 break;
//             }
//         }
//         if(f == 0) c++;
//     }
//     return c;
// }
// signed main(){
//     FastIO
//     int t, l, r; cin>>t;
//     for(int i=1; i<=t; i++){
//         cin>>l>>r;
//         cout<<"Case #"<<i<<": "<<solve(l, r)<<"\n";
//     }
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n, cnt = 0; cin>>n; int a[n];
//     for(int i=0; i<n; i++) cin>>a[i];
//     int mx = a[0], mn = a[0];
//     for(int i=1; i<n; i++){
//         if(a[i] > mx) {
//             cnt++;
//             mx = a[i];
//         }
//         if(a[i] < mn) {
//             cnt++;
//             mn = a[i];
//         }
//     }
//     cout<<cnt;
// }

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s, o = ""; cin>>s;
//     map<int, int> m; int f = 0;
//     for(int i=0; i<s.length(); i++){
//         if(s[i] >= 48 && s[i] <= 57){
//             m[s[i]-48]++;
//         }
//     } if(m[3] > 0) f = 1;    
//     while(m[1]--){
//         o.append("1+");
//     }  
//     while(m[2]--){
//         o.append("2+");
//     }    
//     while(m[3]--){
//         o.append("3+");
//     }    
//     o.erase(o.length()-1);
//     cout<<o;
// }

// fixed a bug in PayO internship app - time 10 hours

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     string a[n], x; int f = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     cin>>x;
//     for(int i=0; i<n; i++){
//         if(a[i] == x){
//             f = 1;
//             cout<<x;
//             break;
//         }
//     }
//     cout<<f;
// }

// fixing bugs in payo app

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, x; cin>>n;
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         cin>>x;
//         if(x == 1) v.push_back(i);
//     } x = 0;
//     for(int i=1; i<v.size(); i++){
//         x = max(x, v[i] - v[i-1] + 1);
//     }
//     cout<<x;
// }

// // // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, x, s = 0, s1 = 0; cin>>n;
//     vector<int> v; v.push_back(0);
//     for(int i=0; i<n; i++){
//         cin>>x;
//         if(x == 1) v.push_back(i);
//     } x = 0;
//     v.push_back(n-1);
//     for(int i=0; i<v.size(); i++){
//         s1 = 0;
//         for(int j=i+1; j<v.size(); j++){
//             if(v[j] - v[i] == 1) s1++;
//             else {
//                 s1 += v[j] - v[i];
//                 s = max(s, s1); 
//                 break;
//             }
//         }
//     }
//     cout<<s;
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int n; cin>>n;
//     string a[n], x; int f = 0;
//     for(int i=0; i<n; i++) cin>>a[i];
//     cin>>x;
//     for(int i=0; i<n; i++){
//         if(a[i] == x){
//             f = 1;
//             cout<<x;
//             break;
//         }
//     }
//     cout<<f;
// }

// #include <bits/stdc++.h> 
// using namespace std; 
  
// const int ALPHABET_SIZE = 26; 
  
// // trie node 
// struct TrieNode 
// { 
//     struct TrieNode *children[26]; 
  
//     // isEndOfWord is true if the node represents 
//     // end of a word 
//     bool isEndOfWord; 
// }; 
  
// // Returns new trie node (initialized to NULLs) 
// struct TrieNode *getNode(void) 
// { 
//     struct TrieNode *pNode =  new TrieNode; 
  
//     pNode->isEndOfWord = false; 
  
//     for (int i = 0; i < 26; i++) 
//         pNode->children[i] = NULL; 
  
//     return pNode; 
// } 
  
// // If not present, inserts key into trie 
// // If the key is prefix of trie node, just 
// // marks leaf node 
// void insert(struct TrieNode *root, string key) 
// { 
//     struct TrieNode *pCrawl = root; 
  
//     for (int i = 0; i < key.length(); i++) 
//     { 
//         int index = key[i] - 'a'; 
//         if (!pCrawl->children[index]) 
//             pCrawl->children[index] = getNode(); 
  
//         pCrawl = pCrawl->children[index]; 
//     } 
  
//     // mark last node as leaf 
//     pCrawl->isEndOfWord = true; 
// } 
  
// // Returns true if key presents in trie, else 
// // false 
// bool search(struct TrieNode *root, string key) 
// { 
//     struct TrieNode *pCrawl = root; 
  
//     for (int i = 0; i < key.length(); i++) 
//     { 
//         int index = key[i] - 'a'; 
//         if (!pCrawl->children[index]) 
//             return false; 
  
//         pCrawl = pCrawl->children[index]; 
//     } 
  
//     return (pCrawl != NULL && pCrawl->isEndOfWord); 
// } 
  
// // Driver 
// int main() 
// { 
//     // Input keys (use only 'a' through 'z' 
//     // and lower case) 
//     string keys[] = {"the", "a", "there", 
//                     "answer", "any", "by", 
//                      "bye", "their" }; 
//     int n = sizeof(keys)/sizeof(keys[0]); 
  
//     struct TrieNode *root = getNode(); 
  
//     // Construct trie 
//     for (int i = 0; i < n; i++) 
//         insert(root, keys[i]); 
  
//     // Search for different keys 
//     search(root, "the")? cout << "Yes\n" : 
//                          cout << "No\n"; 
//     search(root, "these")? cout << "Yes\n" : 
//                            cout << "No\n"; 
//     return 0; 
// } 

// // test commit
// // // Aditya @ydasc815
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, x, s = 0, s1 = 0; cin>>n;
//     vector<int> v; v.push_back(0);
//     for(int i=0; i<n; i++){
//         cin>>x;
//         if(x == 1) v.push_back(i);
//     } x = 0;
//     v.push_back(n-1);
//     for(int i=0; i<v.size(); i++){
//         s1 = 0;
//         for(int j=i+1; j<v.size(); j++){
//             if(v[j] - v[i] == 1) s1++;
//             else {
//                 s1 += v[j] - v[i];
//                 s = max(s, s1); 
//                 break;
//             }
//         }
//     }
//     cout<<s;
// }

// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(0);cin.tie(0);
// #define lli long long int
// using namespace std;
// int main(){
//     FastIO
//     lli t; cin>>t;
//     for(lli i=0; i<t; i++){
//         lli n; cin>>n; lli x;
//         lli max_spd = INT_MAX, cnt = 0;
//         for(lli j=0; j<n; j++){
//             cin>>x;
//             if(x<=max_spd){
//                 max_spd = x;
//                 cnt++;
//             }
//         }
//         cout<<cnt<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n, c = 0, x = 0, a, b; cin>>n;
//     while(n--){
//         cin>>a>>b;
//         c = c - a + b;
//         x = max(x, c);
//     }
//     cout<<x;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n; cout<<n<<" ";
//         for(int i=1; i<n; i++) cout<<i<<" ";
//         cout<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     int t, n; cin>>t;
//     while(t--){
//         cin>>n;
//         int a[n], f = 0; map<int, int> m;
//         for(int i=0; i<n; i++){
//             cin>>a[i];
//             m[a[i]]++;
//         }
//         for(auto it=m.begin(); it!=m.end(); it++){
//             if(it->second == 1){
//                 f = 1;
//                 for(int i=0; i<n; i++){
//                     if(a[i] == it->first){
//                         cout<<i+1<<"\n";
//                         break;
//                     }
//                 }
//                 break;
//             }
//         }
//         if(f == 0) cout<<-1<<"\n";
//     }
// } a/c

// // Aditya @ydasc815
// #include<bits/stdc++.h>
// #define FastIO ios::sync_with_stdio(false);cin.tie(nullptr);
// using namespace std;
// int main(){
//     FastIO
//     string s[] = {"GST 0%", "GST 0.25%", "GST 12%", "GST 18%", "GST 28%", "GST 5%", "GST 3%"};
//     sort(s, s+7);
//     for(string x : s) cout<<x<<" ";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0; i<t; i++){
//         int n; cin>>n;
//         int arr[n];
//         for(int j=0; j<n; j++){
//             cin>>arr[j];
//         }
//         int min = arr[0]; int count = 1;
//         for(int j=0; j<n; j++){
//             int a=j-1, b=0;
//             while(a>=0 && b<=5){
//                 if(arr[a] < min){
//                     min = arr[a];
//                     count++;
//                 }
//                 a--; b++;
//             }
//         }
//         cout<<count<<"\n";
//     }
// }