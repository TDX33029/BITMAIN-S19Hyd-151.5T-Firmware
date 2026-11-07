// FUN_00082950 @ 00082950  size=136  callers=1
// program: bmminer


void FUN_00082950(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FUN_00081200(param_1,0,param_2,0x3c,param_3 & 3 | 0x80008f04);
  usleep(10000);
  FUN_00081200(param_1,0,param_2,0x3c,param_3 & 3 | 0x80001004);
  return;
}

