// FUN_01a54a98 @ 01a54a98 size=176 calls_out=1 calls_in=2
// strings: 

int FUN_01a54a98(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_4 = param_4 >> 3;
  if (param_4 != 0) {
    param_1 = FUN_01a54a98(param_1,param_1 + param_4 * 0x60,param_4 * 0xa8 + param_1,param_4);
    param_2 = FUN_01a54a98(param_2,param_2 + param_4 * 0x60,param_4 * 0xa8 + param_2,param_4);
    param_3 = FUN_01a54a98(param_3,param_3 + param_4 * 0x60,param_4 * 0xa8 + param_3,param_4);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x10);
  if (uVar2 < uVar1 != uVar1 < *(uint *)(param_3 + 0x10)) {
    param_2 = param_3;
  }
  if (uVar2 < uVar1 != uVar2 < *(uint *)(param_3 + 0x10)) {
    param_2 = param_1;
  }
  return param_2;
}

