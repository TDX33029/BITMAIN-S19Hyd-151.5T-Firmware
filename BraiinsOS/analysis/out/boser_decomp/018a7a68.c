// FUN_018a7a68 @ 018a7a68 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_018a7a68(int *param_1,uint param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
    param_2 = param_2 - uVar3;
    if (*param_1 - uVar3 < param_2) {
      FUN_006520b4(param_1,uVar3,param_2,1,1);
      uVar3 = param_1[2];
    }
    iVar2 = param_1[1];
    puVar1 = (undefined1 *)(iVar2 + uVar3);
    if (1 < param_2) {
      FUN_01bed93e(puVar1,param_3,param_2 - 1);
      uVar3 = (param_2 - 1) + uVar3;
      puVar1 = (undefined1 *)(iVar2 + uVar3);
    }
    param_2 = uVar3 + 1;
    *puVar1 = (char)param_3;
  }
  param_1[2] = param_2;
  return;
}

