#ifndef algo_h
#define algo_h

#include <cmath>

class algo {
    private:
        string sNum1;
        char cOperador;
        string sNum2;

        //length of string
        int iNum1;
        int iNum2;

    public:
        algo(string sN1, char cO, string sN2);

        double convertir();
};

algo::algo(string sN1, char cO, string sN2) {
    sNum1 = sN1;
    cOperador = cO;
    sNum2 = sN2;

    iNum1 = 0;
    iNum2 = 0;
}

double algo::convertir() {
    for (int i = 0 ; i < sNum1.length() ; ++i) {
        switch (sNum1[i]) {
            case 'B':
                    iNum1 += 0;
                break;
            case 'y':
                    iNum1 += 1 * pow(10, sNum1.length() - i - 1);
                break;
            case '/':
                    iNum1 += 2 * pow(10, sNum1.length() - i - 1);
                break;
            case '8':
                    iNum1 += 3 * pow(10, sNum1.length() - i - 1);
                break;
            case 'T':
                    iNum1 += 4 * pow(10, sNum1.length() - i - 1);
                break;
            case '&':
                    iNum1 += 5 * pow(10, sNum1.length() - i - 1);
                break;
            case 'Q':
                    iNum1 += 6 * pow(10, sNum1.length() - i - 1);
                break;
            case 'E':
                    iNum1 += 7 * pow(10, sNum1.length() - i - 1);
                break;
            case 'P':
                    iNum1 += 8 * pow(10, sNum1.length() - i - 1);
                break;
            case 'F':
                    iNum1 += 9 * pow(10, sNum1.length() - i - 1);
                break;
        }
    }

    for (int i = 0 ; i < sNum2.length() ; ++i) {
        switch (sNum2[i]) {
            case 'B':
                    iNum2 += 0;
                break;
            case 'y':
                    iNum2 += 1 * pow(10, sNum2.length() - i - 1);
                break;
            case '/':
                    iNum2 += 2 * pow(10, sNum2.length() - i - 1);
                break;
            case '8':
                    iNum2 += 3 * pow(10, sNum2.length() - i - 1);
                break;
            case 'T':
                    iNum2 += 4 * pow(10, sNum2.length() - i - 1);
                break;
            case '&':
                    iNum2 += 5 * pow(10, sNum2.length() - i - 1);
                break;
            case 'Q':
                    iNum2 += 6 * pow(10, sNum2.length() - i - 1);
                break;
            case 'E':
                    iNum2 += 7 * pow(10, sNum2.length() - i - 1);
                break;
            case 'P':
                    iNum2 += 8 * pow(10, sNum2.length() - i - 1);
                break;
            case 'F':
                    iNum2 += 9 * pow(10, sNum2.length() - i - 1);
                break;
        }
    }

    switch (cOperador) {
        case 'C':
                return iNum1 + iNum2;
            break;
        case 'c':
                return iNum1 - iNum2;
            break;
        case '#':
                return iNum1 * iNum2;
            break;
        case '@':
                return iNum1 / iNum2;
            break;
        default:
                return -1;
    }
}

#endif
