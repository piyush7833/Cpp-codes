/* C++ implementation to convert
infix expression to postfix*/

#include <bits/stdc++.h>
using namespace std;
void reverse2(string s,int n){  //my code
    if(n<0){
        return ;      //base case
    }
    else{
        cout<<s[n]; //now we print becasue we want reversed string if we need same string then we print after calling recursive fn
        reverse2(s,n-1); 
    }
}
// Function to return precedence of operators
int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{

	stack<char> st; // For stack operations, we are using
					// C++ built in stack
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (c == '(')
			st.push('(');

		// If the scanned character is an ‘)’,
		// pop and to output string from the stack
		// until an ‘(‘ is encountered.
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		// If an operator is scanned
		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}
	// reverse2(result,result.length()); //converting postfix to prefixm
	cout << result << endl;
}

// Driver's code
int main()
{
	string exp = "a+(b*c)";

	// Function call
	infixToPostfix(exp);
	// reverse2(result,result.length());
	return 0;
}

