typedef struct {
    char data[10000];
    int top;
} Stack;
void StackInit(Stack* s) { s->top = 0; }
void push(Stack* s, char c) {
    s->data[s->top] = c;
    s->top++;
}
char pop(Stack* s) {
    char c = '\0';
    if (s->top > 0) {
        c = s->data[s->top - 1];

        s->top--;
    }
    return c;
}
bool isValid(char* s) {
    Stack s1;
    StackInit(&s1);
    while (*s != '\0') {
        if (*s == '(' || *s == '[' || *s == '{') {
            push(&s1, *s);
        } else {
            char c = pop(&s1);
            if (c == '\0') {
                return false;
            }
            if (c == '(' && *s != ')' || c == '{' && *s != '}' ||
                c == '[' && *s != ']') {
                return false;
            }
        }
        s++;
    }
    if (s1.top > 0) {
        return false;
    }
    return true;
}
