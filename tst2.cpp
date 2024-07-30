/*Given an n x n binary matrix image, flip the image horizontally, then invert it,
and return the resulting image.
To flip an image horizontally means that each row of the image is reversed.*/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ans;
        for (int i = 0; i < image.size(); i++) {
            vector<int> ans1;
            int x = image[i].size() - 1;
            for (int j = 0; j < image[i].size(); j++) {
                int temp = image[i][x];
                if (temp == 0) {
                    temp = 1;
                } else {
                    temp = 0;
                }
                ans1.push_back(temp);
                x--;
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};

int main() {
    Solution solution;


    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    vector<vector<int>> result = solution.flipAndInvertImage(image);


    cout << "Flipped and inverted image:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

