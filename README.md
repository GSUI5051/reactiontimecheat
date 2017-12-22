# Reaction Time Cheat(reactiontimecheat)
a C++ cheat program for a reaction time test

## The Foreword
As all of us know, the shortest time for human being is 100ms. There's a [simple online tool](https://www.humanbenchmark.com/tests/reactiontime) to measure your reaction time.

But this test is affected by the latency of your computer and monitor. Using a fast computer, wired mouse, and low latency / high framerate monitor will improve your score in this test. View [this](https://www.humanbenchmark.com/tests/reactiontime/statistics) for more detail.

## The Issue
When I visit the leaderbord of this test, I found someone use some cheating method to make themselves become the top in this test. The top of the tester seems as a Steamer who plays CSOL, but he claims that he uses javascript for the test. The 2nd and 3rd might use Console Debugger and Breakpoints in Google Chrome to make them(it) to the top. I tried it but I'm not a web programmer and don't know how it works.

As a smart A.S.S programmer, I remind that using C/C++ to fetch color on the screen and emulates mouse clicking. So I copy and paste some codes and make this Fanytastic Sootuff. 

## The Theory
`COLORREF` to get the color on a certain pixel, `SetCursorPos` and `mouse_event` to emulates mouse clicks, `Sleep()` for delay to make computer "knows" it's from a human not a machine. If there's no delay in your code, it'll display "Too Soon!" because computer recognize that the result is made by machine.

## The Test
I modifying value in `Sleep()` to optimize the final result because of the fluctation of reaction time in basic I/O systems.

## The Result
101ms, the 5th on the leaderbord.

## How to use it?
Compile and use it in a basic or advanced C++ compiler, don't forget to modify the value in `Sleep()` to match the characteristics of your computer.
