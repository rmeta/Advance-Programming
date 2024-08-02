<!DOCTYPE html>
<html>

<!-- Step 1 -->
<h1>Task Description</h1>

<h2>Step 1</h2>
<p>Define a class for fractions.</p>
<ul>
    <li>This class should have a constructor that takes two numbers as input: the numerator and the denominator of the fraction.</li>
</ul>

<h2>Step 2</h2>
<ul>
    <li>Implement the multiplication and addition operators for fractions.</li>
    <li>Implement comparison operators for fractions.</li>
</ul>

<h2>Step 3</h2>
<p>Test your program in the <code>main</code> function with code similar to this:</p>
<pre><code>
Fraction a(5, 2), b(7, 3);

if (a < b) {      
  cout << "a is less than b" << endl;
} else { 
  cout << "a is not less than b" << endl;
}

Fraction c = a * b;
cout << c.numerator() << endl;    
</code></pre>

<h2>Step 4</h2>
<p>Explain whether you think it's better to define a fraction as a class or a structure. Why? If you prefer using a <code>struct</code>, then use <code>struct</code> for the fraction definition.</p>

</html>
