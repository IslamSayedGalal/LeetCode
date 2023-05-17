//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<cmath>
//#include<queue>
//#include<stack>
//#include<list>
//#include<set>
//#include<map>
//using namespace std;
//void Islam() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//}
//class Solution {
//public:
//    bool isNumeric(string str) {
//        for (int i = 0; i < str.length(); i++)
//            if (str[i] == '-' && i == 0)
//                continue;
//            else if (isdigit(str[i]) == false)
//                return false;
//        return true;
//    }
//    int calPoints(vector<string>& operations) {
//        stack<int> st;
//        long long sum = 0;
//        for (int i = 0; i < operations.size(); i++) {
//            if (isNumeric(operations[i])) {
//                st.push(stoi(operations[i]));
//            }
//            else if (operations[i] == "+") {
//                    int last = st.top();
//                    st.pop();
//                    int temp = (st.top() + last);
//                    st.push(last);
//                    st.push(temp);
//            }
//            else if (operations[i] == "C") {
//                if(st.size())
//                    st.pop();
//            }
//            else if (operations[i] == "D") {
//                int temp = st.top();
//                temp *= 2;
//                st.push(temp);
//            }
//            cout << st.size() << endl;
//        }
//        for (int i = 0; st.size(); i++) {
//            sum += st.top();
//            st.pop();
//        }
//        return sum;
//    }
//};
//int main() {
//    Islam();
//    vector<string> v = { "5","-2","4","C","D","9","+","+"};
//    Solution sol;
//    cout << sol.calPoints(v) << endl;
//    return 0;
//}
//
