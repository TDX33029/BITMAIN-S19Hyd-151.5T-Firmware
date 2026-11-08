// FUN_016a0370 @ 016a0370 size=388 calls_out=1 calls_in=1
// strings: 

int FUN_016a0370(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)(param_1 + 0x10) == -0x80000000) {
    if (*(int *)(param_2 + 0x10) != -0x80000000) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_2 + 0x10) == -0x80000000) {
      return 0xff;
    }
    uVar8 = *(uint *)(param_1 + 0x18);
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar8 != uVar6) {
      return -((uint)(uVar8 >= uVar6 && uVar8 != uVar6) - (uint)(uVar8 < uVar6));
    }
  }
  uVar6 = *(uint *)(param_2 + 0xc);
  uVar8 = *(uint *)(param_1 + 0xc);
  iVar7 = (uint)(uVar8 >= uVar6 && uVar8 != uVar6) - (uint)(uVar8 < uVar6);
  if (uVar8 == uVar6) {
    if (*(int *)(param_1 + 0x10) != -0x80000000) {
      uVar10 = *(uint *)(param_2 + 0x18);
      uVar11 = *(uint *)(param_1 + 0x18);
      uVar6 = uVar10;
      if (uVar11 < uVar10) {
        uVar6 = uVar11;
      }
      iVar1 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_2 + 0x14),uVar6);
      if (iVar1 == 0) {
        iVar1 = uVar11 - uVar10;
      }
      if (iVar1 != 0) {
        iVar7 = (uint)(0 < iVar1) - (uint)(iVar1 < 0);
        goto LAB_016a0454;
      }
    }
    iVar1 = uVar8 + 1;
    puVar2 = (undefined4 *)(*(int *)(param_2 + 8) + 4);
    puVar5 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
    while (iVar1 = iVar1 + -1, iVar1 != 0) {
      uVar9 = *puVar2;
      uVar8 = puVar2[1];
      puVar2 = puVar2 + 3;
      uVar3 = *puVar5;
      uVar10 = puVar5[1];
      puVar5 = puVar5 + 3;
      uVar6 = uVar8;
      if (uVar10 < uVar8) {
        uVar6 = uVar10;
      }
      iVar4 = FUN_016dd50a(uVar3,uVar9,uVar6);
      if (iVar4 == 0) {
        iVar4 = uVar10 - uVar8;
      }
      if (iVar4 != 0) {
        return -((uint)(0 < iVar4) - (uint)(iVar4 < 0));
      }
    }
  }
LAB_016a0454:
  return -iVar7;
}

