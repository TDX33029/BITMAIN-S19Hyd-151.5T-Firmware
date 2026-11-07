// FUN_013b8510 @ 013b8510 size=500 calls_out=3 calls_in=2
// strings: 

void FUN_013b8510(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if (*(uint *)(param_2 + 0x15c) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 0x15c),&DAT_01893b70);
  }
  iVar3 = *(int *)(*(int *)(param_2 + 0x158) + param_3 * 4);
  if (iVar3 != 0) {
    *param_1 = 0x30;
    param_1[1] = iVar3;
    return;
  }
  uVar9 = *(uint *)(param_2 + 0x14);
  uVar4 = *(uint *)(param_2 + 0x130) & 0x1f;
  uVar1 = uVar9 >> uVar4;
  if (0x200000 < uVar1) {
    uVar6 = 0x2b;
LAB_013b8560:
    *param_1 = uVar6;
    param_1[1] = uVar4;
    param_1[2] = 0x200000;
    param_1[3] = 0;
    return;
  }
  iVar3 = 1 << uVar4;
  if (*(int *)(param_2 + 0xc) - uVar9 < (uint)(1 << uVar4)) {
    FUN_013c4434(param_2 + 0xc,uVar9,iVar3,8,8);
    uVar9 = *(uint *)(param_2 + 0x14);
  }
  iVar7 = *(int *)(param_2 + 0x10);
  uVar8 = uVar9 + iVar3;
  puVar5 = (undefined4 *)(iVar7 + uVar9 * 8);
  do {
    *puVar5 = 0;
    iVar3 = iVar3 + -1;
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (iVar3 != 0);
  *(uint *)(param_2 + 0x14) = uVar8;
  uVar4 = *(int *)(param_2 + 0x134) + (uVar1 << (*(uint *)(param_2 + 0x130) & 0x1f));
  if (uVar8 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar4,uVar8,&DAT_01893b40);
  }
  puVar5 = (undefined4 *)(iVar7 + uVar4 * 8);
  *puVar5 = 0;
  bVar2 = *(byte *)(param_2 + 0x13c);
  puVar5[1] = 0xfffffc00;
  if ((bVar2 & 1) != 0) {
    uVar4 = *(uint *)(param_2 + 0x140);
    uVar6 = 0x2e;
    if (uVar4 < *(int *)(param_2 + 0x20) * 4 + uVar8 * 8) goto LAB_013b8560;
  }
  if (*(uint *)(param_2 + 0x15c) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 0x15c),&DAT_01893b80);
  }
  iVar7 = *(int *)(param_2 + 0x150);
  iVar3 = *(int *)(param_2 + 0x148);
  *(uint *)(*(int *)(param_2 + 0x158) + param_3 * 4) = uVar1;
  if (iVar7 == iVar3) {
    FUN_013c1038(param_2 + 0x148);
  }
  iVar3 = *(int *)(param_2 + 0x14c);
  *param_1 = 0x30;
  param_1[1] = uVar1;
  *(uint *)(iVar3 + iVar7 * 4) = param_3;
  *(int *)(param_2 + 0x150) = iVar7 + 1;
  return;
}

