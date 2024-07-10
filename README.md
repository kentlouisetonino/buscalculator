## $\textnormal{Description}$

![bus-calculator](https://github.com/kentlouisetonino/bus-calculator/assets/69438999/ab61c44d-26b0-4b84-82c3-c220299447a7)


<br />

> - A CLI tool that will allow you to compute the Bus last trip empty
    seats based on the given total number of seats and passengers.

> - The technologies are C++, GNU C++ Compiler (G++), Snapcraft, and GNU/Linux.

> - Snap : https://snapcraft.io/bus-calculator

```bash
# Example 1
Total bus seats = 50
Total passengers = 126
Total last trip empty seats = 24
Explanation: This means at the 3rd trip, there are 24 (50 - 26) remaining seats.

# Example 2
Total bus seats = 50
Total passengers = 10
Total last trip empty seats = 40
Explanation: This means at the 1st trip, there are 40 (50 - 10) remaining seats.
```


<br />
<br />



## $\textnormal{Local \ Development}$

> - Install the GNU C++ Compiler in your machine.

> - Go to the root directory. Run the following commands.

```bash
# Change the permission mode and make it executable.
sudo chmod +x build

# Run the app locally.
./app
```

<br />
<br />



## $\textnormal{Installation}$

```bash
# If already installed.
sudo snap refresh bus-calculator

# If not yet installed.
sudo snap install bus-calculator

# Run the app.
bus-calculator
```
