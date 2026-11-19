class Solution {
public:
   
bool RowColumn(int s, vector<vector<char>> &board)
{
    unordered_map<char, int> result;

    //  For Rows
    for (int i = 0; i < 9; i++)
    {
        if (board[s][i] != '.')
            result[board[s][i]]++;
    }
    for (auto &p : result)
    {
        if (p.second > 1)
        {
            return false;
        }
    }
    result.clear();
    

    // For  Column
    for (int i = 0; i < 9; i++)
    {
        if (board[i][s] != '.')
            result[board[i][s]]++;
    }

    for (auto &p : result)
    {
        if (p.second > 1)
        {
            return false;
        }
    }

    return true;
}
bool Hash(vector<char> vec)
{

    unordered_map<char, int> map;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != '.') // Ignore empty cells
        {
            map[vec[i]]++;
        }
    }

    for (auto &p : map)
    {
        if (p.second > 1)
        {
            return false;
        }
    }

    return true;
}

bool Kernel(vector<vector<char>> &board)
{
    vector<char> vec;
    for (int i = 0; i < 9; i++)
    {
        int startj = (i % 3) * 3;
        int endj = startj + 2;

        int startk = (i / 3) * 3;
        int endk = startk + 2;

        for (int r=startj; r<= endj; r++)
        {
            for (int s=startk; s<= endk; s++)
            {
                vec.push_back(board[r][s]);
            }
        }
        if (!Hash(vec))
        {
            return false;
        }

        vec.clear();
    }

    return true;
}

bool isValidSudoku(vector<vector<char>> &board)
{

    for (int i = 0; i < 9; i++)
    {
        bool Row = RowColumn(i, board);

        if (!Row)
            return false;
    }

    bool kernel1 = Kernel(board);

    return kernel1;
}
};
