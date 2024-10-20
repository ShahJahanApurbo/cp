
#include <stdio.h>
#include <string.h>
// E→TE′
// E′→+TE′
// T→FT′
// T′→∗FT′
// F→(E)

int main() {
    char t[5], nt[10], p[5][5], first[5][5], temp;
    int i, j, note, nont, k = 0, f = 0;

    printf("\nEnter the no. of Non-terminals in the grammar: ");
    scanf("%d", &nont);

    printf("\nEnter the Non-terminals in the grammar:\n");
    for (i = 0; i < nont; i++) {
        scanf("\n%c", &nt[i]);
    }

    printf("\nEnter the no. of Terminals in the grammar: (Enter e for epsilon): ");
    scanf("%d", &note);

    printf("\nEnter the Terminals in the grammar:\n");
    for (i = 0; i < note || t[i] == '$'; i++) {
        scanf("\n%c", &t[i]);
    }

    for (i = 0; i < nont; i++) {
        p[i][0] = nt[i];
        first[i][0] = nt[i];
    }

    printf("\nEnter the productions:\n");
    for (i = 0; i < nont; i++) {
        scanf("%c", &temp);
        printf("\nEnter the production for %c (End the production with '$' sign): ", p[i][0]);
        for (j = 0; p[i][j] != '$';) {
            j += 1;
            scanf("%c", &p[i][j]);
        }
    }

    for (i = 0; i < nont; i++) {
        printf("\nThe production for %c -> ", p[i][0]);
        for (j = 1; p[i][j] != '$'; j++) {
            printf("%c", p[i][j]);
        }
    }

    for (i = 0; i < nont; i++) {
        f = 0;
        for (j = 1; p[i][j] != '$'; j++) {
            for (k = 0; k < note; k++) {
                if (f == 1) break;
                if (p[i][j] == t[k]) {
                    first[i][j] = t[k];
                    first[i][j + 1] = '$';
                    f = 1;
                  
                    break;
                } else if (p[i][j] == nt[k]) {
                    first[i][j] = first[k][j];
                    if (first[i][j] == 'e') continue;
                    first[i][j + 1] = '$';
                    f = 1;
                    break;
                }
            }
        }
    }

    for (i = 0; i < nont; i++) {
        printf("\n\nThe first of %c -> ", first[i][0]);
        for (j = 1; first[i][j] != '$'; j++) {
            printf("%c\t", first[i][j]);
        }
    }
    return 0;
}
