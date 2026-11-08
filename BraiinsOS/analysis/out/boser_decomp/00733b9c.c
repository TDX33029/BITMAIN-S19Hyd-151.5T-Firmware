// FUN_00733b9c @ 00733b9c size=300 calls_out=0 calls_in=1
// strings: 

void FUN_00733b9c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  byte in_Q;
  
  uVar7 = *(uint *)(param_1 + 0xc);
  uVar10 = *(uint *)(param_1 + 0x24);
  uVar13 = *(uint *)(param_1 + 0x54);
  bVar19 = (uint)(*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0x20)) <= uVar10 - uVar7;
  uVar15 = *(uint *)(param_1 + 0x3c);
  uVar8 = (uint)(uVar10 <= uVar7 && bVar19);
  uVar7 = (uint)(uVar10 > uVar7 || !bVar19);
  iVar5 = 0x30;
  bVar19 = (uint)(*(uint *)(param_1 + 0x38) <= *(uint *)(param_1 + 0x50)) <= uVar13 - uVar15;
  puVar17 = (undefined4 *)(param_1 + (uVar8 | uVar8 << 1) * 8);
  if (uVar13 <= uVar15 && bVar19) {
    iVar5 = 0x48;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  iVar5 = 0x48;
  if (uVar13 <= uVar15 && bVar19) {
    iVar5 = 0x30;
  }
  puVar18 = (undefined4 *)(param_1 + iVar5);
  puVar2 = (undefined4 *)(param_1 + (uVar7 | uVar7 << 1) * 8);
  uVar7 = puVar4[3];
  uVar10 = puVar17[3];
  bVar19 = uVar7 - uVar10 < (uint)((uint)puVar17[2] <= (uint)puVar4[2]);
  puVar14 = puVar4;
  if (uVar10 >= uVar7 && !bVar19) {
    puVar14 = puVar2;
  }
  puVar3 = puVar2;
  puVar1 = puVar18;
  if ((uint)puVar18[3] <= (uint)puVar2[3] &&
      (uint)((uint)puVar2[2] <= (uint)puVar18[2]) <= (uint)(puVar18[3] - puVar2[3])) {
    puVar3 = puVar4;
    puVar1 = puVar2;
    puVar14 = puVar18;
  }
  bVar19 = (((byte)((uVar10 < uVar7 || bVar19) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0;
  if (bVar19) {
    puVar3 = puVar17;
  }
  uVar7 = puVar3[2];
  if (bVar19) {
    puVar17 = puVar4;
  }
  uVar10 = puVar3[3];
  uVar13 = puVar14[2];
  uVar8 = puVar14[3];
  uVar6 = puVar17[1];
  uVar9 = puVar17[2];
  uVar11 = puVar17[3];
  uVar12 = puVar17[4];
  uVar16 = puVar17[5];
  *param_2 = *puVar17;
  param_2[1] = uVar6;
  param_2[2] = uVar9;
  param_2[3] = uVar11;
  param_2[4] = uVar12;
  param_2[5] = uVar16;
  if (uVar10 < uVar8 || uVar8 - uVar10 < (uint)(uVar7 <= uVar13)) {
    puVar17 = puVar14;
  }
  else {
    puVar17 = puVar3;
    puVar3 = puVar14;
  }
  uVar6 = puVar3[1];
  uVar9 = puVar3[2];
  uVar11 = puVar3[3];
  uVar12 = puVar3[4];
  uVar16 = puVar3[5];
  param_2[6] = *puVar3;
  param_2[7] = uVar6;
  param_2[8] = uVar9;
  param_2[9] = uVar11;
  param_2[10] = uVar12;
  param_2[0xb] = uVar16;
  uVar6 = puVar17[1];
  uVar9 = puVar17[2];
  uVar11 = puVar17[3];
  uVar12 = puVar17[4];
  uVar16 = puVar17[5];
  param_2[0xc] = *puVar17;
  param_2[0xd] = uVar6;
  param_2[0xe] = uVar9;
  param_2[0xf] = uVar11;
  param_2[0x10] = uVar12;
  param_2[0x11] = uVar16;
  uVar6 = puVar1[1];
  uVar9 = puVar1[2];
  uVar11 = puVar1[3];
  uVar12 = puVar1[4];
  uVar16 = puVar1[5];
  param_2[0x12] = *puVar1;
  param_2[0x13] = uVar6;
  param_2[0x14] = uVar9;
  param_2[0x15] = uVar11;
  param_2[0x16] = uVar12;
  param_2[0x17] = uVar16;
  return;
}

