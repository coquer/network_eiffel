/*
 * Code for class APPLICATION
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F873_7393(EIF_REFERENCE);
extern void F873_7157(EIF_REFERENCE);
extern void F873_7158(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit873(void);

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

/* {APPLICATION}.thumbs */
EIF_TYPED_VALUE F873_7393 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(872,224, Dtype(Current)));
	return r;
}


/* {APPLICATION}.make */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F873_7157 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	RTXI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLXL;
	
	RTEAA(l_feature_name, 872, Current, 3, 0, 12680);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(872, Current, 12680);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1337L);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Starting server...\012",19,565977610);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 8, dtype))(Current, ur1x);
	RTHOOK(3);
	RTDBGAL(Current, 2, 0xF800036F, 0, 0); /* loc2 */
	
	tr1 = RTLN(879);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(879, 435, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(879, 444, "listen", loc2))(loc2, ui4_1x);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) break;
		RTHOOK(7);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 220, dtype))(Current, ur1x);
		RTHOOK(8);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		
		loc1++;
	}
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(879, 290, "cleanup", loc2))(loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(5);
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(879, 290, "cleanup", loc2))(loc2);
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(5);
#undef ur1
#undef ui4_1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {APPLICATION}.process */
void F873_7158 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 872, Current, 2, 1, 12681);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(872, Current, 12681);
	RTCC(arg1, 872, l_feature_name, 1, eif_attached_type(879));
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("Waiting for client...\012",22,1678330378);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 8, dtype))(Current, ur1x);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(879, 445, "accept", arg1))(arg1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("Client connected\012",17,1876791306);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 8, dtype))(Current, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(879, 432, "accepted", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(5);
		ur1 = RTCCL(loc1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 209, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		loc2 = RTRV(eif_non_attached_type(868),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(868, 103, "getmessage", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 8, dtype))(Current, ur1x);
			RTHOOK(7);
			RTDBGAA(Current, dtype, 872, 224, 0x10000000, 1); /* thumbs */
			
			(*(EIF_INTEGER_32 *)(Current + RTWA(872, 224, dtype)))++;
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(872, 224, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
				RTHOOK(9);
				tr1 = RTMS_EX_H("ALL READY!!",11,1056918305);
				ur1 = tr1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 8, dtype))(Current, ur1x);
			}
		} else {
			RTHOOK(10);
			tr1 = RTMS_EX_H("I don\'t want that shit.. FUCK YOU!",34,1983146273);
			ur1 = tr1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(872, 8, dtype))(Current, ur1x);
		}
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(879, 291, "close", loc1))(loc1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

void EIF_Minit873 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
