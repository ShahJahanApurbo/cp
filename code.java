package javaapplication1;

import java.util.Random;

public class SudokuGeneratorV2 {

    private static final int N = 9;
    public static int[][] generatedBoard = new int[9][9];

    public static int[][] generateSubBoard() {
        int[][] subBoard = new int[3][3];
        Random random = new Random();

        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                while (true) {
                    int num = random.nextInt(9) + 1;
                    if (isValidPlacement(subBoard, num)) {
                        subBoard[row][col] = num;
                        break;
                    }
                }
            }
        }
        return subBoard;
    }

    public static boolean isValidPlacement(int[][] subBoard1, int num) {
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (subBoard1[row][col] == num) return false;
            }
        }
        return true;
    }

    public static int[][] generateMainBoard(int[][] subBoard) {
        int[][] Board = new int[9][9];

        Board = fullBoard(Board, subBoard);
        Board = swapBoard(Board);
        printSudoku(Board);
        System.out.println("");
        Board = removeClues(Board, 0.65);
        return Board;
    }

    public static int[][] removeClues(int[][] Board, double difficulty) {
        Random random = new Random();
        int cluesToRemove = (int) Math.round(81 * difficulty);
        for (int i = 0; i < cluesToRemove; i++) {
            int row = random.nextInt(N);
            int col = random.nextInt(N);
            while (Board[row][col] == 0) {
                row = random.nextInt(N);
                col = random.nextInt(N);
            }
            Board[row][col] = 0;
        }
        return Board;
    }

    public static int[][] fullBoard(int[][] Board, int[][] subBoard) {
        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 3; i++) {
                if (j < 3) Board[i][j] = subBoard[i][j];
                else if (j >= 3) {
                    Board[i][j] = Board[(i + 5) % 3][j % 3 + ((j / 3) - 1) * 3];
                }
            }
        }
        for (int i = 3; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                Board[i][j] = Board[i % 3 + ((i / 3) - 1) * 3][(j + 5) % 3 + (((j + 3) / 3) - 1) * 3];
            }
        }
        return Board;
    }

    public static int[][] swapBoard(int[][] Board) {
        Random random = new Random();
        int[][] BoardCopy = new int[9][9];

        for (int time = 0; time < 9; time++) {
            int swap1, swap2;
            for (int j = 0; j < 3; j++) {
                swap1 = random.nextInt(2) + j * 3;
                swap2 = random.nextInt(2) + j * 3;
                if (swap1 == swap2) {
                    swap1 = random.nextInt(2) + j * 3;
                    swap2 = random.nextInt(2) + j * 3;
                }
                for (int row = 0; row < 9; row++) {
                    BoardCopy[row][swap1] = Board[row][swap1];
                    Board[row][swap1] = Board[row][swap2];
                    Board[row][swap2] = BoardCopy[row][swap1];
                }
                for (int col = 0; col < 9; col++) {
                    BoardCopy[swap1][col] = Board[swap1][col];
                    Board[swap1][col] = Board[swap2][col];
                    Board[swap2][col] = BoardCopy[swap1][col];
                }
            }
        }
        return Board;
    }

    public static void generate() {
        int[][] subBoard = generateSubBoard();
        System.out.println("Generated Sudoku board:");

        int[][] Board = generateMainBoard(subBoard);
        generatedBoard = Board;

        printSudoku(Board);
        System.out.println("");
    }

    public static void printSudoku(int[][] Board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                System.out.print(Board[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        generate();
        int[][] sudokuBoard = generatedBoard;

        if (solveSudoku(sudokuBoard)) {
            printSudoku(sudokuBoard);
        } else {
            System.out.println("No solution exists.");
        }
    }

    private static boolean solveSudoku(int[][] board) {
        int[] emptyCell = findEmptyCell(board);

        if (emptyCell == null) {
            return true;
        }
        int row = emptyCell[0];
        int col = emptyCell[1];
        for (int num = 1; num <= 9; num++) {
            if (isValidMove(board, row, col, num)) {
                board[row][col] = num;
                if (solveSudoku(board)) return true;
                board[row][col] = 0;
            }
        }
        return false;
    }

    private static boolean isValidMove(int[][] board, int row, int col, int num) {
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num || board[i][col] == num) {
                return false;
            }
        }
        int subgridStartRow = row - row % 3;
        int subgridStartCol = col - col % 3;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[subgridStartRow + i][subgridStartCol + j] == num) {
                    return false;
                }
            }
        }
        return true;
    }

    private static int[] findEmptyCell(int[][] board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == 0) {
                    return new int[]{i, j};
                }
            }
        }
        return null;
    }
}