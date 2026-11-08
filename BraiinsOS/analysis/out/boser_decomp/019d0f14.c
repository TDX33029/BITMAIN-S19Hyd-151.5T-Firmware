// FUN_019d0f14 @ 019d0f14 size=324 calls_out=3 calls_in=1
// strings: assertion failed: store.contains(item)

void FUN_019d0f14(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  
  uVar9 = FUN_019d0db0(param_3);
  uVar4 = (uint)(uVar9 >> 0x20);
  if ((((uVar9 & 1) == 0) || (*(uint *)(param_3 + 0x2c) <= uVar4)) ||
     (*(int *)(*(int *)(param_3 + 0x28) + uVar4 * 0x28) == 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: store.contains(item)",0x26,param_4);
  }
  piVar1 = (int *)FUN_019d0d20(param_3,param_2,param_4);
  if (*piVar1 == 1) {
    iVar5 = piVar1[1];
    iVar2 = FUN_019d0d20(param_3,param_2,param_4);
    uVar7 = *(undefined4 *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = FUN_019d0d20(param_3,iVar5,param_4);
    *(undefined4 *)(iVar2 + 8) = uVar7;
    *(undefined4 *)(iVar2 + 0xc) = uVar8;
  }
  iVar2 = FUN_019d0d20(param_3,param_2,param_4);
  if (*(int *)(iVar2 + 8) == 1) {
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    puVar3 = (undefined4 *)FUN_019d0d20(param_3,param_2,param_4);
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    param_1 = (undefined4 *)FUN_019d0d20(param_3,uVar8,param_4);
    *param_1 = uVar6;
  }
  else {
    puVar3 = (undefined4 *)FUN_019d0d20(param_3,param_2,param_4);
    uVar7 = puVar3[1];
    *param_1 = *puVar3;
  }
  param_1[1] = uVar7;
  puVar3 = (undefined4 *)FUN_019d0d20(param_3,param_2,param_4);
  *puVar3 = 0;
  iVar2 = FUN_019d0d20(param_3,param_2,param_4);
  *(undefined4 *)(iVar2 + 8) = 0;
  return;
}

