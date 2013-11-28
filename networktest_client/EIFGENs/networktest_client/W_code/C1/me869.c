/*
 * Code for class MESSAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F869_7020(EIF_REFERENCE);
extern void F869_7021(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F869_7022(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F869_7023(EIF_REFERENCE);
extern void EIF_Minit869(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MESSAGE}.message */
EIF_TYPED_VALUE F869_7020 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(868,100, Dtype(Current)));
	return r;
}


/* {MESSAGE}.make */
void F869_7021 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 868, Current, 0, 1, 12544);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(868, Current, 12544);
	RTCC(arg1, 868, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 868, 100, 0xF80000DA, 0); /* message */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(868, 100, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MESSAGE}.setmessage */
void F869_7022 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "setmessage";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 868, Current, 0, 1, 12545);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(868, Current, 12545);
	RTCC(arg1, 868, l_feature_name, 1, eif_attached_type(218));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 868, 100, 0xF80000DA, 0); /* message */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(868, 100, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MESSAGE}.getmessage */
EIF_TYPED_VALUE F869_7023 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "getmessage";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 868, Current, 0, 0, 12546);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(868, Current, 12546);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000DA, 0,0); /* Result */
	
	Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(868, 100, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

void EIF_Minit869 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
