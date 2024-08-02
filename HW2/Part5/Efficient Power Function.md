<body>
    <h1>Efficient Power Function</h1>
    <p>Write a function to raise a real number to the power of a positive integer such that the minimum number of multiplications is performed. The program should be implemented as follows:</p>
    <pre>
#include &lt;iostream&gt;
#include &lt;iomanip&gt;

using namespace std;

int main()
{
    double y,x;
    int n;

    cin >> x >> n;

    y = power(x, n);

    cout << setprecision(14) << y;

    return 0;
}
    </pre>
    <h2>Input</h2>
    <p>The input consists of two values. The first value is a real number <code>x</code> and the second value is a positive integer <code>n</code>.</p>
    <h2>Output</h2>
    <p>Print the result of raising <code>x</code> to the power of <code>n</code> with a precision of 14 decimal places.</p>
    <h2>Time and Memory Limits</h2>
    <p>Time Limit: 0.05 seconds</p>
    <p>Memory Limit: 1 MB</p>
    <h2>Example</h2>
    <h3>Sample Input 1</h3>
    <pre>
2.5 3
    </pre>
    <h3>Sample Output 1</h3>
    <pre>
15.625
    </pre>
    <h3>Sample Input 2</h3>
    <pre>
1.1 10
    </pre>
    <h3>Sample Output 2</h3>
    <pre>
2.5937424601
    </pre>
</body>
</html>
