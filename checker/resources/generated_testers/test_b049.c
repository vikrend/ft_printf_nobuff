#include "../tools/test_headers.h"
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	printf_ = fopen("../testing_results/test_b049_printf_print", "w");
	printf_ret = fopen("../testing_results/test_b049_printf_ret", "w");
	ft_printf_ret = fopen("../testing_results/test_b049_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

	
//@
	ft_printf("\n#0000");
	fprintf(printf_, "\n#0000");
	ret1 = fprintf(printf_, "|%10.f|", 1024.00445);
	ret2 = ft_printf("|%10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0001");
	fprintf(printf_, "\n#0001");
	ret1 = fprintf(printf_, "|%10.F|", 1024.00445);
	ret2 = ft_printf("|%10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0002");
	fprintf(printf_, "\n#0002");
	ret1 = fprintf(printf_, "|%10.a|", 1024.00445);
	ret2 = ft_printf("|%10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0003");
	fprintf(printf_, "\n#0003");
	ret1 = fprintf(printf_, "|%10.A|", 1024.00445);
	ret2 = ft_printf("|%10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0004");
	fprintf(printf_, "\n#0004");
	ret1 = fprintf(printf_, "|%10.e|", 1024.00445);
	ret2 = ft_printf("|%10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0005");
	fprintf(printf_, "\n#0005");
	ret1 = fprintf(printf_, "|%10.E|", 1024.00445);
	ret2 = ft_printf("|%10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0006");
	fprintf(printf_, "\n#0006");
	ret1 = fprintf(printf_, "|%10.g|", 1024.00445);
	ret2 = ft_printf("|%10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0007");
	fprintf(printf_, "\n#0007");
	ret1 = fprintf(printf_, "|%10.G|", 1024.00445);
	ret2 = ft_printf("|%10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0008");
	fprintf(printf_, "\n#0008");
	ret1 = fprintf(printf_, "|% 10.f|", 1024.00445);
	ret2 = ft_printf("|% 10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0009");
	fprintf(printf_, "\n#0009");
	ret1 = fprintf(printf_, "|% 10.F|", 1024.00445);
	ret2 = ft_printf("|% 10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0010");
	fprintf(printf_, "\n#0010");
	ret1 = fprintf(printf_, "|% 10.a|", 1024.00445);
	ret2 = ft_printf("|% 10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0011");
	fprintf(printf_, "\n#0011");
	ret1 = fprintf(printf_, "|% 10.A|", 1024.00445);
	ret2 = ft_printf("|% 10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0012");
	fprintf(printf_, "\n#0012");
	ret1 = fprintf(printf_, "|% 10.e|", 1024.00445);
	ret2 = ft_printf("|% 10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0013");
	fprintf(printf_, "\n#0013");
	ret1 = fprintf(printf_, "|% 10.E|", 1024.00445);
	ret2 = ft_printf("|% 10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0014");
	fprintf(printf_, "\n#0014");
	ret1 = fprintf(printf_, "|% 10.g|", 1024.00445);
	ret2 = ft_printf("|% 10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0015");
	fprintf(printf_, "\n#0015");
	ret1 = fprintf(printf_, "|% 10.G|", 1024.00445);
	ret2 = ft_printf("|% 10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0016");
	fprintf(printf_, "\n#0016");
	ret1 = fprintf(printf_, "|%010.f|", 1024.00445);
	ret2 = ft_printf("|%010.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0017");
	fprintf(printf_, "\n#0017");
	ret1 = fprintf(printf_, "|%010.F|", 1024.00445);
	ret2 = ft_printf("|%010.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0018");
	fprintf(printf_, "\n#0018");
	ret1 = fprintf(printf_, "|%010.a|", 1024.00445);
	ret2 = ft_printf("|%010.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0019");
	fprintf(printf_, "\n#0019");
	ret1 = fprintf(printf_, "|%010.A|", 1024.00445);
	ret2 = ft_printf("|%010.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0020");
	fprintf(printf_, "\n#0020");
	ret1 = fprintf(printf_, "|%010.e|", 1024.00445);
	ret2 = ft_printf("|%010.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0021");
	fprintf(printf_, "\n#0021");
	ret1 = fprintf(printf_, "|%010.E|", 1024.00445);
	ret2 = ft_printf("|%010.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0022");
	fprintf(printf_, "\n#0022");
	ret1 = fprintf(printf_, "|%010.g|", 1024.00445);
	ret2 = ft_printf("|%010.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0023");
	fprintf(printf_, "\n#0023");
	ret1 = fprintf(printf_, "|%010.G|", 1024.00445);
	ret2 = ft_printf("|%010.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0024");
	fprintf(printf_, "\n#0024");
	ret1 = fprintf(printf_, "|% 010.f|", 1024.00445);
	ret2 = ft_printf("|% 010.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0025");
	fprintf(printf_, "\n#0025");
	ret1 = fprintf(printf_, "|% 010.F|", 1024.00445);
	ret2 = ft_printf("|% 010.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0026");
	fprintf(printf_, "\n#0026");
	ret1 = fprintf(printf_, "|% 010.a|", 1024.00445);
	ret2 = ft_printf("|% 010.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0027");
	fprintf(printf_, "\n#0027");
	ret1 = fprintf(printf_, "|% 010.A|", 1024.00445);
	ret2 = ft_printf("|% 010.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0028");
	fprintf(printf_, "\n#0028");
	ret1 = fprintf(printf_, "|% 010.e|", 1024.00445);
	ret2 = ft_printf("|% 010.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0029");
	fprintf(printf_, "\n#0029");
	ret1 = fprintf(printf_, "|% 010.E|", 1024.00445);
	ret2 = ft_printf("|% 010.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0030");
	fprintf(printf_, "\n#0030");
	ret1 = fprintf(printf_, "|% 010.g|", 1024.00445);
	ret2 = ft_printf("|% 010.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0031");
	fprintf(printf_, "\n#0031");
	ret1 = fprintf(printf_, "|% 010.G|", 1024.00445);
	ret2 = ft_printf("|% 010.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0032");
	fprintf(printf_, "\n#0032");
	ret1 = fprintf(printf_, "|%+10.f|", 1024.00445);
	ret2 = ft_printf("|%+10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0033");
	fprintf(printf_, "\n#0033");
	ret1 = fprintf(printf_, "|%+10.F|", 1024.00445);
	ret2 = ft_printf("|%+10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0034");
	fprintf(printf_, "\n#0034");
	ret1 = fprintf(printf_, "|%+10.a|", 1024.00445);
	ret2 = ft_printf("|%+10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0035");
	fprintf(printf_, "\n#0035");
	ret1 = fprintf(printf_, "|%+10.A|", 1024.00445);
	ret2 = ft_printf("|%+10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0036");
	fprintf(printf_, "\n#0036");
	ret1 = fprintf(printf_, "|%+10.e|", 1024.00445);
	ret2 = ft_printf("|%+10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0037");
	fprintf(printf_, "\n#0037");
	ret1 = fprintf(printf_, "|%+10.E|", 1024.00445);
	ret2 = ft_printf("|%+10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0038");
	fprintf(printf_, "\n#0038");
	ret1 = fprintf(printf_, "|%+10.g|", 1024.00445);
	ret2 = ft_printf("|%+10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0039");
	fprintf(printf_, "\n#0039");
	ret1 = fprintf(printf_, "|%+10.G|", 1024.00445);
	ret2 = ft_printf("|%+10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0040");
	fprintf(printf_, "\n#0040");
	ret1 = fprintf(printf_, "|% +10.f|", 1024.00445);
	ret2 = ft_printf("|% +10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0041");
	fprintf(printf_, "\n#0041");
	ret1 = fprintf(printf_, "|% +10.F|", 1024.00445);
	ret2 = ft_printf("|% +10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0042");
	fprintf(printf_, "\n#0042");
	ret1 = fprintf(printf_, "|% +10.a|", 1024.00445);
	ret2 = ft_printf("|% +10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0043");
	fprintf(printf_, "\n#0043");
	ret1 = fprintf(printf_, "|% +10.A|", 1024.00445);
	ret2 = ft_printf("|% +10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0044");
	fprintf(printf_, "\n#0044");
	ret1 = fprintf(printf_, "|% +10.e|", 1024.00445);
	ret2 = ft_printf("|% +10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0045");
	fprintf(printf_, "\n#0045");
	ret1 = fprintf(printf_, "|% +10.E|", 1024.00445);
	ret2 = ft_printf("|% +10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0046");
	fprintf(printf_, "\n#0046");
	ret1 = fprintf(printf_, "|% +10.g|", 1024.00445);
	ret2 = ft_printf("|% +10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0047");
	fprintf(printf_, "\n#0047");
	ret1 = fprintf(printf_, "|% +10.G|", 1024.00445);
	ret2 = ft_printf("|% +10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0048");
	fprintf(printf_, "\n#0048");
	ret1 = fprintf(printf_, "|%0+10.f|", 1024.00445);
	ret2 = ft_printf("|%0+10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0049");
	fprintf(printf_, "\n#0049");
	ret1 = fprintf(printf_, "|%0+10.F|", 1024.00445);
	ret2 = ft_printf("|%0+10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0050");
	fprintf(printf_, "\n#0050");
	ret1 = fprintf(printf_, "|%0+10.a|", 1024.00445);
	ret2 = ft_printf("|%0+10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0051");
	fprintf(printf_, "\n#0051");
	ret1 = fprintf(printf_, "|%0+10.A|", 1024.00445);
	ret2 = ft_printf("|%0+10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0052");
	fprintf(printf_, "\n#0052");
	ret1 = fprintf(printf_, "|%0+10.e|", 1024.00445);
	ret2 = ft_printf("|%0+10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0053");
	fprintf(printf_, "\n#0053");
	ret1 = fprintf(printf_, "|%0+10.E|", 1024.00445);
	ret2 = ft_printf("|%0+10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0054");
	fprintf(printf_, "\n#0054");
	ret1 = fprintf(printf_, "|%0+10.g|", 1024.00445);
	ret2 = ft_printf("|%0+10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0055");
	fprintf(printf_, "\n#0055");
	ret1 = fprintf(printf_, "|%0+10.G|", 1024.00445);
	ret2 = ft_printf("|%0+10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0056");
	fprintf(printf_, "\n#0056");
	ret1 = fprintf(printf_, "|% 0+10.f|", 1024.00445);
	ret2 = ft_printf("|% 0+10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0057");
	fprintf(printf_, "\n#0057");
	ret1 = fprintf(printf_, "|% 0+10.F|", 1024.00445);
	ret2 = ft_printf("|% 0+10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0058");
	fprintf(printf_, "\n#0058");
	ret1 = fprintf(printf_, "|% 0+10.a|", 1024.00445);
	ret2 = ft_printf("|% 0+10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0059");
	fprintf(printf_, "\n#0059");
	ret1 = fprintf(printf_, "|% 0+10.A|", 1024.00445);
	ret2 = ft_printf("|% 0+10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0060");
	fprintf(printf_, "\n#0060");
	ret1 = fprintf(printf_, "|% 0+10.e|", 1024.00445);
	ret2 = ft_printf("|% 0+10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0061");
	fprintf(printf_, "\n#0061");
	ret1 = fprintf(printf_, "|% 0+10.E|", 1024.00445);
	ret2 = ft_printf("|% 0+10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0062");
	fprintf(printf_, "\n#0062");
	ret1 = fprintf(printf_, "|% 0+10.g|", 1024.00445);
	ret2 = ft_printf("|% 0+10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0063");
	fprintf(printf_, "\n#0063");
	ret1 = fprintf(printf_, "|% 0+10.G|", 1024.00445);
	ret2 = ft_printf("|% 0+10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0064");
	fprintf(printf_, "\n#0064");
	ret1 = fprintf(printf_, "|%-10.f|", 1024.00445);
	ret2 = ft_printf("|%-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0065");
	fprintf(printf_, "\n#0065");
	ret1 = fprintf(printf_, "|%-10.F|", 1024.00445);
	ret2 = ft_printf("|%-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0066");
	fprintf(printf_, "\n#0066");
	ret1 = fprintf(printf_, "|%-10.a|", 1024.00445);
	ret2 = ft_printf("|%-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0067");
	fprintf(printf_, "\n#0067");
	ret1 = fprintf(printf_, "|%-10.A|", 1024.00445);
	ret2 = ft_printf("|%-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0068");
	fprintf(printf_, "\n#0068");
	ret1 = fprintf(printf_, "|%-10.e|", 1024.00445);
	ret2 = ft_printf("|%-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0069");
	fprintf(printf_, "\n#0069");
	ret1 = fprintf(printf_, "|%-10.E|", 1024.00445);
	ret2 = ft_printf("|%-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0070");
	fprintf(printf_, "\n#0070");
	ret1 = fprintf(printf_, "|%-10.g|", 1024.00445);
	ret2 = ft_printf("|%-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0071");
	fprintf(printf_, "\n#0071");
	ret1 = fprintf(printf_, "|%-10.G|", 1024.00445);
	ret2 = ft_printf("|%-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0072");
	fprintf(printf_, "\n#0072");
	ret1 = fprintf(printf_, "|% -10.f|", 1024.00445);
	ret2 = ft_printf("|% -10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0073");
	fprintf(printf_, "\n#0073");
	ret1 = fprintf(printf_, "|% -10.F|", 1024.00445);
	ret2 = ft_printf("|% -10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0074");
	fprintf(printf_, "\n#0074");
	ret1 = fprintf(printf_, "|% -10.a|", 1024.00445);
	ret2 = ft_printf("|% -10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0075");
	fprintf(printf_, "\n#0075");
	ret1 = fprintf(printf_, "|% -10.A|", 1024.00445);
	ret2 = ft_printf("|% -10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0076");
	fprintf(printf_, "\n#0076");
	ret1 = fprintf(printf_, "|% -10.e|", 1024.00445);
	ret2 = ft_printf("|% -10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0077");
	fprintf(printf_, "\n#0077");
	ret1 = fprintf(printf_, "|% -10.E|", 1024.00445);
	ret2 = ft_printf("|% -10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0078");
	fprintf(printf_, "\n#0078");
	ret1 = fprintf(printf_, "|% -10.g|", 1024.00445);
	ret2 = ft_printf("|% -10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0079");
	fprintf(printf_, "\n#0079");
	ret1 = fprintf(printf_, "|% -10.G|", 1024.00445);
	ret2 = ft_printf("|% -10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0080");
	fprintf(printf_, "\n#0080");
	ret1 = fprintf(printf_, "|%0-10.f|", 1024.00445);
	ret2 = ft_printf("|%0-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0081");
	fprintf(printf_, "\n#0081");
	ret1 = fprintf(printf_, "|%0-10.F|", 1024.00445);
	ret2 = ft_printf("|%0-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0082");
	fprintf(printf_, "\n#0082");
	ret1 = fprintf(printf_, "|%0-10.a|", 1024.00445);
	ret2 = ft_printf("|%0-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0083");
	fprintf(printf_, "\n#0083");
	ret1 = fprintf(printf_, "|%0-10.A|", 1024.00445);
	ret2 = ft_printf("|%0-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0084");
	fprintf(printf_, "\n#0084");
	ret1 = fprintf(printf_, "|%0-10.e|", 1024.00445);
	ret2 = ft_printf("|%0-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0085");
	fprintf(printf_, "\n#0085");
	ret1 = fprintf(printf_, "|%0-10.E|", 1024.00445);
	ret2 = ft_printf("|%0-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0086");
	fprintf(printf_, "\n#0086");
	ret1 = fprintf(printf_, "|%0-10.g|", 1024.00445);
	ret2 = ft_printf("|%0-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0087");
	fprintf(printf_, "\n#0087");
	ret1 = fprintf(printf_, "|%0-10.G|", 1024.00445);
	ret2 = ft_printf("|%0-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0088");
	fprintf(printf_, "\n#0088");
	ret1 = fprintf(printf_, "|% 0-10.f|", 1024.00445);
	ret2 = ft_printf("|% 0-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0089");
	fprintf(printf_, "\n#0089");
	ret1 = fprintf(printf_, "|% 0-10.F|", 1024.00445);
	ret2 = ft_printf("|% 0-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0090");
	fprintf(printf_, "\n#0090");
	ret1 = fprintf(printf_, "|% 0-10.a|", 1024.00445);
	ret2 = ft_printf("|% 0-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0091");
	fprintf(printf_, "\n#0091");
	ret1 = fprintf(printf_, "|% 0-10.A|", 1024.00445);
	ret2 = ft_printf("|% 0-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0092");
	fprintf(printf_, "\n#0092");
	ret1 = fprintf(printf_, "|% 0-10.e|", 1024.00445);
	ret2 = ft_printf("|% 0-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0093");
	fprintf(printf_, "\n#0093");
	ret1 = fprintf(printf_, "|% 0-10.E|", 1024.00445);
	ret2 = ft_printf("|% 0-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0094");
	fprintf(printf_, "\n#0094");
	ret1 = fprintf(printf_, "|% 0-10.g|", 1024.00445);
	ret2 = ft_printf("|% 0-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0095");
	fprintf(printf_, "\n#0095");
	ret1 = fprintf(printf_, "|% 0-10.G|", 1024.00445);
	ret2 = ft_printf("|% 0-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0096");
	fprintf(printf_, "\n#0096");
	ret1 = fprintf(printf_, "|%+-10.f|", 1024.00445);
	ret2 = ft_printf("|%+-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0097");
	fprintf(printf_, "\n#0097");
	ret1 = fprintf(printf_, "|%+-10.F|", 1024.00445);
	ret2 = ft_printf("|%+-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0098");
	fprintf(printf_, "\n#0098");
	ret1 = fprintf(printf_, "|%+-10.a|", 1024.00445);
	ret2 = ft_printf("|%+-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0099");
	fprintf(printf_, "\n#0099");
	ret1 = fprintf(printf_, "|%+-10.A|", 1024.00445);
	ret2 = ft_printf("|%+-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0100");
	fprintf(printf_, "\n#0100");
	ret1 = fprintf(printf_, "|%+-10.e|", 1024.00445);
	ret2 = ft_printf("|%+-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0101");
	fprintf(printf_, "\n#0101");
	ret1 = fprintf(printf_, "|%+-10.E|", 1024.00445);
	ret2 = ft_printf("|%+-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0102");
	fprintf(printf_, "\n#0102");
	ret1 = fprintf(printf_, "|%+-10.g|", 1024.00445);
	ret2 = ft_printf("|%+-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0103");
	fprintf(printf_, "\n#0103");
	ret1 = fprintf(printf_, "|%+-10.G|", 1024.00445);
	ret2 = ft_printf("|%+-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0104");
	fprintf(printf_, "\n#0104");
	ret1 = fprintf(printf_, "|% +-10.f|", 1024.00445);
	ret2 = ft_printf("|% +-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0105");
	fprintf(printf_, "\n#0105");
	ret1 = fprintf(printf_, "|% +-10.F|", 1024.00445);
	ret2 = ft_printf("|% +-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0106");
	fprintf(printf_, "\n#0106");
	ret1 = fprintf(printf_, "|% +-10.a|", 1024.00445);
	ret2 = ft_printf("|% +-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0107");
	fprintf(printf_, "\n#0107");
	ret1 = fprintf(printf_, "|% +-10.A|", 1024.00445);
	ret2 = ft_printf("|% +-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0108");
	fprintf(printf_, "\n#0108");
	ret1 = fprintf(printf_, "|% +-10.e|", 1024.00445);
	ret2 = ft_printf("|% +-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0109");
	fprintf(printf_, "\n#0109");
	ret1 = fprintf(printf_, "|% +-10.E|", 1024.00445);
	ret2 = ft_printf("|% +-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0110");
	fprintf(printf_, "\n#0110");
	ret1 = fprintf(printf_, "|% +-10.g|", 1024.00445);
	ret2 = ft_printf("|% +-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0111");
	fprintf(printf_, "\n#0111");
	ret1 = fprintf(printf_, "|% +-10.G|", 1024.00445);
	ret2 = ft_printf("|% +-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0112");
	fprintf(printf_, "\n#0112");
	ret1 = fprintf(printf_, "|%0+-10.f|", 1024.00445);
	ret2 = ft_printf("|%0+-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0113");
	fprintf(printf_, "\n#0113");
	ret1 = fprintf(printf_, "|%0+-10.F|", 1024.00445);
	ret2 = ft_printf("|%0+-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0114");
	fprintf(printf_, "\n#0114");
	ret1 = fprintf(printf_, "|%0+-10.a|", 1024.00445);
	ret2 = ft_printf("|%0+-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0115");
	fprintf(printf_, "\n#0115");
	ret1 = fprintf(printf_, "|%0+-10.A|", 1024.00445);
	ret2 = ft_printf("|%0+-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0116");
	fprintf(printf_, "\n#0116");
	ret1 = fprintf(printf_, "|%0+-10.e|", 1024.00445);
	ret2 = ft_printf("|%0+-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0117");
	fprintf(printf_, "\n#0117");
	ret1 = fprintf(printf_, "|%0+-10.E|", 1024.00445);
	ret2 = ft_printf("|%0+-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0118");
	fprintf(printf_, "\n#0118");
	ret1 = fprintf(printf_, "|%0+-10.g|", 1024.00445);
	ret2 = ft_printf("|%0+-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0119");
	fprintf(printf_, "\n#0119");
	ret1 = fprintf(printf_, "|%0+-10.G|", 1024.00445);
	ret2 = ft_printf("|%0+-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0120");
	fprintf(printf_, "\n#0120");
	ret1 = fprintf(printf_, "|% 0+-10.f|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0121");
	fprintf(printf_, "\n#0121");
	ret1 = fprintf(printf_, "|% 0+-10.F|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0122");
	fprintf(printf_, "\n#0122");
	ret1 = fprintf(printf_, "|% 0+-10.a|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0123");
	fprintf(printf_, "\n#0123");
	ret1 = fprintf(printf_, "|% 0+-10.A|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0124");
	fprintf(printf_, "\n#0124");
	ret1 = fprintf(printf_, "|% 0+-10.e|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0125");
	fprintf(printf_, "\n#0125");
	ret1 = fprintf(printf_, "|% 0+-10.E|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0126");
	fprintf(printf_, "\n#0126");
	ret1 = fprintf(printf_, "|% 0+-10.g|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0127");
	fprintf(printf_, "\n#0127");
	ret1 = fprintf(printf_, "|% 0+-10.G|", 1024.00445);
	ret2 = ft_printf("|% 0+-10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0128");
	fprintf(printf_, "\n#0128");
	ret1 = fprintf(printf_, "|%#10.f|", 1024.00445);
	ret2 = ft_printf("|%#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0129");
	fprintf(printf_, "\n#0129");
	ret1 = fprintf(printf_, "|%#10.F|", 1024.00445);
	ret2 = ft_printf("|%#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0130");
	fprintf(printf_, "\n#0130");
	ret1 = fprintf(printf_, "|%#10.a|", 1024.00445);
	ret2 = ft_printf("|%#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0131");
	fprintf(printf_, "\n#0131");
	ret1 = fprintf(printf_, "|%#10.A|", 1024.00445);
	ret2 = ft_printf("|%#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0132");
	fprintf(printf_, "\n#0132");
	ret1 = fprintf(printf_, "|%#10.e|", 1024.00445);
	ret2 = ft_printf("|%#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0133");
	fprintf(printf_, "\n#0133");
	ret1 = fprintf(printf_, "|%#10.E|", 1024.00445);
	ret2 = ft_printf("|%#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0134");
	fprintf(printf_, "\n#0134");
	ret1 = fprintf(printf_, "|%#10.g|", 1024.00445);
	ret2 = ft_printf("|%#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0135");
	fprintf(printf_, "\n#0135");
	ret1 = fprintf(printf_, "|%#10.G|", 1024.00445);
	ret2 = ft_printf("|%#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0136");
	fprintf(printf_, "\n#0136");
	ret1 = fprintf(printf_, "|% #10.f|", 1024.00445);
	ret2 = ft_printf("|% #10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0137");
	fprintf(printf_, "\n#0137");
	ret1 = fprintf(printf_, "|% #10.F|", 1024.00445);
	ret2 = ft_printf("|% #10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0138");
	fprintf(printf_, "\n#0138");
	ret1 = fprintf(printf_, "|% #10.a|", 1024.00445);
	ret2 = ft_printf("|% #10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0139");
	fprintf(printf_, "\n#0139");
	ret1 = fprintf(printf_, "|% #10.A|", 1024.00445);
	ret2 = ft_printf("|% #10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0140");
	fprintf(printf_, "\n#0140");
	ret1 = fprintf(printf_, "|% #10.e|", 1024.00445);
	ret2 = ft_printf("|% #10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0141");
	fprintf(printf_, "\n#0141");
	ret1 = fprintf(printf_, "|% #10.E|", 1024.00445);
	ret2 = ft_printf("|% #10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0142");
	fprintf(printf_, "\n#0142");
	ret1 = fprintf(printf_, "|% #10.g|", 1024.00445);
	ret2 = ft_printf("|% #10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0143");
	fprintf(printf_, "\n#0143");
	ret1 = fprintf(printf_, "|% #10.G|", 1024.00445);
	ret2 = ft_printf("|% #10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0144");
	fprintf(printf_, "\n#0144");
	ret1 = fprintf(printf_, "|%0#10.f|", 1024.00445);
	ret2 = ft_printf("|%0#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0145");
	fprintf(printf_, "\n#0145");
	ret1 = fprintf(printf_, "|%0#10.F|", 1024.00445);
	ret2 = ft_printf("|%0#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0146");
	fprintf(printf_, "\n#0146");
	ret1 = fprintf(printf_, "|%0#10.a|", 1024.00445);
	ret2 = ft_printf("|%0#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0147");
	fprintf(printf_, "\n#0147");
	ret1 = fprintf(printf_, "|%0#10.A|", 1024.00445);
	ret2 = ft_printf("|%0#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0148");
	fprintf(printf_, "\n#0148");
	ret1 = fprintf(printf_, "|%0#10.e|", 1024.00445);
	ret2 = ft_printf("|%0#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0149");
	fprintf(printf_, "\n#0149");
	ret1 = fprintf(printf_, "|%0#10.E|", 1024.00445);
	ret2 = ft_printf("|%0#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0150");
	fprintf(printf_, "\n#0150");
	ret1 = fprintf(printf_, "|%0#10.g|", 1024.00445);
	ret2 = ft_printf("|%0#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0151");
	fprintf(printf_, "\n#0151");
	ret1 = fprintf(printf_, "|%0#10.G|", 1024.00445);
	ret2 = ft_printf("|%0#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0152");
	fprintf(printf_, "\n#0152");
	ret1 = fprintf(printf_, "|% 0#10.f|", 1024.00445);
	ret2 = ft_printf("|% 0#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0153");
	fprintf(printf_, "\n#0153");
	ret1 = fprintf(printf_, "|% 0#10.F|", 1024.00445);
	ret2 = ft_printf("|% 0#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0154");
	fprintf(printf_, "\n#0154");
	ret1 = fprintf(printf_, "|% 0#10.a|", 1024.00445);
	ret2 = ft_printf("|% 0#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0155");
	fprintf(printf_, "\n#0155");
	ret1 = fprintf(printf_, "|% 0#10.A|", 1024.00445);
	ret2 = ft_printf("|% 0#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0156");
	fprintf(printf_, "\n#0156");
	ret1 = fprintf(printf_, "|% 0#10.e|", 1024.00445);
	ret2 = ft_printf("|% 0#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0157");
	fprintf(printf_, "\n#0157");
	ret1 = fprintf(printf_, "|% 0#10.E|", 1024.00445);
	ret2 = ft_printf("|% 0#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0158");
	fprintf(printf_, "\n#0158");
	ret1 = fprintf(printf_, "|% 0#10.g|", 1024.00445);
	ret2 = ft_printf("|% 0#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0159");
	fprintf(printf_, "\n#0159");
	ret1 = fprintf(printf_, "|% 0#10.G|", 1024.00445);
	ret2 = ft_printf("|% 0#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0160");
	fprintf(printf_, "\n#0160");
	ret1 = fprintf(printf_, "|%+#10.f|", 1024.00445);
	ret2 = ft_printf("|%+#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0161");
	fprintf(printf_, "\n#0161");
	ret1 = fprintf(printf_, "|%+#10.F|", 1024.00445);
	ret2 = ft_printf("|%+#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0162");
	fprintf(printf_, "\n#0162");
	ret1 = fprintf(printf_, "|%+#10.a|", 1024.00445);
	ret2 = ft_printf("|%+#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0163");
	fprintf(printf_, "\n#0163");
	ret1 = fprintf(printf_, "|%+#10.A|", 1024.00445);
	ret2 = ft_printf("|%+#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0164");
	fprintf(printf_, "\n#0164");
	ret1 = fprintf(printf_, "|%+#10.e|", 1024.00445);
	ret2 = ft_printf("|%+#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0165");
	fprintf(printf_, "\n#0165");
	ret1 = fprintf(printf_, "|%+#10.E|", 1024.00445);
	ret2 = ft_printf("|%+#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0166");
	fprintf(printf_, "\n#0166");
	ret1 = fprintf(printf_, "|%+#10.g|", 1024.00445);
	ret2 = ft_printf("|%+#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0167");
	fprintf(printf_, "\n#0167");
	ret1 = fprintf(printf_, "|%+#10.G|", 1024.00445);
	ret2 = ft_printf("|%+#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0168");
	fprintf(printf_, "\n#0168");
	ret1 = fprintf(printf_, "|% +#10.f|", 1024.00445);
	ret2 = ft_printf("|% +#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0169");
	fprintf(printf_, "\n#0169");
	ret1 = fprintf(printf_, "|% +#10.F|", 1024.00445);
	ret2 = ft_printf("|% +#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0170");
	fprintf(printf_, "\n#0170");
	ret1 = fprintf(printf_, "|% +#10.a|", 1024.00445);
	ret2 = ft_printf("|% +#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0171");
	fprintf(printf_, "\n#0171");
	ret1 = fprintf(printf_, "|% +#10.A|", 1024.00445);
	ret2 = ft_printf("|% +#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0172");
	fprintf(printf_, "\n#0172");
	ret1 = fprintf(printf_, "|% +#10.e|", 1024.00445);
	ret2 = ft_printf("|% +#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0173");
	fprintf(printf_, "\n#0173");
	ret1 = fprintf(printf_, "|% +#10.E|", 1024.00445);
	ret2 = ft_printf("|% +#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0174");
	fprintf(printf_, "\n#0174");
	ret1 = fprintf(printf_, "|% +#10.g|", 1024.00445);
	ret2 = ft_printf("|% +#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0175");
	fprintf(printf_, "\n#0175");
	ret1 = fprintf(printf_, "|% +#10.G|", 1024.00445);
	ret2 = ft_printf("|% +#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0176");
	fprintf(printf_, "\n#0176");
	ret1 = fprintf(printf_, "|%0+#10.f|", 1024.00445);
	ret2 = ft_printf("|%0+#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0177");
	fprintf(printf_, "\n#0177");
	ret1 = fprintf(printf_, "|%0+#10.F|", 1024.00445);
	ret2 = ft_printf("|%0+#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0178");
	fprintf(printf_, "\n#0178");
	ret1 = fprintf(printf_, "|%0+#10.a|", 1024.00445);
	ret2 = ft_printf("|%0+#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0179");
	fprintf(printf_, "\n#0179");
	ret1 = fprintf(printf_, "|%0+#10.A|", 1024.00445);
	ret2 = ft_printf("|%0+#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0180");
	fprintf(printf_, "\n#0180");
	ret1 = fprintf(printf_, "|%0+#10.e|", 1024.00445);
	ret2 = ft_printf("|%0+#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0181");
	fprintf(printf_, "\n#0181");
	ret1 = fprintf(printf_, "|%0+#10.E|", 1024.00445);
	ret2 = ft_printf("|%0+#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0182");
	fprintf(printf_, "\n#0182");
	ret1 = fprintf(printf_, "|%0+#10.g|", 1024.00445);
	ret2 = ft_printf("|%0+#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0183");
	fprintf(printf_, "\n#0183");
	ret1 = fprintf(printf_, "|%0+#10.G|", 1024.00445);
	ret2 = ft_printf("|%0+#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0184");
	fprintf(printf_, "\n#0184");
	ret1 = fprintf(printf_, "|% 0+#10.f|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0185");
	fprintf(printf_, "\n#0185");
	ret1 = fprintf(printf_, "|% 0+#10.F|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0186");
	fprintf(printf_, "\n#0186");
	ret1 = fprintf(printf_, "|% 0+#10.a|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0187");
	fprintf(printf_, "\n#0187");
	ret1 = fprintf(printf_, "|% 0+#10.A|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0188");
	fprintf(printf_, "\n#0188");
	ret1 = fprintf(printf_, "|% 0+#10.e|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0189");
	fprintf(printf_, "\n#0189");
	ret1 = fprintf(printf_, "|% 0+#10.E|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0190");
	fprintf(printf_, "\n#0190");
	ret1 = fprintf(printf_, "|% 0+#10.g|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0191");
	fprintf(printf_, "\n#0191");
	ret1 = fprintf(printf_, "|% 0+#10.G|", 1024.00445);
	ret2 = ft_printf("|% 0+#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0192");
	fprintf(printf_, "\n#0192");
	ret1 = fprintf(printf_, "|%-#10.f|", 1024.00445);
	ret2 = ft_printf("|%-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0193");
	fprintf(printf_, "\n#0193");
	ret1 = fprintf(printf_, "|%-#10.F|", 1024.00445);
	ret2 = ft_printf("|%-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0194");
	fprintf(printf_, "\n#0194");
	ret1 = fprintf(printf_, "|%-#10.a|", 1024.00445);
	ret2 = ft_printf("|%-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0195");
	fprintf(printf_, "\n#0195");
	ret1 = fprintf(printf_, "|%-#10.A|", 1024.00445);
	ret2 = ft_printf("|%-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0196");
	fprintf(printf_, "\n#0196");
	ret1 = fprintf(printf_, "|%-#10.e|", 1024.00445);
	ret2 = ft_printf("|%-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0197");
	fprintf(printf_, "\n#0197");
	ret1 = fprintf(printf_, "|%-#10.E|", 1024.00445);
	ret2 = ft_printf("|%-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0198");
	fprintf(printf_, "\n#0198");
	ret1 = fprintf(printf_, "|%-#10.g|", 1024.00445);
	ret2 = ft_printf("|%-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0199");
	fprintf(printf_, "\n#0199");
	ret1 = fprintf(printf_, "|%-#10.G|", 1024.00445);
	ret2 = ft_printf("|%-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0200");
	fprintf(printf_, "\n#0200");
	ret1 = fprintf(printf_, "|% -#10.f|", 1024.00445);
	ret2 = ft_printf("|% -#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0201");
	fprintf(printf_, "\n#0201");
	ret1 = fprintf(printf_, "|% -#10.F|", 1024.00445);
	ret2 = ft_printf("|% -#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0202");
	fprintf(printf_, "\n#0202");
	ret1 = fprintf(printf_, "|% -#10.a|", 1024.00445);
	ret2 = ft_printf("|% -#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0203");
	fprintf(printf_, "\n#0203");
	ret1 = fprintf(printf_, "|% -#10.A|", 1024.00445);
	ret2 = ft_printf("|% -#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0204");
	fprintf(printf_, "\n#0204");
	ret1 = fprintf(printf_, "|% -#10.e|", 1024.00445);
	ret2 = ft_printf("|% -#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0205");
	fprintf(printf_, "\n#0205");
	ret1 = fprintf(printf_, "|% -#10.E|", 1024.00445);
	ret2 = ft_printf("|% -#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0206");
	fprintf(printf_, "\n#0206");
	ret1 = fprintf(printf_, "|% -#10.g|", 1024.00445);
	ret2 = ft_printf("|% -#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0207");
	fprintf(printf_, "\n#0207");
	ret1 = fprintf(printf_, "|% -#10.G|", 1024.00445);
	ret2 = ft_printf("|% -#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0208");
	fprintf(printf_, "\n#0208");
	ret1 = fprintf(printf_, "|%0-#10.f|", 1024.00445);
	ret2 = ft_printf("|%0-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0209");
	fprintf(printf_, "\n#0209");
	ret1 = fprintf(printf_, "|%0-#10.F|", 1024.00445);
	ret2 = ft_printf("|%0-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0210");
	fprintf(printf_, "\n#0210");
	ret1 = fprintf(printf_, "|%0-#10.a|", 1024.00445);
	ret2 = ft_printf("|%0-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0211");
	fprintf(printf_, "\n#0211");
	ret1 = fprintf(printf_, "|%0-#10.A|", 1024.00445);
	ret2 = ft_printf("|%0-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0212");
	fprintf(printf_, "\n#0212");
	ret1 = fprintf(printf_, "|%0-#10.e|", 1024.00445);
	ret2 = ft_printf("|%0-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0213");
	fprintf(printf_, "\n#0213");
	ret1 = fprintf(printf_, "|%0-#10.E|", 1024.00445);
	ret2 = ft_printf("|%0-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0214");
	fprintf(printf_, "\n#0214");
	ret1 = fprintf(printf_, "|%0-#10.g|", 1024.00445);
	ret2 = ft_printf("|%0-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0215");
	fprintf(printf_, "\n#0215");
	ret1 = fprintf(printf_, "|%0-#10.G|", 1024.00445);
	ret2 = ft_printf("|%0-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0216");
	fprintf(printf_, "\n#0216");
	ret1 = fprintf(printf_, "|% 0-#10.f|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0217");
	fprintf(printf_, "\n#0217");
	ret1 = fprintf(printf_, "|% 0-#10.F|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0218");
	fprintf(printf_, "\n#0218");
	ret1 = fprintf(printf_, "|% 0-#10.a|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0219");
	fprintf(printf_, "\n#0219");
	ret1 = fprintf(printf_, "|% 0-#10.A|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0220");
	fprintf(printf_, "\n#0220");
	ret1 = fprintf(printf_, "|% 0-#10.e|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0221");
	fprintf(printf_, "\n#0221");
	ret1 = fprintf(printf_, "|% 0-#10.E|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0222");
	fprintf(printf_, "\n#0222");
	ret1 = fprintf(printf_, "|% 0-#10.g|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0223");
	fprintf(printf_, "\n#0223");
	ret1 = fprintf(printf_, "|% 0-#10.G|", 1024.00445);
	ret2 = ft_printf("|% 0-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0224");
	fprintf(printf_, "\n#0224");
	ret1 = fprintf(printf_, "|%+-#10.f|", 1024.00445);
	ret2 = ft_printf("|%+-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0225");
	fprintf(printf_, "\n#0225");
	ret1 = fprintf(printf_, "|%+-#10.F|", 1024.00445);
	ret2 = ft_printf("|%+-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0226");
	fprintf(printf_, "\n#0226");
	ret1 = fprintf(printf_, "|%+-#10.a|", 1024.00445);
	ret2 = ft_printf("|%+-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0227");
	fprintf(printf_, "\n#0227");
	ret1 = fprintf(printf_, "|%+-#10.A|", 1024.00445);
	ret2 = ft_printf("|%+-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0228");
	fprintf(printf_, "\n#0228");
	ret1 = fprintf(printf_, "|%+-#10.e|", 1024.00445);
	ret2 = ft_printf("|%+-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0229");
	fprintf(printf_, "\n#0229");
	ret1 = fprintf(printf_, "|%+-#10.E|", 1024.00445);
	ret2 = ft_printf("|%+-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0230");
	fprintf(printf_, "\n#0230");
	ret1 = fprintf(printf_, "|%+-#10.g|", 1024.00445);
	ret2 = ft_printf("|%+-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0231");
	fprintf(printf_, "\n#0231");
	ret1 = fprintf(printf_, "|%+-#10.G|", 1024.00445);
	ret2 = ft_printf("|%+-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0232");
	fprintf(printf_, "\n#0232");
	ret1 = fprintf(printf_, "|% +-#10.f|", 1024.00445);
	ret2 = ft_printf("|% +-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0233");
	fprintf(printf_, "\n#0233");
	ret1 = fprintf(printf_, "|% +-#10.F|", 1024.00445);
	ret2 = ft_printf("|% +-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0234");
	fprintf(printf_, "\n#0234");
	ret1 = fprintf(printf_, "|% +-#10.a|", 1024.00445);
	ret2 = ft_printf("|% +-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0235");
	fprintf(printf_, "\n#0235");
	ret1 = fprintf(printf_, "|% +-#10.A|", 1024.00445);
	ret2 = ft_printf("|% +-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0236");
	fprintf(printf_, "\n#0236");
	ret1 = fprintf(printf_, "|% +-#10.e|", 1024.00445);
	ret2 = ft_printf("|% +-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0237");
	fprintf(printf_, "\n#0237");
	ret1 = fprintf(printf_, "|% +-#10.E|", 1024.00445);
	ret2 = ft_printf("|% +-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0238");
	fprintf(printf_, "\n#0238");
	ret1 = fprintf(printf_, "|% +-#10.g|", 1024.00445);
	ret2 = ft_printf("|% +-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0239");
	fprintf(printf_, "\n#0239");
	ret1 = fprintf(printf_, "|% +-#10.G|", 1024.00445);
	ret2 = ft_printf("|% +-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0240");
	fprintf(printf_, "\n#0240");
	ret1 = fprintf(printf_, "|%0+-#10.f|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0241");
	fprintf(printf_, "\n#0241");
	ret1 = fprintf(printf_, "|%0+-#10.F|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0242");
	fprintf(printf_, "\n#0242");
	ret1 = fprintf(printf_, "|%0+-#10.a|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0243");
	fprintf(printf_, "\n#0243");
	ret1 = fprintf(printf_, "|%0+-#10.A|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0244");
	fprintf(printf_, "\n#0244");
	ret1 = fprintf(printf_, "|%0+-#10.e|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0245");
	fprintf(printf_, "\n#0245");
	ret1 = fprintf(printf_, "|%0+-#10.E|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0246");
	fprintf(printf_, "\n#0246");
	ret1 = fprintf(printf_, "|%0+-#10.g|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0247");
	fprintf(printf_, "\n#0247");
	ret1 = fprintf(printf_, "|%0+-#10.G|", 1024.00445);
	ret2 = ft_printf("|%0+-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0248");
	fprintf(printf_, "\n#0248");
	ret1 = fprintf(printf_, "|% 0+-#10.f|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.f|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0249");
	fprintf(printf_, "\n#0249");
	ret1 = fprintf(printf_, "|% 0+-#10.F|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.F|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0250");
	fprintf(printf_, "\n#0250");
	ret1 = fprintf(printf_, "|% 0+-#10.a|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.a|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0251");
	fprintf(printf_, "\n#0251");
	ret1 = fprintf(printf_, "|% 0+-#10.A|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.A|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0252");
	fprintf(printf_, "\n#0252");
	ret1 = fprintf(printf_, "|% 0+-#10.e|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.e|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0253");
	fprintf(printf_, "\n#0253");
	ret1 = fprintf(printf_, "|% 0+-#10.E|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.E|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0254");
	fprintf(printf_, "\n#0254");
	ret1 = fprintf(printf_, "|% 0+-#10.g|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.g|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0255");
	fprintf(printf_, "\n#0255");
	ret1 = fprintf(printf_, "|% 0+-#10.G|", 1024.00445);
	ret2 = ft_printf("|% 0+-#10.G|", 1024.00445);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_b049_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

