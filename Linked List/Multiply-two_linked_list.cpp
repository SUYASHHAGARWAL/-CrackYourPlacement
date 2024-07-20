/*

day4

class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here{
        const long long MOD = 1000000007;

long long num = 0;
long long num2 = 0;

while (second != NULL) {
    num = (num * 10 + second->data) % MOD;
    second = second->next;
}

while (first != NULL) {
    num2 = (num2 * 10 + first->data) % MOD;
    first = first->next;
}

long long ans = (num * num2) % MOD;
return ans;
    }
};

*/