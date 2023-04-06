# Conway's Game of Life

The universe of the Game of Life is an infinite two-dimensional orthogonal grid of square cells, each of which (at any given time) is in one of two possible states, "live" (alternatively "on") or "dead" (alternatively "off"). Every cell interacts with its eight neighbours, which are the cells that are directly horizontally, vertically, or diagonally adjacent. At each step in time, the following transitions occur:

Rules:
1. Any live cell with fewer than two live neighbours dies (referred to as underpopulation or exposure).
2. Any live cell with more than three live neighbours dies (referred to as overpopulation or overcrowding).
3. Any live cell with two or three live neighbours lives, unchanged, to the next generation.
4. Any dead cell with exactly three live neighbours will come to life.

The initial pattern constitutes the 'seed' of the system. The first generation is created by applying the above rules simultaneously to every cell in the seed — births and deaths happen simultaneously, and the discrete moment at which this happens is sometimes called a tick. (In other words, each generation is a pure function of the one before.) The rules continue to be applied repeatedly to create further generations.

The following are famous patterns that can be found in Conway's Game of Life:

<div align="center">
  <table>
    <tr>
      <td align="center"><img src="https://conwaylife.com/w/images/4/48/Block.png" alt="A block pattern in Conway's Game of Life" width="100"></td>
      <td align="center"><img src="https://conwaylife.com/w/images/b/b9/Blinker.gif" alt="A blinker pattern in Conway's Game of Life" width="100"></td>
      <td align="center"><img src="https://conwaylife.com/w/images/8/81/Glider.gif" alt="A glider pattern in Conway's Game of Life" width="100"></td>
      <td align="center"><img src="https://conwaylife.com/w/images/c/cd/Acorn.png" alt="An Acorn pattern in Conway's Game of Life" width="150"></td>
      <td align="center"><img src="https://conwaylife.com/w/images/b/b6/Gosperglidergun.gif" alt="A Gosper glider gun pattern in Conway's Game of Life" width="150"></td>
    </tr>
  </table>
</div>

In this C++ implementation of Conway's Game of Life, I inserted each of these patterns into this simulation to view their behavior:

<p align="center">
  <img src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExNDUwNWM5MzE5M2FiZjdjZTRiOWM0NjViMTE3MWQ2NDU4MTllNTQxNSZjdD1n/j9VEXyKRFhVxWVyb1a/giphy.gif" alt="Game of Life">
</p>

---

*Source: [Conway's Game of Life Wiki](https://conwaylife.com/wiki/Conway%27s_Game_of_Life)*
