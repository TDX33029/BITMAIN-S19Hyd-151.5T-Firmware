// FUN_01b85618 @ 01b85618 size=96 calls_out=1 calls_in=2
// strings: 

uint FUN_01b85618(undefined2 *param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = param_4 + 3;
  if (param_2 < uVar1) {
    uVar1 = 0xffffffba;
  }
  else {
    param_5 = param_5 + param_4 * 8;
    *param_1 = (short)param_5;
    *(char *)(param_1 + 1) = (char)((uint)param_5 >> 0x10);
    FUN_01bed4e2((int)param_1 + 3,param_3,param_4);
  }
  return uVar1;
}

