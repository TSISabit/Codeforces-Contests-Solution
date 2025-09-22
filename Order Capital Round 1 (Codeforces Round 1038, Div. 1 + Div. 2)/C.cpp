#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Point {
    int x, y, id;
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<Point> points(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> points[i].x >> points[i].y;
            points[i].id = i + 1;
        }

        std::vector<Point> x_pos_y_pos, x_pos_y_neg, x_neg_y_pos, x_neg_y_neg;

        for (const auto& p : points) {
            if (p.x >= 0 && p.y >= 0) {
                x_pos_y_pos.push_back(p);
            } else if (p.x >= 0 && p.y < 0) {
                x_pos_y_neg.push_back(p);
            } else if (p.x < 0 && p.y >= 0) {
                x_neg_y_pos.push_back(p);
            } else {
                x_neg_y_neg.push_back(p);
            }
        }

        auto pair_up = [](std::vector<Point>& arr) {
            std::vector<std::pair<int, int>> pairs;
            for (size_t i = 0; i + 1 < arr.size(); i += 2) {
                pairs.push_back({arr[i].id, arr[i+1].id});
            }
            return pairs;
        };

        std::vector<std::pair<int, int>> result_pairs;

        // Pair up points within each quadrant
        auto pairs1 = pair_up(x_pos_y_pos);
        result_pairs.insert(result_pairs.end(), pairs1.begin(), pairs1.end());
        auto pairs2 = pair_up(x_pos_y_neg);
        result_pairs.insert(result_pairs.end(), pairs2.begin(), pairs2.end());
        auto pairs3 = pair_up(x_neg_y_pos);
        result_pairs.insert(result_pairs.end(), pairs3.begin(), pairs3.end());
        auto pairs4 = pair_up(x_neg_y_neg);
        result_pairs.insert(result_pairs.end(), pairs4.begin(), pairs4.end());

        // Collect remaining points
        std::vector<Point> remaining_points;
        if (x_pos_y_pos.size() % 2 != 0) remaining_points.push_back(x_pos_y_pos.back());
        if (x_pos_y_neg.size() % 2 != 0) remaining_points.push_back(x_pos_y_neg.back());
        if (x_neg_y_pos.size() % 2 != 0) remaining_points.push_back(x_neg_y_pos.back());
        if (x_neg_y_neg.size() % 2 != 0) remaining_points.push_back(x_neg_y_neg.back());

        // Pair up remaining points
        // Strategy: Try to pair points from opposite quadrants to maximize distance
        // Sort by x, then y. This is a heuristic that generally works well.
        std::sort(remaining_points.begin(), remaining_points.end(), [](const Point& a, const Point& b) {
            if (a.x != b.x) return a.x < b.x;
            return a.y < b.y;
        });

        for (size_t i = 0; i + 1 < remaining_points.size(); i += 2) {
            result_pairs.push_back({remaining_points[i].id, remaining_points[i+1].id});
        }

        for (const auto& p : result_pairs) {
            std::cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}