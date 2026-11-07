// FUN_006c6634 @ 006c6634 size=364 calls_out=1 calls_in=3
// strings: 

void FUN_006c6634(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  uVar2 = FUN_006c61fc(*param_3,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                       *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  iVar3 = FUN_006c61fc(*param_3,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  iVar4 = 0x18;
  puVar11 = (undefined4 *)(param_1 + (uVar2 | uVar2 << 1) * 4);
  if (iVar3 != 0) {
    iVar4 = 0x24;
  }
  puVar10 = (undefined4 *)(param_1 + iVar4);
  iVar4 = 0x24;
  if (iVar3 != 0) {
    iVar4 = 0x18;
  }
  iVar3 = FUN_006c61fc(*param_3,puVar10[1],puVar10[2],puVar11[1],puVar11[2]);
  puVar12 = (undefined4 *)(param_1 + iVar4);
  puVar7 = (undefined4 *)(param_1 + (uVar2 ^ 1 | (uVar2 ^ 1) << 1) * 4);
  iVar4 = FUN_006c61fc(*param_3,puVar12[1],puVar12[2],puVar7[1],puVar7[2]);
  puVar6 = puVar10;
  if (iVar3 != 0) {
    puVar6 = puVar7;
  }
  puVar8 = puVar7;
  puVar1 = puVar12;
  if (iVar4 != 0) {
    puVar8 = puVar10;
    puVar1 = puVar7;
    puVar6 = puVar12;
  }
  if (iVar3 != 0) {
    puVar8 = puVar11;
  }
  if (iVar3 != 0) {
    puVar11 = puVar10;
  }
  iVar3 = FUN_006c61fc(*param_3,puVar6[1],puVar6[2],puVar8[1],puVar8[2]);
  uVar5 = puVar11[1];
  uVar9 = puVar11[2];
  if (iVar3 == 0) {
    puVar10 = puVar6;
  }
  else {
    puVar10 = puVar8;
    puVar8 = puVar6;
  }
  *param_2 = *puVar11;
  param_2[1] = uVar5;
  param_2[2] = uVar9;
  uVar5 = puVar8[1];
  uVar9 = puVar8[2];
  param_2[3] = *puVar8;
  param_2[4] = uVar5;
  param_2[5] = uVar9;
  uVar5 = puVar10[1];
  uVar9 = puVar10[2];
  param_2[6] = *puVar10;
  param_2[7] = uVar5;
  param_2[8] = uVar9;
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  param_2[9] = *puVar1;
  param_2[10] = uVar5;
  param_2[0xb] = uVar9;
  return;
}

