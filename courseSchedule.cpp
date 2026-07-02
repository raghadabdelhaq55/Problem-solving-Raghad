#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool checkCourses(int n, vector<vector<int>>& pre) {

    vector<vector<int>> adj(n);
    vector<int> in(n, 0);

    for(int i = 0; i < pre.size(); i++) {

        int course = pre[i][0];
        int req = pre[i][1];

        adj[req].push_back(course);
        in[course]++;
    }

    queue<int> q;

    for(int i = 0; i < n; i++) {
        if(in[i] == 0) {
            q.push(i);
        }
    }

    int done = 0;

    while(!q.empty()) {

        int x = q.front();
        q.pop();
        done++;

        for(int i = 0; i < adj[x].size(); i++) {

            int next = adj[x][i];
            in[next]--;

            if(in[next] == 0) {
                q.push(next);
            }
        }
    }

    return done == n;
}

int main() {

    int n, m;

    cout << "Enter number of courses: ";
    cin >> n;

    cout << "Enter number of prerequisites: ";
    cin >> m;

    vector<vector<int>> pre(m, vector<int>(2));

    cout << "Enter prerequisites: " << endl;

    for(int i = 0; i < m; i++) {
        cin >> pre[i][0] >> pre[i][1];
    }

    if(checkCourses(n, pre)) {
        cout << "True";
    }
    else {
        cout << "False";
    }

    return 0;
}