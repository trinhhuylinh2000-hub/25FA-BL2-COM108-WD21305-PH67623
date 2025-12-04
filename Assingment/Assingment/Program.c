// Assingment

#include <stdio.h>
#include <math.h>

void kiemTraSoNguyen()
{
    float x;
    printf("Nhap vao so x: ");
    scanf("%f", &x);
    if (x == (int)x) {
        printf("%.0f la so nguyen.\n", x);

        int n = (int)x;

        
        int laNguyenTo = 1; 

        if (n < 2) {
            laNguyenTo = 0;
        }
        else 
        {
            for (int i = 2; i <= sqrt(n); i++) 
            {
                if (n % i == 0) 
                {
                    laNguyenTo = 0;
                    break;
                }
            }
        }

        if (laNguyenTo == 1) {
            printf("%d la so nguyen to.\n", n);
        }
        else 
        {
            printf("%d khong phai la so nguyen to.\n", n);
        }

        
        int canBac2 = (int)sqrt(n);
        if (canBac2 * canBac2 == n) 
        {
            printf("%d la so chinh phuong.\n", n);
        }
        else {
            printf("%d khong phai la so chinh phuong.\n", n);
        }

    }
    else 
    {
        printf("%.2f khong phai la so nguyen.\n", x);
        printf("Vi x khong phai so nguyen nen khong xet so nguyen to va so chinh phuong.\n");
    }
}
void timUocSoChungVaBoiChungCua2So()
{
    int x, y;
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    printf("Nhap vao so nguyen y: ");
    scanf("%d", &y);

    int xBanDau = x;
    int yBanDau = y;

    if (x == 0 || y == 0)
    {
        printf("Uoc chung lon nhat la: %d\n", x + y);
        printf("Khong co Boi chung nho nhat vi co so 0\n");
    }
    else
    {
        if (x < 0)
        {
            x = -x;
        }
        if (y < 0)
        {
            y = -y;
        }
        while (x != y)
        {
            if (x > y)
            {
                x = x - y;
            }
            else
            {
                y = y - x;
            }
        }
        int uocChungLonNhat = x;
        printf("Uoc chung lon nhat cua 2 so la: %d\n", uocChungLonNhat);

        int boiChungNhoNhat = (xBanDau * yBanDau) / uocChungLonNhat;
        if (boiChungNhoNhat < 0)
        {
            boiChungNhoNhat = -boiChungNhoNhat;
        }
        printf("Boi chung nho nhat cua 2 so la: %d\n", boiChungNhoNhat);
    }
}
void chuongTrinhTinhTienChoQuanKaraoke()
{
    int gioBatDau, gioKetThuc;
    int thoiGian;
    float tongTien;
    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &gioBatDau);

    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &gioKetThuc);
    if (gioBatDau < 12 || gioBatDau >= 23 || gioKetThuc <= 12 || gioKetThuc > 23) {
        printf("Loi: Quan chi hoat dong tu 12h den 23h.\n");
        return;
    }
    if (gioBatDau >= gioKetThuc) {
        printf("Loi: Gio ket thuc phai lon hon gio bat dau.\n");
        return;
    }

    thoiGian = gioKetThuc - gioBatDau;
    printf("Thoi gian hat: %d gio\n", thoiGian);


    if (thoiGian <= 3) 
    {
        tongTien = thoiGian * 150000;
    }
    else 
    {
       
        tongTien = (3 * 150000) + ((thoiGian - 3) * 105000);
    }
    
    if (gioBatDau >= 14 &gioBatDau <= 17) {
        printf("- Giam 10% khung gio(14h-17h).\n");
        tongTien = tongTien * 0.9;
    }

    printf("TONG TIEN THANH TOAN: %.0f VND\n", tongTien);
}
void tinhTienDien()
{
    float kwh;       
    float tongTien;
    printf("Nhap so kWh dien su dung: ");
    scanf("%f", &kwh);

    if (kwh < 0) 
    {
        printf("So kWh khong hop le (phai >= 0).\n");
        return;
    }

    if (kwh <= 50) 
    {
        tongTien = kwh * 1678;
    }

    else if (kwh <= 100) 
    {

        tongTien = (50 * 1678) + ((kwh - 50) * 1734);
    }
    else if (kwh <= 200) 
    {
        tongTien = (50 * 1678) + (50 * 1734) + ((kwh - 100) * 2014);
    }
    else if (kwh <= 300) 
    {
        tongTien = (50 * 1678) + (50 * 1734) + (100 * 2014) +
            ((kwh - 200) * 2536);
    }
    else if (kwh <= 400) 
    {
        tongTien = (50 * 1678) + (50 * 1734) + (100 * 2014) +
            (100 * 2536) + ((kwh - 300) * 2834);
    }
    else 
    {
        
        tongTien = (50 * 1678) + (50 * 1734) + (100 * 2014) +
            (100 * 2536) + (100 * 2834) + ((kwh - 400) * 2927);
    }

    printf("So dien tieu thu: %.1f kWh\n", kwh);
    printf("Tong tien can thanh toan: %.0f dong\n", tongTien);
}
void chucNangDoiTien()
{
    long soTien;
    int i;
    int soTo;

    int menhGia[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };

    printf("Nhap so tien can doi: ");
    scanf("%ld", &soTien);

    if (soTien <= 0) 
    {
        printf("So tien phai lon hon 0.\n");
        return;
    }

    printf("Ket qua doi tien cho %ld:\n", soTien);

    for (i = 0; i < 9; i++) 
    {

        soTo = soTien / menhGia[i];

        if (soTo > 0) {
            printf("Menh gia %d: %d to\n", menhGia[i], soTo);

            soTien = soTien % menhGia[i];
        }
    }
}
void xayDungChucNangTinhLaiXuatvayNganHangVayTraGop()
{        
        long khoanVay;
        long goc, lai, tong;
        long duNoDauKy, duNoCuoiKy;
        int thang;
        printf("Nhap so tien vay: ");
        scanf("%ld", &khoanVay);
        goc = khoanVay / 12;

        printf("\n%-6s %-12s %-12s %-15s %-15s\n",
            "Thang", "Lai (5%)", "Goc", "Tong tra", "Con lai");
        printf("------------------------------------------------------------------\n");
        thang = 1;

        while (thang <= 12) 
        {
            duNoDauKy = khoanVay - (goc * (thang - 1));
            lai = duNoDauKy * 5 / 100;
            tong = goc + lai;
            duNoCuoiKy = duNoDauKy - goc;
            if (thang == 12) 
            {
                duNoCuoiKy = 0;
            }
            printf("%-6d %-12ld %-12ld %-15ld %-15ld\n",
                thang, lai, goc, tong, duNoCuoiKy);
            thang++;
        }
        printf("------------------------------------------------------------------\n");
    
}
void xayDungChuongTrinhVayTienMuaXe()
{
    double giaXe = 500000000;
    double vay, traTruoc, goc, lai, duNo;
    double phanTram;
    int thang = 1;
    printf("Gia xe 500 trieu. Nhap %% muon vay: ");
    scanf("%lf", &phanTram);
    vay = giaXe * phanTram / 100;
    traTruoc = giaXe - vay;
    goc = vay / 288;
    duNo = vay;

    printf("- TRA TRUOC: %.0f\n", traTruoc);
    printf("- VAY: %.0f (Tra gop 288 thang)\n", vay);
    printf("Thang  Goc       Lai       Tong      Con Lai\n");

    while (thang <= 288) 
    {
        lai = duNo * 0.006; 

        duNo = duNo - goc; 

        if (duNo < 0) 
        {  
            duNo = 0;
        }

        printf("%-6d %-9.0f %-9.0f %-9.0f %-9.0f\n",
            thang, goc, lai, goc + lai, duNo);

        thang++;
    }
}
void sapXepThongTinSinhVien()
{
    float diem;
  
    do
    {
        printf("Nhap diem sinh vien (0-10): ");
        scanf("%f", &diem);

        if (diem < 0 || diem > 10)
        {
            printf("Diem khong hop le! Vui long nhap lai.");
            printf("\n");
        }
    } while (diem < 0 || diem > 10);
     
    {
        if (diem >= 9)
        {
            printf("Hoc luc: Xuat sac");
            printf("\n");
        }
        else if (diem >= 8)
        {
            printf("Hoc luc: Gioi");
            printf("\n");
        }
        else if (diem >= 6.5)
        {
            printf("Hoc luc: Kha");
            printf("\n");
        }
        else if (diem >= 5)
        {
            printf("Hoc luc: Trung binh");
            printf("\n");
        }
        else if (diem < 5)
        {
            printf("Hoc luc: Yeu");
            printf("\n");
        }
        else
        {
            printf("Hoc luc: Kem");
            printf("\n");
        }

    }
}
void xayDungGameFpoly()
{
}
void xayDungChuongTrinhTinhToanPhanSo()
{
}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            timUocSoChungVaBoiChungCua2So();
            break;
        case 3:
            chuongTrinhTinhTienChoQuanKaraoke();
            break;
        case 4:
            tinhTienDien();
            break;
        case 5:
            chucNangDoiTien();
            break;
        case 6:
            xayDungChucNangTinhLaiXuatvayNganHangVayTraGop();
            break;
        case 7:
            xayDungChuongTrinhVayTienMuaXe();
            break;
        case 8:
            sapXepThongTinSinhVien();
            break;
        case 9:
            xayDungGameFpoly();
            break;
        case 10:
            xayDungChuongTrinhTinhToanPhanSo();
            break;
        case 0:
            printf("Thoat\n");
            break;
        default:
            printf("Chon sai. Chuc nang hop le [0-10]");
            break;
        }

        printf("Tiep tuc thuc hien chuc nang nay? [1=Co | 0=Khong]: ");
        scanf("%d", &tiepTuc);
        system("cls");
    }

}
int main()
{
    int chonChucNang;
    do
    {
        printf("Menu\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("Chon chuc nang tren Menu: ");
        scanf("%d", &chonChucNang);
        lapChucNang(chonChucNang);
    } while (chonChucNang != 0);
}

