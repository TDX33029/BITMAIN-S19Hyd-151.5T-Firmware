// FUN_000585e8 @ 000585e8  size=136  callers=1
// program: bmminer


void FUN_000585e8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  FUN_000571b0(param_1,0,param_2,0x3c,param_3 & 3 | 0x80008104);
  usleep(10000);
  FUN_000571b0(param_1,0,param_2,0x3c,param_3 & 3 | 0x80000204);
  return;
}

