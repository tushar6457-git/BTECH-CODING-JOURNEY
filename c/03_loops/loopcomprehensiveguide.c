#include <stdio.h>

/* ── 1. BASIC for LOOP ───────────────────────────────────────── */
void basic_for() {
    printf("\n=== 1. Basic for loop ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

/* ── 2. DECREMENTING for LOOP ────────────────────────────────── */
void decrement_for() {
    printf("\n=== 2. Decrement for loop ===\n");
    for (int i = 5; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

/* ── 3. STEP SIZE (+=) ───────────────────────────────────────── */
void step_for() {
    printf("\n=== 3. Step size = 2 ===\n");
    for (int i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

/* ── 4. while LOOP ───────────────────────────────────────────── */
void basic_while() {
    printf("\n=== 4. while loop ===\n");
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

/* ── 5. do-while LOOP ────────────────────────────────────────── */
void basic_do_while() {
    printf("\n=== 5. do-while (runs at least once) ===\n");
    int i = 10;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 5);
}

/* ── 6. INFINITE LOOP with break ─────────────────────────────── */
void infinite_with_break() {
    printf("\n=== 6. Infinite loop + break ===\n");
    int i = 0;
    for (;;) {
        if (i == 3) break;
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

/* ── 7. continue ─────────────────────────────────────────────── */
void loop_continue() {
    printf("\n=== 7. continue (skip even) ===\n");
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
}

/* ── 8. NESTED LOOPS ─────────────────────────────────────────── */
void nested_loops() {
    printf("\n=== 8. Nested loops (3x3 grid) ===\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
}

/* ── 9. MULTIPLE INIT & UPDATE EXPRESSIONS ───────────────────── */
void multi_expr_for() {
    printf("\n=== 9. Multiple expressions in for ===\n");
    for (int i = 0, j = 10; i < j; i++, j--) {
        printf("i=%d j=%d\n", i, j);
    }
}

/* ── 10. LOOP OVER ARRAY ─────────────────────────────────────── */
void loop_array() {
    printf("\n=== 10. Loop over array ===\n");
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

/* ── 11. SUM using LOOP ───────────────────────────────────────── */
void loop_sum() {
    printf("\n=== 11. Sum 1 to 100 ===\n");
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    printf("Sum = %d\n", sum);
}

/* ── 12. LOOP + CONDITIONAL LOGIC (prime check) ─────────────── */
void prime_check() {
    printf("\n=== 12. Primes up to 30 ===\n");
    for (int n = 2; n <= 30; n++) {
        int is_prime = 1;
        for (int i = 2; (long long)i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime) printf("%d ", n);
    }
    printf("\n");
}

/* ── 13. PATTERN PRINTING ────────────────────────────────────── */
void pattern() {
    printf("\n=== 13. Right triangle pattern ===\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

/* ── 14. EMPTY SECTIONS in for ───────────────────────────────── */
void empty_sections() {
    printf("\n=== 14. for with empty init/update ===\n");
    int i = 0;
    for (; i < 3;) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

int main() {
    basic_for();
    decrement_for();
    step_for();
    basic_while();
    basic_do_while();
    infinite_with_break();
    loop_continue();
    nested_loops();
    multi_expr_for();
    loop_array();
    loop_sum();
    prime_check();
    pattern();
    empty_sections();

    return 0;
}