void add(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real, int *res_img) {
	*res_real = oper1_real + oper2_real;
	*res_img = oper1_img + oper2_img;
}

void subtract(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real, int *res_img) {
	*res_real = oper1_real - oper2_real;
	*res_img = oper1_img - oper2_img;
}

void multiply(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real, int *res_img) {
	*res_real = (oper1_real * oper2_real) - (oper1_img * oper2_img);
	*res_img = (oper1_img * oper2_real) + (oper1_real * oper2_img);
}

void divide(int oper1_real, int oper1_img, int oper2_real, int oper2_img, int *res_real1, int *res_real2, int *res_img1, int *res_img2) {
	*res_real1 = (oper1_real * oper2_real) + (oper1_img * oper2_img);
	*res_real2 = (oper2_real*oper2_real + oper2_img*oper2_img);
	*res_img1 = (oper2_img * oper1_real - oper1_real * oper2_img);
	*res_img2 = (oper2_real*oper2_real + oper2_img*oper2_img);
}
