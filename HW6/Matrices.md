<!DOCTYPE html>
<html>

<!-- Task Description -->
<h1>Task Description</h1>

<p>Using templates, write a class for matrices with arbitrary dimensions.</p>

<h2>Requirements</h2>
<ul>
    <li>Template parameters should include the data type, the number of rows, and the number of columns.</li>
    <li>Overload the operators for matrix addition, subtraction, and multiplication.</li>
    <li>Overload the parentheses operator to allow access to matrix elements by row and column indices.</li>
    <li>Overload the stream extraction operator (>> operator) for displaying the matrix.</li>
    <li>Create a type for row vectors and column vectors without defining separate classes.</li>
</ul>

<h2>Usage Example</h2>
<p>Your class should be usable as shown in the following example:</p>
<pre><code>
int main()
{
    Matrix<float,3,4> A;
    rowVec<int,4> B;
    colVec<int,4> C;
    auto D = B*C;
    auto E = C*B;
    A(1,2)=3;
    B(2)=5;
    C(3)=7;
    cout<<A<<B<<C<<endl;
    return 0;
}
</code></pre>

</html>
