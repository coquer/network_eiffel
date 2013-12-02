/*
 * Class PACKET
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_860 [] = {0,239,859,0xFFFF};
static EIF_TYPE_INDEX gen_type1_860 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_860 [] = {0,0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_860 [] = {0,0,0xFFFF};


static struct desc_info desc_860[] = {
	{(BODY_INDEX) 12467, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, NULL},
	{1, (BODY_INDEX)-1, 239, gen_type0_860},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{12464, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 859, NULL},
	{12465, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_860},
	{14, (BODY_INDEX)-1, 0, gen_type2_860},
	{15, (BODY_INDEX)-1, 859, NULL},
	{16, (BODY_INDEX)-1, 859, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_860},
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
	{28, (BODY_INDEX)-1, 859, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 859, NULL},
	{12457, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12458, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12459, (BODY_INDEX)-1, 205, NULL},
	{12460, (BODY_INDEX)-1, 184, NULL},
	{12461, (BODY_INDEX)-1, 184, NULL},
	{12462, (BODY_INDEX)-1, 190, NULL},
	{12463, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12466, 0, 150, NULL},
};

extern void Init860(void);
void Init860(void)
{
	IDSC(desc_860, 0, 859);
	IDSC(desc_860 + 1, 1, 859);
	IDSC(desc_860 + 32, 371, 859);
}


#ifdef __cplusplus
}
#endif
