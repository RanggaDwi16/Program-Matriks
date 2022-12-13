#include <iostream>
#include <conio.h>

using namespace std;

void penjumlahan()
{
    int row, column;
    cout << "Matriks 1: " << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int baris2, column2;
    cout << "Matriks 2: " << endl;
    cout << "Jumlah row: ";
    cin >> baris2;
    cout << "Jumlah column: ";
    cin >> column2;
    cout << endl;

    if (row == baris2 && column == column2)
    {
        int matriks1[row][column];
        cout << "Matriks 1: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
                cin >> matriks1[i][j];
            }
        }
        cout << endl;

        int matriks2[baris2][column2];
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
                cin >> matriks2[i][j];
            }
        }
        cout << endl;

        cout << "Matriks 1: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << matriks2[i][j] << " ";
            }
            cout << endl;
        } 
        cout << endl;

        int hasil[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            }
        }

        cout << "Hasil penjumlahan matriks: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Jumlah row dan column matriks 1 dan 2 tidak sama" << endl;
    }

}

void pengurangan()
{
    int row, column;
    cout << "Matriks 1: " << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int baris2, column2;
    cout << "Matriks 2: " << endl;
    cout << "Jumlah row: ";
    cin >> baris2;
    cout << "Jumlah column: ";
    cin >> column2;
    cout << endl;

    if (row == baris2 && column == column2)
    {
        int matriks1[row][column];
        cout << "Matriks 1: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
                cin >> matriks1[i][j];
            }
        }
        cout << endl;

        int matriks2[baris2][column2];
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
                cin >> matriks2[i][j];
            }
        }
        cout << endl;

        cout << "Matriks 1: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << matriks2[i][j] << " ";
            }
            cout << endl;
        } 
        cout << endl;

        int hasil[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                hasil[i][j] = matriks1[i][j] - matriks2[i][j];
            }
        }

        cout << "Hasil pengurangan matriks: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Jumlah row dan column matriks 1 dan 2 tidak sama" << endl;
    }
}

void perkalian()
{
    int row, column;
    cout << "Matriks 1: " << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int row2, column2;
    cout << "Matriks 2: " << endl;
    cout << "Jumlah row: ";
    cin >> row2;
    cout << "Jumlah column: ";
    cin >> column2;
    cout << endl;

    if(column == row2)
    {
        int matriks1[row][column];
        cout << "Matriks 1: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
                cin >> matriks1[i][j];
            }
        }
        cout << endl;

        int matriks2[row2][column2];
        cout << "Matriks 2: " << endl;
        for(int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
                cin >> matriks2[i][j];
            }
        }
        cout << endl;

        cout << "Matriks 1: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << matriks2[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

    
        int hasil[row][column2];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                hasil[i][j] = 0;
                for (int k = 0; k < column; k++)
                {
                    hasil[i][j] += matriks1[i][k] * matriks2[k][j];
                }
            }
        }

        cout << "Hasil perkalian matriks: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                cout << hasil[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Jumlah row dan column matriks 1 dan 2 tidak sama" << endl;
    }
}

