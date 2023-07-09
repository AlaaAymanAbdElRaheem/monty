<h1> Monty languagr interpreter </h1>
<h2> description </h2>
This project is about creating an interpreter for the Monty byte files which relies on the stack data structure.
<h2> compilation </h2>
to compile the interpreter you need to use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
<h2> usage </h2>
To run the interpreter you need to use the following command:

```
./monty file_name
```
where file namr is the file with your Monty byte code in it.

<h2> Monty byte code </h2>
Monty byte code is a language that is compiled into Monty byte files. It relies on a unique stack data structure with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty byte codes.

<nl> </nl>

<h2> Supported operations </h2>
<table>
  <tr>
    <th> Opcode </th>
    <th> Description </th>
  </tr>
  <tr>
    <td> push </td>
    <td> pushes an element to the stack </td>
  </tr>
  <tr>
    <td> pall </td>
    <td> prints all the values on the stack </td>
  </tr>
  <tr>
    <td> pint </td>
    <td> prints the value at the top of the stack </td>
  </tr>
  <tr>
    <td> pop </td>
    <td> removes the top element of the stack </td>
  </tr>
  <tr>
    <td> swap </td>
    <td> swaps the top two elements of the stack </td>
  </tr>
  <tr>
    <td> nop </td>
    <td> does nothing </td>
  </tr>
  <tr>
    <td> add </td>
    <td> adds the top two elements of the stack </td>
  </tr>
  <tr>
    <td> sub </td>
    <td> subtracts the top element of the stack from the second top element of the stack </td>
  </tr>
  <tr>
    <td> div </td>
    <td> divides the second top element of the stack by the top element of the stack </td>
  </tr>
  <tr>
    <td> mul </td>
    <td> multiplies the second top element of the stack with the top element of the stack </td>
  </tr>
  <tr>
    <td> mod </td>
    <td> computes the rest of the division of the second top element of the stack by the top element of the stack </td>
  </tr>
  <tr>
    <td> pchar </td>
    <td> prints the char at the top of the stack </td>
  </tr>
  <tr>
    <td> pstr </td>
    <td> prints the string starting at the top of the stack </td>
  </tr>
  <tr>
    <td> rotl </td>
    <td> rotates the stack to the top </td>
  </tr>
  <tr>
    <td> rotr </td>
    <td> rotates the stack to the bottom </td>
  </tr>
  <tr>
    <td> stack </td>
    <td> sets the format of the data to a stack (LIFO) </td>
  </tr>
  <tr>
    <td> queue </td>
    <td> sets the format of the data to a queue (FIFO) </td>
  </tr>
</table>

<h2> Authors </h2>
<ul>
  <li> <a href="https://github.com/Eileanora">Yasmeen Hany</a> </li>
  <li> <a href="https://github.com/AlaaAymanAbdElRaheem">Alaa Ayman</a> </li>
</ul>

