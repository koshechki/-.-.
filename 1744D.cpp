#include <iostream>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    for (int i(0); i < t; i++) {
        int n;
        std::cin >> n;
        int vsego_dva(0);
        for (int j(0); j < n; j++) {
            int tek;
            std::cin >> tek;
            int dva_v_chisle(0);
            while (tek % 2 == 0) {
                dva_v_chisle += 1;
                tek = tek / 2;
            }
            vsego_dva = vsego_dva + dva_v_chisle; // poschitali skolko v massive dvoik
        } // tyt vse pravilno
        int k(0);
        int m(1);
        int dvoiki_is_nomerov(0);
        while (m * 2 <= n) {
            m= m * 2;
            k = k + 1;
            dvoiki_is_nomerov += k; // obschee kolvo dvoik iz nomerov
        }
        if (dvoiki_is_nomerov + vsego_dva < n) {
            std::cout << -1 << std::endl;
        }
        else {
            if (vsego_dva >= n) { // to est kratno 2^n
                std::cout << 0 << std::endl;
            }
            else {
                int ostalos(n - vsego_dva);
                int h(0);
                for (int l(k); l >= 1; l--) {
                    if (ostalos > 0) {
                        ostalos -= l;
                        h += 1;
                    }
                }
                int result(h);
                std::cout << result << std::endl;
            }
        }
    }
}