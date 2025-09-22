#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x, k;
        cin >> n >> x >> k;

        string s;
        cin >> s;

        long long sum = 0;
        for (char c : s) {
            if (c == 'L') sum--;
            else sum++;
        }

        long long times = 0;

        if (sum == 0) {
            if (x == 0) {
                times = k / n;
            }
        } else if ((x > 0 && sum > 0) || (x < 0 && sum < 0)) {
            cout << 0 << endl;
            continue;
        } else {
            long long stepsToZero = abs(x);
            long long stepsPerCycle = abs(sum);

            if (stepsToZero % stepsPerCycle != 0) {
                long long fullCycles = stepsToZero / stepsPerCycle;
                long long remainingSteps = stepsToZero % stepsPerCycle;

                long long timeToZero = fullCycles * n + remainingSteps;
                if (timeToZero > k) {
                    cout << 0 << endl;
                    continue;
                }

                long long fullCyclesInTime = (k - timeToZero) / n;

                times = fullCycles + 1 + fullCyclesInTime;
            } else {
                long long fullCycles = stepsToZero / stepsPerCycle;

                long long timeToZero = fullCycles * n;
                if (timeToZero > k) {
                    cout << 0 << endl;
                    continue;
                }

                long long fullCyclesInTime = (k - timeToZero) / n;

                times = fullCycles + fullCyclesInTime;
            }
        }

        cout << times << endl;
    }

    return 0;
}
