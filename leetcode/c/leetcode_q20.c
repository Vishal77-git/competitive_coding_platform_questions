bool isValid(char* s) {
    int len = strlen(s);
    char arr[len];
    int top = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            arr[top++] = s[i];
        }
        else{
            if(top == 0) return false;

            if(s[i] == ')' && arr[top - 1] == '('){
            top--;
            }
            else if(s[i] == '}' && arr[top - 1] == '{'){
                top--;
            }
            else if(s[i] == ']' && arr[top - 1] == '['){
                top--;
            }
            else{
                return false;
            }
        }
    }
    return top == 0;
}