// FUN_00f00a30 @ 00f00a30 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_00f00a30(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar3 = *(uint *)(param_4 + 4) ^ 0x7fffffff;
    uVar2 = param_3 + ((LZCOUNT(param_3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
    if (uVar3 < uVar2) {
      uVar1 = 1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
    }
    else {
      FUN_00f00a98(param_2,param_3,param_4);
    }
  }
  *param_1 = uVar1;
  return;
}

