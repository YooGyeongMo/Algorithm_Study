def solution(s):
    # a = s.count('(')
    # b = s.count(')')
    
    # 반례 '(' ')' 숫자 같은데 ''())(())(()' 이런 경우
    # 단순 '(',')' 일때 +1 -1해도 위 반례때문에 안됨.
    stack = []
    
    for char in s:
        if s[0] == ')' or s[len(s)-1] == '(':
            return False
        if char == ')' and stack[-1] == '(':
            stack.pop()
        if char == '(':
            stack.append(char)    
    
    return False if len(stack) != 0 else True
    # else:
        # return True if a==b else False