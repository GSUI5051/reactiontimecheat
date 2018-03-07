# Reaction Time Cheat(reactiontimecheat)
A CLI-based C++ cheat program for a reaction time test.

### The Foreword
As all of us know, the shortest time for human being is 100ms. There's a [simple online tool](https://www.humanbenchmark.com/tests/reactiontime) to measure your reaction time.

But this test is affected by the latency of your computer and monitor. Using a fast computer, wired mouse, and low latency / high framerate monitor will improve your score in this test. View [this](https://www.humanbenchmark.com/tests/reactiontime/statistics) for more detail.

### The Issue
When I visit [leaderboard](https://www.humanbenchmark.com/tests/reactiontime/leaderboard) of this test, I found someone use some cheating method to make themselves become the top of this test. A cheater claims that he uses javascript for the test. Someone reports that using Console Debugger and Breakpoints in Google Chrome to make it to the top. I tried but I'm not a web programmer and don't know how it works.

As a smart A.S.S programmer, I remind that C/C++ can fetch color for a single pixel on screen and emulates mouse clicking. So I copy, paste and modify some codes and make this Fanytastic Sootuff. 

### The Theory
`COLORREF` to get the color on a certain pixel, `SetCursorPos` and `mouse_event` to emulate mouse clicks, `Sleep()` for delay to make computer "knows" it's from a human not a machine. If there's no delay or the delay time is too short in your program, it'll display  "Too Soon!"  because computer recognized that the result is made by machine.

### The Test
I adjust value in `Sleep()` to optimize the final result because of the fluctation of response time in basic I/O system.

### The Result
After lots of trial and error, best result is 101ms.

### The Usage
1. Download the code.
2. Modify the value in `Sleep()` to match the characteristics of your computer.
2. Modify the value of coordinates for picking color.
2. Compile and build it in a basic or advanced C++ compiler.
3. Run the program.
4. If failed, back to 2, else goto 7. It require some assistive tools and **patience**.
5. Enjoy Yourself! Beat me if you can:)
6. If succeed, goto 9, else back to 2.
7. **YOU ROCK!**
