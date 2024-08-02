<!DOCTYPE html>
<html lang="en">
<p>Write a program to manage concert tickets. Each ticket consists of a person's name and a seat number. The person's name is a string of lowercase English letters, and the seat number is an integer between 1 and 1000.</p>

<p>The program should have the following capabilities:</p>
<ul>
    <li>Reserve a ticket</li>
    <li>Cancel a ticket</li>
    <li>Check if a specific person has a ticket</li>
    <li>Check if a seat is reserved</li>
</ul>

<p>Input consists of a series of commands as follows:</p>
<ul>
    <li><strong>reserve</strong>: This command takes two parameters, a name and a seat number (in any order), and should issue a ticket with that name and seat number and store it in a list. Print <code>done</code> if successful. If the seat is already taken, print <code>seat not available</code>. If the person already has a ticket and the new seat is available, cancel the previous ticket and issue a new one.</li>

    <li><strong>cancel</strong>: This command takes one parameter, which can be either a seat number or a person’s name. If a seat number is given, cancel the ticket for that seat and free the seat. If a name is given, cancel the ticket for that person and free the seat. Print <code>done</code> if the seat is freed. Print <code>ticket not found</code> if the ticket for the seat number or name does not exist.</li>

    <li><strong>check</strong>: This command can also take one parameter, which can be either a seat number or a person’s name. If a ticket exists for the given person or seat, print <code>yes</code>. Otherwise, print <code>no</code>.</li>
</ul>

<p>Implement the ticket concept as a class. Store the tickets in a vector. Use <code>erase</code> to remove a ticket and <code>push_back</code> to add a ticket.</p>

<p>Assume all people have unique names of up to 20 characters.</p>

<p>Input:</p>
<ul>
    <li>The first line contains an integer representing the number of commands.</li>
    <li>Each subsequent line contains a command with the specified format.</li>
</ul>

<p>Output:</p>
<ul>
    <li>Print the results of the commands according to the specified rules. Finally, print the seat number and name of each ticket in the order they were reserved.</li>
</ul>

<p>Example:</p>
<pre>
Input:
14
check 3
reserve ehsan 3
check 3
check 4
reserve 3 mozart
reserve 4 mozart 
reserve 15 beethoven 
check bach 
check mozart 
cancel vivaldi 
cancel 15 
check beethoven 
reserve 20 beethoven 
reserve beethoven 2

Output:
no
done
yes 
no
seat not available 
done 
done 
no
yes
ticket not found 
done 
no
done 
done
3 ehsan
4 mozart 
2 beethoven
</pre>
</html>
