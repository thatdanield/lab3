#include <iostream>

int memo[100];

int naiveG(int n) {
    if (n==0)
        return 0;
    return n - naiveG(naiveG(n-1));
}

int memoizedG(int n) {
    if (n==0) {
        return 0;
    }
    if (memo[n])
        return memo[n];
    memo[n] = n - memoizedG(memoizedG(n-1));
    return memo[n];
}
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    for (int i = 0; i <= 10; i++) {
        std::cout << memoizedG(i) << std::endl;
    }
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}
