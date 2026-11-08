// FUN_00733fd4 @ 00733fd4 size=288 calls_out=0 calls_in=1
// strings: 

void FUN_00733fd4(int param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  byte in_Q;
  
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 0x2c);
  uVar15 = *(uint *)(param_1 + 0x6c);
  bVar1 = (uint)(*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0x28)) <= uVar9 - uVar6;
  uVar17 = *(uint *)(param_1 + 0x4c);
  bVar2 = (uint)(*(uint *)(param_1 + 0x48) <= *(uint *)(param_1 + 0x68)) <= uVar15 - uVar17;
  iVar10 = 0x60;
  puVar7 = (undefined4 *)(param_1 + (uint)(uVar9 <= uVar6 && bVar1) * 0x20);
  iVar12 = 0x40;
  if (uVar15 <= uVar17 && bVar2) {
    iVar12 = 0x60;
  }
  puVar4 = (undefined4 *)(param_1 + (uint)(uVar9 > uVar6 || !bVar1) * 0x20);
  puVar13 = (undefined4 *)(param_1 + iVar12);
  if (uVar15 <= uVar17 && bVar2) {
    iVar10 = 0x40;
  }
  puVar18 = (undefined4 *)(param_1 + iVar10);
  uVar6 = puVar13[3];
  uVar9 = puVar7[3];
  bVar1 = uVar6 - uVar9 < (uint)((uint)puVar7[2] <= (uint)puVar13[2]);
  puVar16 = puVar13;
  if (uVar9 >= uVar6 && !bVar1) {
    puVar16 = puVar4;
  }
  puVar5 = puVar4;
  puVar3 = puVar18;
  if ((uint)puVar18[3] <= (uint)puVar4[3] &&
      (uint)((uint)puVar4[2] <= (uint)puVar18[2]) <= (uint)(puVar18[3] - puVar4[3])) {
    puVar5 = puVar13;
    puVar3 = puVar4;
    puVar16 = puVar18;
  }
  puVar4 = puVar7;
  if ((((byte)((uVar9 < uVar6 || bVar1) << 2 | in_Q) & 0x1f) >> 2 & 1) == 0) {
    puVar4 = puVar13;
    puVar5 = puVar7;
  }
  uVar6 = puVar5[2];
  uVar17 = puVar5[3];
  uVar9 = puVar16[2];
  uVar15 = puVar16[3];
  uVar8 = puVar4[1];
  uVar11 = puVar4[2];
  uVar14 = puVar4[3];
  *param_2 = *puVar4;
  param_2[1] = uVar8;
  param_2[2] = uVar11;
  param_2[3] = uVar14;
  uVar8 = puVar4[5];
  uVar11 = puVar4[6];
  uVar14 = puVar4[7];
  param_2[4] = puVar4[4];
  param_2[5] = uVar8;
  param_2[6] = uVar11;
  param_2[7] = uVar14;
  if (uVar17 < uVar15 || uVar15 - uVar17 < (uint)(uVar6 <= uVar9)) {
    puVar7 = puVar5;
    puVar5 = puVar16;
  }
  else {
    puVar7 = puVar16;
  }
  uVar8 = puVar7[1];
  uVar11 = puVar7[2];
  uVar14 = puVar7[3];
  param_2[8] = *puVar7;
  param_2[9] = uVar8;
  param_2[10] = uVar11;
  param_2[0xb] = uVar14;
  uVar8 = puVar7[5];
  uVar11 = puVar7[6];
  uVar14 = puVar7[7];
  param_2[0xc] = puVar7[4];
  param_2[0xd] = uVar8;
  param_2[0xe] = uVar11;
  param_2[0xf] = uVar14;
  uVar8 = puVar5[1];
  uVar11 = puVar5[2];
  uVar14 = puVar5[3];
  param_2[0x10] = *puVar5;
  param_2[0x11] = uVar8;
  param_2[0x12] = uVar11;
  param_2[0x13] = uVar14;
  uVar8 = puVar5[5];
  uVar11 = puVar5[6];
  uVar14 = puVar5[7];
  param_2[0x14] = puVar5[4];
  param_2[0x15] = uVar8;
  param_2[0x16] = uVar11;
  param_2[0x17] = uVar14;
  uVar8 = puVar3[1];
  uVar11 = puVar3[2];
  uVar14 = puVar3[3];
  param_2[0x18] = *puVar3;
  param_2[0x19] = uVar8;
  param_2[0x1a] = uVar11;
  param_2[0x1b] = uVar14;
  uVar8 = puVar3[5];
  uVar11 = puVar3[6];
  uVar14 = puVar3[7];
  param_2[0x1c] = puVar3[4];
  param_2[0x1d] = uVar8;
  param_2[0x1e] = uVar11;
  param_2[0x1f] = uVar14;
  return;
}

