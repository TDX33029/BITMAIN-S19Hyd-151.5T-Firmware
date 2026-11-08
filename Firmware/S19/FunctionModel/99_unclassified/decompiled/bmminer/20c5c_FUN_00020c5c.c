// FUN_00020c5c @ 00020c5c  size=188  callers=1
// program: bmminer


void FUN_00020c5c(uint param_1,uint param_2,undefined4 param_3,int param_4,undefined1 param_5,
                 undefined1 param_6)

{
  if (param_4 == 0) {
    FUN_000571b0(param_6,0,param_5,0x1c,
                 (param_2 & 0xff) << 8 | (param_1 >> 1 & 0x7f) << 0x11 | 0x1000000);
    return;
  }
  FUN_000571b0(param_6,0,param_5,0x1c);
  return;
}

