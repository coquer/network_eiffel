/*
 * Class INET_ADDRESS_IMPL_V4
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_869 [] = {0,239,868,0xFFFF};
static EIF_TYPE_INDEX gen_type1_869 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_869 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_869 [] = {0,0,0xFFFF};


static struct desc_info desc_869[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, NULL},
	{1, (BODY_INDEX)-1, 239, gen_type0_869},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 868, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_869},
	{14, (BODY_INDEX)-1, 0, gen_type2_869},
	{15, (BODY_INDEX)-1, 868, NULL},
	{16, (BODY_INDEX)-1, 868, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_869},
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
	{28, (BODY_INDEX)-1, 868, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 868, NULL},
	{12515, (BODY_INDEX)-1, 219, NULL},
	{12516, (BODY_INDEX)-1, 869, NULL},
	{12517, (BODY_INDEX)-1, 869, NULL},
	{12518, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init869(void);
void Init869(void)
{
	IDSC(desc_869, 0, 868);
	IDSC(desc_869 + 1, 1, 868);
	IDSC(desc_869 + 32, 361, 868);
	IDSC(desc_869 + 35, 362, 868);
}


#ifdef __cplusplus
}
#endif
