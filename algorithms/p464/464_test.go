package p464

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func Test0(t *testing.T) {
	assert.Equal(t, false, canIWin(10, 11))
	assert.Equal(t, true, canIWin(10, 0))
}

func Test1(t *testing.T) {
	assert.Equal(t, false, canIWin(10, 200))
}
