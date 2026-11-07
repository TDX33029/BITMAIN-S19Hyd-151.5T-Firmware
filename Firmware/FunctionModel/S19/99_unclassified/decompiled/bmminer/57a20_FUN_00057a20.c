// FUN_00057a20 @ 00057a20  size=108  callers=1
// program: bmminer


void FUN_00057a20(undefined4 param_1,uint param_2)

{
  FUN_000571b0(param_1,1,0,0x14,
               CONCAT13((&DAT_00073560)[param_2 >> 0x18],
                        CONCAT12((&DAT_00073560)[(param_2 & 0xffffff) >> 0x10],
                                 CONCAT11((&DAT_00073560)[(param_2 & 0xffff) >> 8],
                                          (&DAT_00073560)[param_2 & 0xff]))));
  return;
}

