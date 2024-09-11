#include <stdio.h>
#include <ctype.h>

char s[100]; int t = -1;
void push(char c) { s[++t] = c; }
char pop() { return s[t--]; }
int p(char c) { return (c == '+' || c == '-') ? 1 : (c == '*' || c == '/') ? 2 : (c == '^') ? 3 : 0; }

void itop(char* i, char* p) {
    int x = 0, y = 0;
    while (i[x]) {
        if (isalnum(i[x])) p[y++] = i[x];
        else if (i[x] == '(') push(i[x]);
        else if (i[x] == ')') while (s[t] != '(') p[y++] = pop(); pop();
        else while (t != -1 && p(s[t]) >= p(i[x])) p[y++] = pop(); push(i[x]);
        x++;
    }
    while (t != -1) p[y++] = pop();
    p[y] = '\0';
}

int main() {
    char i[100], p[100];
    scanf("%s", i);
    itop(i, p);
    printf("%s\n", p);
    return 0;
}
