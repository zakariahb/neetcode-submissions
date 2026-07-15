class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<String> seen = new HashSet<>();

        for (int row = 0; row < 9 ; row++)
        {
            for (int column = 0; column < 9 ; column++)
            {
                char c = board[row][column];
                if (c != '.')
                {
                    if (!seen.add(c + "at row"+ row) || !seen.add(c + "at column"+ column) || !seen.add(c + "at box"+ row / 3 + "-" + column / 3))
                    {

                    return false;
                }
                }
            }

        }
        return true;
    }
}
