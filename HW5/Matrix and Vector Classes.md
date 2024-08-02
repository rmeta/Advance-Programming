<!DOCTYPE html>
<html>
<!-- Step 1 -->
<h1>Task Description</h1>

<h2>Step 1</h2>
<p>Define three classes: <code>Matrix</code>, <code>HorizontalVector</code>, and <code>VerticalVector</code>.</p>
<ul>
    <li>Matrices are always 2x2.</li>
    <li>Vectors always have a size of 2.</li>
    <li>For each class, define two constructors. For example, you should be able to create a <code>Matrix</code> from four numbers as arguments or from a 4-element array as an argument.</li>
    <li>For the <code>Matrix</code> class, implement at least one of the methods <code>transpose</code> or <code>inverse</code>.</li>
    <li>These methods can either return a new matrix or modify the existing one. Provide a brief explanation of the pros and cons of each design.</li>
    <li>Implement a function to print each class.</li>
</ul>

<h2>Step 2</h2>
<ul>
    <li>Implement operators for multiplication, addition, and subtraction between these classes. You should be able to multiply a matrix by another matrix, a vector, or even a scalar.</li>
    <li>Instead of a print function, make it so that objects can be output using <code>cout</code>. For example, you should be able to write:</li>
</ul>
<pre><code>cout << m << endl;</code></pre>

<h2>Step 3</h2>
<ul>
    <li>In the <code>main</code> function, show how to use the classes you have designed in a few lines.</li>
</ul>

<h2>Optional</h2>
<ul>
    <li>Design the classes in such a way that matrices or vectors of any size can be defined.</li>
    <li>Implement the unary minus operator for the classes so that it performs as multiplication by -1. In this step, instead of writing loops and re-implementing this, use the previously defined multiplication operator with -1.</li>
    <li>Place the classes in a separate namespace.</li>
    <li>Implement the <code>[]</code> operator for vectors.</li>
    <li>Consider whether a <code>[][]</code> operator exists and how you might implement it to allow syntax like <code>m[i][j]</code>.</li>
</ul>
</html>
