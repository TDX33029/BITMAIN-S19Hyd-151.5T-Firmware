// FUN_0127b634 @ 0127b634 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_0127b634(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1[2];
  if (uVar6 < param_2) {
    uVar5 = param_2 - uVar6;
    if (*param_1 - uVar6 < uVar5) {
      FUN_0127ade8(param_1,uVar6,uVar5);
      puVar3 = (undefined4 *)(param_1[1] + param_1[2] * 4);
      uVar2 = param_1[2];
    }
    else {
      puVar3 = (undefined4 *)(param_1[1] + uVar6 * 4);
      uVar2 = uVar6;
    }
    if (1 < uVar5) {
      iVar1 = ~uVar6 + param_2;
      puVar4 = puVar3;
      do {
        puVar3 = puVar4 + 1;
        *puVar4 = 0;
        iVar1 = iVar1 + -1;
        puVar4 = puVar3;
      } while (iVar1 != 0);
      uVar2 = (uVar5 + uVar2) - 1;
    }
    *puVar3 = 0;
    param_2 = uVar2 + 1;
  }
  param_1[2] = param_2;
  return;
}

