#include <stdio.h>
#include <stdlib.h>

int main() {
    long long left, right;
    int result;

    // Διαβάζουμε τις τιμές μέχρι να φτάσουμε στο τέλος του αρχείου (EOF)
    while (1) {
        // Ζητάμε την αριστερή τιμή από τον χρήστη
        printf("Please enter the cost of going left: ");
        result = scanf("%lld", &left);

        // Έλεγχος για EOF ή λάθος είσοδο
        if (result == EOF) {
            return 0;  // Αν συναντήσουμε EOF, τερματίζουμε με κωδικό εξόδου 0
        } else if (result != 1) {
            return 1;  // Αν η scanf αποτύχει, τερματίζουμε με κωδικό εξόδου 1
        }

        // Ζητάμε τη δεξιά τιμή από τον χρήστη
        printf("Please enter the cost of going right: ");
        result = scanf("%lld", &right);

        // Έλεγχος για EOF ή λάθος είσοδο
        if (result == EOF) {
            return 0;  // Τερματισμός με κωδικό εξόδου 0 αν φτάσουμε σε EOF
        } else if (result != 1) {
            return 1;  // Τερματισμός με κωδικό εξόδου 1 αν η είσοδος είναι λάθος
        }

        // Σύγκριση των τιμών και απόφαση για την κατεύθυνση
        if (left < right) {
            printf("Go left.\n");  // Αν το κόστος αριστερά είναι μικρότερο, πάμε αριστερά
        } else if (right < left) {
            printf("Go right.\n");  // Αν το κόστος δεξιά είναι μικρότερο, πάμε δεξιά
        } else {
            printf("Go left.\n");  // Αν τα κόστη είναι ίσα, επιλέγουμε να πάμε αριστερά
        }
    }

    return 0;
}