void transpose()
{
    int row, column;
    cout << "Matriks A: " << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int matriks[row][column];
    cout << "Matriks A: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;

    cout << "Matriks A: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int hasil[column][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            hasil[j][i] = matriks[i][j];
        }
    }

    cout << "Hasil transpose matriks A: " << endl;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void determinan()
{
    int row, column;
    cout << "Matriks A" << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int matriks[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;

    cout << "Matriks A: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int hasil = 0;
    if (row == 2 && column == 2)
    {
        hasil = (matriks[0][0] * matriks[1][1]) - (matriks[0][1] * matriks[1][0]);
    }
    else if (row == 3 && column == 3)
    {
        hasil = (matriks[0][0] * matriks[1][1] * matriks[2][2]) + (matriks[0][1] * matriks[1][2] * matriks[2][0]) + 
        (matriks[0][2] * matriks[1][0] * matriks[2][1]) - (matriks[0][2] * matriks[1][1] * matriks[2][0]) - 
        (matriks[0][0] * matriks[1][2] * matriks[2][1]) - (matriks[0][1] * matriks[1][0] * matriks[2][2]);
    }
    else
    {
        cout << "Maaf, determinan hanya bisa dihitung untuk matriks 2x2 dan 3x3" << endl;
    }

    cout << "Hasil determinan matriks A: " << hasil << endl;
    cout << endl;
}

void kofaktor()
{
    int row, column;
    cout << "Matriks A" << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int matriks[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;

    if (row != column)
    {
        cout << "Maaf, matriks harus berbentuk persegi" << endl;
        return;
    }
    else if (row == 2 && column == 2)
    {
        cout << "Matriks A: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else if (row == 3 && column == 3)
    {
        cout << "Matriks A: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Maaf, kofaktor hanya bisa dihitung untuk matriks 2x2 dan 3x3" << endl;
        return;
    }

    int hasil[row][column];
    if (row == 2 && column == 2)
    {
        hasil[0][0] = matriks[1][1];
        hasil[0][1] = -matriks[1][0];
        hasil[1][0] = -matriks[0][1];
        hasil[1][1] = matriks[0][0];
    }
    else if (row == 3 && column == 3)
    {
        hasil[0][0] = (matriks[1][1] * matriks[2][2]) - (matriks[1][2] * matriks[2][1]);
        hasil[0][1] = -((matriks[1][0] * matriks[2][2]) - (matriks[1][2] * matriks[2][0]));
        hasil[0][2] = (matriks[1][0] * matriks[2][1]) - (matriks[1][1] * matriks[2][0]);
        hasil[1][0] = -((matriks[0][1] * matriks[2][2]) - (matriks[0][2] * matriks[2][1]));
        hasil[1][1] = (matriks[0][0] * matriks[2][2]) - (matriks[0][2] * matriks[2][0]);
        hasil[1][2] = -((matriks[0][0] * matriks[2][1]) - (matriks[0][1] * matriks[2][0]));
        hasil[2][0] = (matriks[0][1] * matriks[1][2]) - (matriks[0][2] * matriks[1][1]);
        hasil[2][1] = -((matriks[0][0] * matriks[1][2]) - (matriks[0][2] * matriks[1][0]));
        hasil[2][2] = (matriks[0][0] * matriks[1][1]) - (matriks[0][1] * matriks[1][0]);
    }

    cout << "Kofaktor matriks A: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void adjoin()
{
    int row, column;
    cout << "Matriks A" << endl;
    cout << "Jumlah row: ";
    cin >> row;
    cout << "Jumlah column: ";
    cin >> column;
    cout << endl;

    int matriks[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Nilai row ke-" << i + 1 << " column ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;

    if (row != column)
    {
        cout << "Maaf, matriks harus berbentuk persegi" << endl;
        return;
    }
    else if (row == 2 && column == 2)
    {
        cout << "Matriks A: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else if (row == 3 && column == 3)
    {
        cout << "Matriks A: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << matriks[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    else
    {
        cout << "Maaf, adjoin hanya bisa dihitung untuk matriks 2x2 dan 3x3" << endl;
        return;
    }

    int hasil[row][column];
    if (row == 2 && column == 2)
    {
        hasil[0][0] = matriks[1][1];
        hasil[0][1] = -matriks[0][1];
        hasil[1][0] = -matriks[1][0];
        hasil[1][1] = matriks[0][0];
    }
    else if (row == 3 && column == 3)
    {
        hasil[0][0] = (matriks[1][1] * matriks[2][2]) - (matriks[1][2] * matriks[2][1]);
        hasil[0][1] = -((matriks[1][0] * matriks[2][2]) - (matriks[1][2] * matriks[2][0]));
        hasil[0][2] = (matriks[1][0] * matriks[2][1]) - (matriks[1][1] * matriks[2][0]);
        hasil[1][0] = -((matriks[0][1] * matriks[2][2]) - (matriks[0][2] * matriks[2][1]));
        hasil[1][1] = (matriks[0][0] * matriks[2][2]) - (matriks[0][2] * matriks[2][0]);
        hasil[1][2] = -((matriks[0][0] * matriks[2][1]) - (matriks[0][1] * matriks[2][0]));
        hasil[2][0] = (matriks[0][1] * matriks[1][2]) - (matriks[0][2] * matriks[1][1]);
        hasil[2][1] = -((matriks[0][0] * matriks[1][2]) - (matriks[0][2] * matriks[1][0]));
        hasil[2][2] = (matriks[0][0] * matriks[1][1]) - (matriks[0][1] * matriks[1][0]);

        int temp;
        for (int i = 0; i < row; i++)
        {
            for (int j = i + 1; j < column; j++)
            {
                temp = hasil[i][j];
                hasil[i][j] = hasil[j][i];
                hasil[j][i] = temp;
            }
        }

    }
    
    cout << "Adjoin matriks A: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

}

int main()
{
    int pilih;
    do
    {
        system("cls");
        cout << "=========================" << endl;
        cout << "|| Program Matriks C++  ||" << endl;
        cout << "=========================" << endl;
        cout << "|| 1. Penjumlahan       ||" << endl;
        cout << "|| 2. Pengurangan       ||" << endl;
        cout << "|| 3. Perkalian         ||" << endl;
        cout << "|| 4. Transpose         ||" << endl;
        cout << "|| 5. Determinan        ||" << endl;
        cout << "|| 6. Kofaktor          ||" << endl;
        cout << "|| 7. Adjoin            ||" << endl;
        cout << "|| 8. Keluar            ||" << endl;
        cout << "=========================" << endl << endl;
        cout << "Masukkan pilihan kamu: ";
        cin >> pilih;
        cout << endl;
        switch (pilih)
        {
        case 1:
            penjumlahan(); 
            getch(); 
            break;
        case 2:
            pengurangan();
            getch();
            break;
        case 3:
            perkalian(); 
            getch();
            break;
        case 4:
            transpose(); 
            getch();
            break;
        case 5:
            determinan(); 
            getch();
            break;
        case 6:
            kofaktor(); 
            getch();
            break;
        case 7:
            adjoin(); 
            getch();
            break;
        case 8:
            cout << "Terima kasih telah menggunakan program ini" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl; 
            break;
        }
    } while (pilih !=8);
    return 0;
}