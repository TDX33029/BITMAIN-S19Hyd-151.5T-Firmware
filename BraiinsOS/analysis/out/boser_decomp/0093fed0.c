// FUN_0093fed0 @ 0093fed0 size=472 calls_out=1 calls_in=1
// strings: 

void FUN_0093fed0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  
  uVar11 = *(uint *)(param_1 + 8);
  uVar15 = *(uint *)(param_1 + 0x28);
  uVar2 = uVar11;
  if (uVar15 < uVar11) {
    uVar2 = uVar15;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 4),uVar2);
  uVar7 = *(uint *)(param_1 + 0x48);
  if (uVar2 == 0) {
    uVar2 = uVar15 - uVar11;
  }
  uVar15 = *(uint *)(param_1 + 0x68);
  puVar12 = (undefined4 *)(param_1 + (uVar2 >> 0x1a & 0x20));
  uVar11 = uVar7;
  if (uVar15 < uVar7) {
    uVar11 = uVar15;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x44),uVar11);
  iVar5 = 0x40;
  if (iVar3 == 0) {
    iVar3 = uVar15 - uVar7;
  }
  uVar11 = puVar12[2];
  if (iVar3 < 0) {
    iVar5 = 0x60;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  iVar5 = 0x60;
  uVar15 = puVar4[2];
  if (iVar3 < 0) {
    iVar5 = 0x40;
  }
  uVar7 = uVar11;
  if (uVar15 < uVar11) {
    uVar7 = uVar15;
  }
  iVar3 = FUN_01bed842(puVar4[1],puVar12[1],uVar7);
  puVar16 = (undefined4 *)(param_1 + iVar5);
  puVar9 = (undefined4 *)(param_1 + (~uVar2 >> 0x1a & 0x20));
  uVar2 = puVar9[2];
  if (iVar3 == 0) {
    iVar3 = uVar15 - uVar11;
  }
  uVar11 = puVar16[2];
  puVar14 = puVar4;
  if (iVar3 < 0) {
    puVar14 = puVar9;
  }
  uVar15 = uVar2;
  if (uVar11 < uVar2) {
    uVar15 = uVar11;
  }
  iVar5 = FUN_01bed842(puVar16[1],puVar9[1],uVar15);
  if (iVar5 == 0) {
    iVar5 = uVar11 - uVar2;
  }
  puVar10 = puVar9;
  puVar1 = puVar16;
  if (iVar5 < 0) {
    puVar10 = puVar4;
    puVar1 = puVar9;
    puVar14 = puVar16;
  }
  if (iVar3 < 0) {
    puVar10 = puVar12;
  }
  uVar2 = puVar14[2];
  uVar11 = puVar10[2];
  if (iVar3 < 0) {
    puVar12 = puVar4;
  }
  uVar15 = uVar11;
  if (uVar2 < uVar11) {
    uVar15 = uVar2;
  }
  iVar3 = FUN_01bed842(puVar14[1],puVar10[1],uVar15);
  uVar6 = puVar12[1];
  uVar8 = puVar12[2];
  uVar13 = puVar12[3];
  *param_2 = *puVar12;
  param_2[1] = uVar6;
  param_2[2] = uVar8;
  param_2[3] = uVar13;
  uVar6 = puVar12[5];
  uVar8 = puVar12[6];
  uVar13 = puVar12[7];
  param_2[4] = puVar12[4];
  param_2[5] = uVar6;
  param_2[6] = uVar8;
  param_2[7] = uVar13;
  if (iVar3 == 0) {
    iVar3 = uVar2 - uVar11;
  }
  if (iVar3 < 0) {
    puVar12 = puVar10;
    puVar10 = puVar14;
  }
  else {
    puVar12 = puVar14;
  }
  uVar6 = puVar10[1];
  uVar8 = puVar10[2];
  uVar13 = puVar10[3];
  param_2[8] = *puVar10;
  param_2[9] = uVar6;
  param_2[10] = uVar8;
  param_2[0xb] = uVar13;
  uVar6 = puVar10[5];
  uVar8 = puVar10[6];
  uVar13 = puVar10[7];
  param_2[0xc] = puVar10[4];
  param_2[0xd] = uVar6;
  param_2[0xe] = uVar8;
  param_2[0xf] = uVar13;
  uVar6 = puVar12[1];
  uVar8 = puVar12[2];
  uVar13 = puVar12[3];
  param_2[0x10] = *puVar12;
  param_2[0x11] = uVar6;
  param_2[0x12] = uVar8;
  param_2[0x13] = uVar13;
  uVar6 = puVar12[5];
  uVar8 = puVar12[6];
  uVar13 = puVar12[7];
  param_2[0x14] = puVar12[4];
  param_2[0x15] = uVar6;
  param_2[0x16] = uVar8;
  param_2[0x17] = uVar13;
  uVar6 = puVar1[1];
  uVar8 = puVar1[2];
  uVar13 = puVar1[3];
  param_2[0x18] = *puVar1;
  param_2[0x19] = uVar6;
  param_2[0x1a] = uVar8;
  param_2[0x1b] = uVar13;
  uVar6 = puVar1[5];
  uVar8 = puVar1[6];
  uVar13 = puVar1[7];
  param_2[0x1c] = puVar1[4];
  param_2[0x1d] = uVar6;
  param_2[0x1e] = uVar8;
  param_2[0x1f] = uVar13;
  return;
}

