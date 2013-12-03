/*
 * Class EXTERNAL_OBJECT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_881 [] = {0,239,880,0xFFFF};
static EIF_TYPE_INDEX gen_type1_881 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_881 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_881 [] = {0,0,0xFFFF};


static struct desc_info desc_881[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, NULL},
	{1, (BODY_INDEX)-1, 239, gen_type0_881},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 880, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_881},
	{14, (BODY_INDEX)-1, 0, gen_type2_881},
	{15, (BODY_INDEX)-1, 880, NULL},
	{16, (BODY_INDEX)-1, 880, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_881},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 14, NULL},
	{21, (BODY_INDEX)-1, 219, NULL},
	{22, (BODY_INDEX)-1, 219, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 15, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 880, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 880, NULL},
	{12787, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{5898, (BODY_INDEX)-1, 190, NULL},
	{12786, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12788, 0, 214, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init881(void);
void Init881(void)
{
	IDSC(desc_881, 0, 880);
	IDSC(desc_881 + 1, 1, 880);
	IDSC(desc_881 + 32, 209, 880);
	IDSC(desc_881 + 34, 373, 880);
}


#ifdef __cplusplus
}
#endif
