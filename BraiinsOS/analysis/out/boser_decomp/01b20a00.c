// FUN_01b20a00 @ 01b20a00 size=120 calls_out=1 calls_in=1
// strings: mod_u16 | /aws-lc/crypto/fipsmodule/bn/div_extra.c | constant_time_declassify_int(n < d)

uint FUN_01b20a00(uint param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = (int)((ulonglong)param_4 * (ulonglong)param_1 >> 0x20);
  param_1 = param_1 - param_2 * (iVar1 + (param_1 - iVar1 >> 1) >> (param_3 - 1U & 0xff));
  if (param_2 <= param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("constant_time_declassify_int(n < d)","/aws-lc/crypto/fipsmodule/bn/div_extra.c",
                 0x1f,"mod_u16");
  }
  return param_1 & 0xffff;
}

