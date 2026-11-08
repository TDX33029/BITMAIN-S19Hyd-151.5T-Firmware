// FUN_00081d8c @ 00081d8c  size=104  callers=0
// program: bmminer


void FUN_00081d8c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  FUN_00081200(param_1,0,param_3,0x14,
               CONCAT13((&DAT_000a9900)[param_2 >> 0x18],
                        CONCAT12((&DAT_000a9900)[(param_2 & 0xffffff) >> 0x10],
                                 CONCAT11((&DAT_000a9900)[(param_2 & 0xffff) >> 8],
                                          (&DAT_000a9900)[param_2 & 0xff]))));
  return;
}

