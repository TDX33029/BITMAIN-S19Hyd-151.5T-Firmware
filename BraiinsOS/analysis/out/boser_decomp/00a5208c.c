// FUN_00a5208c @ 00a5208c size=124 calls_out=1 calls_in=17
// strings: 

void FUN_00a5208c(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_4 != 0) {
    do {
      uVar2 = *(uint *)(param_2 + 4);
      uVar1 = uVar2 ^ 0x7fffffff;
      if (param_4 < uVar1) {
        uVar1 = param_4;
      }
      FUN_01284394(param_2,param_3,uVar1);
      if (uVar2 == 0x7fffffff) {
        *param_1 = 2;
        param_1[1] = &DAT_01d2e7b8;
        return;
      }
      param_3 = param_3 + uVar1;
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

