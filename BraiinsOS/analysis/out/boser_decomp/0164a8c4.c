// FUN_0164a8c4 @ 0164a8c4 size=160 calls_out=1 calls_in=2
// strings: 

void FUN_0164a8c4(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1[2];
  if (uVar6 < param_2) {
    uVar5 = param_2 - uVar6;
    uVar1 = uVar6;
    if (*param_1 - uVar6 < uVar5) {
      FUN_006520b4(param_1,uVar6,uVar5,4,4);
      uVar1 = param_1[2];
    }
    puVar2 = (undefined4 *)(param_1[1] + uVar1 * 4);
    if (1 < uVar5) {
      iVar4 = ~uVar6 + param_2;
      puVar3 = puVar2;
      do {
        puVar2 = puVar3 + 1;
        *puVar3 = 0;
        iVar4 = iVar4 + -1;
        puVar3 = puVar2;
      } while (iVar4 != 0);
      uVar1 = (uVar1 + uVar5) - 1;
    }
    param_2 = uVar1 + 1;
    *puVar2 = 0;
  }
  param_1[2] = param_2;
  return;
}

