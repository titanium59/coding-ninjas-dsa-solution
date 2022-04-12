#include <string>
using namespace std;

// int keypad(int num, string output[]){
//     /* Insert all the possible combinations of the integer number into the output string array. You do not need to
//     print anything, just return the number of strings inserted into the array.
//     */
// 	if(num<2){
//         output[0]="";
//         return 1;
//     }
//     int size=keypad(num/10,output);
//     switch(num%10){
//         case 2:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'b';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'c';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'a';
//             return 3*size;
//     		break;
//     	case 3:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'e';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'f';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'d';
//             return 3*size;
//             break;
    
// 		case 4:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'h';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'i';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'g';
//             return 3*size;
//             break;
    
// 		case 5:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'k';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'l';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'j';
//             return 3*size;
//     		break;
    
// 		case 6:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'n';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'o';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'m';
//             return 3*size;
//     		break;
// 	case 7:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'q';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'r';
// 			for(int i=3*size;i<4*size;i++)
//                 output[i]=output[i-3*size]+'s';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'p';
//             return 4*size;
//     		break;
// 	case 8:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'u';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'v';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'t';
//             return 3*size;
//     		break;
    
// 	case 9:
//             for(int i=size;i<2*size;i++)
//                 output[i]=output[i-size]+'x';
//             for(int i=2*size;i<3*size;i++)
//                 output[i]=output[i-2*size]+'y';
// 			for(int i=3*size;i<4*size;i++)
//                 output[i]=output[i-3*size]+'z';
//             for(int i=0;i<size;i++)
//                 output[i]=output[i]+'w';
//             return 4*size;
//     		break;
//     }
// }

string keypadHelper(int n){
    if(n==2)return "abc";
    if(n==3)return "def";
    if(n==4)return "ghi";
    if(n==5)return "jkl";
    if(n==6)return "mno";
    if(n==7)return "pqrs";
    if(n==8)return "tuv";
    if(n==9)return "wxyz";
    
}



int keypad(int n,string output[]){
    if(n == 0){
        output[0] = "";
        return 1;
    }
    int so = keypad(n/10,output);
    string s=keypadHelper(n%10);
    int ans = so*s.size();
    string temp[100000];
    int k = 0;
    for(int i= 0 ; i < so ; i++){
        for(int j = 0 ; j < s.size() ; j++){
            temp[k] = output[i]+s[j];
            k++;
        }
    }
    for(int i = 0 ; i < ans ; i++){
        output[i] = temp[i];
    }
    return ans;
}

#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
