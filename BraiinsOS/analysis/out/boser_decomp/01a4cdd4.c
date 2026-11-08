// FUN_01a4cdd4 @ 01a4cdd4 size=216 calls_out=0 calls_in=1
// strings: 

void FUN_01a4cdd4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  bVar16 = *(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x10);
  uVar15 = (uint)bVar16;
  uVar14 = (uint)!bVar16;
  iVar2 = 0x30;
  bVar16 = *(uint *)(param_1 + 0x58) < *(uint *)(param_1 + 0x40);
  puVar11 = (undefined4 *)(param_1 + (uVar15 | uVar15 << 1) * 8);
  if (bVar16) {
    iVar2 = 0x48;
  }
  puVar6 = (undefined4 *)(param_1 + iVar2);
  iVar2 = 0x48;
  puVar12 = (undefined4 *)(param_1 + (uVar14 | uVar14 << 1) * 8);
  if (bVar16) {
    iVar2 = 0x30;
  }
  puVar10 = (undefined4 *)(param_1 + iVar2);
  puVar9 = puVar6;
  if ((uint)puVar6[4] < (uint)puVar11[4]) {
    puVar9 = puVar12;
  }
  puVar13 = puVar12;
  puVar1 = puVar10;
  if ((uint)puVar10[4] < (uint)puVar12[4]) {
    puVar13 = puVar6;
    puVar1 = puVar12;
    puVar9 = puVar10;
  }
  puVar12 = puVar11;
  if ((uint)puVar6[4] < (uint)puVar11[4]) {
    puVar12 = puVar6;
    puVar13 = puVar11;
  }
  uVar14 = puVar13[4];
  uVar15 = puVar9[4];
  uVar3 = puVar12[1];
  uVar4 = puVar12[2];
  uVar5 = puVar12[3];
  uVar7 = puVar12[4];
  uVar8 = puVar12[5];
  puVar11 = puVar13;
  if (uVar14 <= uVar15) {
    puVar11 = puVar9;
  }
  *param_2 = *puVar12;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  if (uVar14 > uVar15) {
    puVar13 = puVar9;
  }
  uVar3 = puVar13[1];
  uVar4 = puVar13[2];
  uVar5 = puVar13[3];
  uVar7 = puVar13[4];
  uVar8 = puVar13[5];
  param_2[6] = *puVar13;
  param_2[7] = uVar3;
  param_2[8] = uVar4;
  param_2[9] = uVar5;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  uVar3 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  uVar7 = puVar11[4];
  uVar8 = puVar11[5];
  param_2[0xc] = *puVar11;
  param_2[0xd] = uVar3;
  param_2[0xe] = uVar4;
  param_2[0xf] = uVar5;
  param_2[0x10] = uVar7;
  param_2[0x11] = uVar8;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  param_2[0x12] = *puVar1;
  param_2[0x13] = uVar3;
  param_2[0x14] = uVar4;
  param_2[0x15] = uVar5;
  param_2[0x16] = uVar7;
  param_2[0x17] = uVar8;
  return;
}

