struct complex {
	int real;
	int img;
};
struct complex_res {
	int real1, real2;
	int img1, img2;
};

void add(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real, int *res_img);
void subtract(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real, int *res_img);
void multiply(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real, int *res_img);
void divide(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real1, int *res_real2, int *res_img1, int *res_img2);
