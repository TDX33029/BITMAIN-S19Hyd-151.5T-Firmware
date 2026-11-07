// FUN_0171ca68 @ 0171ca68 size=216 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_0171ca68(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x18);
  if ((iVar5 < 1) || (-1 < *(int *)(*(int *)(param_2 + 0x14) + (iVar5 + 0x3fffffff) * 4))) {
    uVar1 = FUN_0171c9d0(param_1,param_2,param_2,param_3);
    return uVar1;
  }
  iVar5 = FUN_0171464c(param_1,iVar5);
  uVar1 = 0;
  if (iVar5 != 0) {
    puVar2 = (uint *)*param_1;
    puVar4 = *(uint **)(param_2 + 0x14);
    *puVar2 = -*puVar4;
    iVar5 = *(int *)(param_2 + 0x18);
    if (1 < iVar5) {
      iVar3 = 1;
      do {
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = ~*puVar4;
        iVar5 = *(int *)(param_2 + 0x18);
      } while (iVar3 < iVar5);
    }
    uVar1 = 1;
    param_1[1] = iVar5;
    param_1[3] = 0;
  }
  return uVar1;
}

