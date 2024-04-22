#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Điểm được gán cho mỗi chữ cái trong bảng chữ cái
int DIEM[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int tinh_diem(char tu[]);

int main(void)
{
    // Nhắc người dùng nhập hai từ
    char tu1[100], tu2[100];
    printf("Player 1: ");
    scanf("%s", tu1);
    printf("Player 2: ");
    scanf("%s", tu2);

    // Tính điểm cho mỗi từ
    int diem1 = tinh_diem(tu1);
    int diem2 = tinh_diem(tu2);

    // In ra người chiến thắng
    if (diem1 > diem2)
    {
        printf("Player 1 is win!\n");
    }
    else if (diem1 < diem2)
    {
        printf("Player 2 is win\n");
    }
    else
    {
        printf("Hoa!\n");
    }

    return 0;
}

int tinh_diem(char tu[])
{
    // Biến lưu trữ điểm
    int diem = 0;

    // Tính điểm cho mỗi ký tự
    for (int i = 0, len = strlen(tu); i < len; i++)
    {
        if (isupper(tu[i]))
        {
            diem += DIEM[tu[i] - 'A'];
        }
        else if (islower(tu[i]))
        {
            diem += DIEM[tu[i] - 'a'];
        }
    }

    return diem;
}
