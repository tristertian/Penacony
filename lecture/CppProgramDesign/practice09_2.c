#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 50
#define NAME_LEN 20

typedef struct {
    int  id;
    char name[NAME_LEN];
    int  age;
} Student;

/* 读入 */
int read_data(Student stu[]) {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) n = 0;
    if (n > MAXN) n = MAXN;
    for (i = 0; i < n; ++i)
        scanf("%d %s %d", &stu[i].id, stu[i].name, &stu[i].age);
    return n;
}
int cmp_name(const void *a, const void *b) {
    const Student *p = (const Student *)a;
    const Student *q = (const Student *)b;
    return strcmp(p->name, q->name);
}
int cmp_age_name(const void *a, const void *b) {
    const Student *p = (const Student *)a;
    const Student *q = (const Student *)b;
    if (p->age != q->age) return p->age - q->age;
    return strcmp(p->name, q->name);
}
void print_student(const Student *s) {
    printf("%3d%6s%3d\n", s->id, s->name, s->age);
}

int main() {
    Student stu[MAXN];
    int n = read_data(stu);
    if (n == 0) return 0;
    qsort(stu, n, sizeof(Student), cmp_name);
    for (int i = 0; i < n; ++i) print_student(&stu[i]);
    puts("");
    qsort(stu, n, sizeof(Student), cmp_age_name);
    for (int i = 0; i < n; ++i) print_student(&stu[i]);

    return 0;
}