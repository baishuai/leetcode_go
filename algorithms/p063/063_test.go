package p063

import "testing"

func test(t *testing.T, grid [][]int, exp int) {
	if ans := uniquePathsWithObstacles(grid); ans != exp {
		t.Fatal("error answer", ans, "expected", exp)
	}
}

func TestExample(t *testing.T) {
	grid := [][]int{
		{0, 0, 0},
		{0, 1, 0},
		{0, 0, 0},
	}
	test(t, grid, 2)
}
