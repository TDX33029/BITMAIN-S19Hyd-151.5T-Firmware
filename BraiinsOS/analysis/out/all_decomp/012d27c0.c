// FUN_012d27c0 @ 012d27c0 size=128 calls_out=2 calls_in=1
// strings: 

void FUN_012d27c0(uint *param_1,int param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  
  if ((0xfffffff < param_4) || (param_4 = param_4 * 0x10, 0x7ffffffc < param_4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    uVar2 = thunk_FUN_016d4a50(param_4);
  }
  else {
    uVar2 = thunk_FUN_016d4ea4(param_3,param_4);
  }
  bVar1 = uVar2 == 0;
  if (bVar1) {
    uVar2 = 4;
  }
  param_1[1] = uVar2;
  param_1[2] = param_4;
  *param_1 = (uint)bVar1;
  return;
}

