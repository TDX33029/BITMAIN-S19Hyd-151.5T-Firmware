// FUN_01571f24 @ 01571f24 size=428 calls_out=1 calls_in=1
// strings: 

void FUN_01571f24(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar16 = *(uint *)(param_1 + 8);
  uVar18 = *(uint *)(param_1 + 0x14);
  uVar17 = uVar16;
  if (uVar18 < uVar16) {
    uVar17 = uVar18;
  }
  uVar2 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),uVar17);
  uVar9 = *(uint *)(param_1 + 0x20);
  uVar13 = *(uint *)(param_1 + 0x2c);
  uVar17 = uVar9;
  if (uVar13 < uVar9) {
    uVar17 = uVar13;
  }
  iVar3 = FUN_016dd50a(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c),uVar17);
  iVar14 = 0x24;
  if (iVar3 == 0) {
    iVar3 = uVar13 - uVar9;
  }
  if (uVar2 == 0) {
    uVar2 = uVar18 - uVar16;
  }
  if (iVar3 < 0) {
    iVar14 = 0x18;
  }
  puVar10 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0xc);
  iVar6 = 0x18;
  if (iVar3 < 0) {
    iVar6 = 0x24;
  }
  puVar4 = (undefined4 *)(param_1 + iVar6);
  uVar16 = puVar10[2];
  uVar18 = puVar4[2];
  uVar17 = uVar16;
  if (uVar18 < uVar16) {
    uVar17 = uVar18;
  }
  iVar3 = FUN_016dd50a(puVar4[1],puVar10[1],uVar17);
  puVar15 = (undefined4 *)(param_1 + iVar14);
  puVar11 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0xc);
  if (iVar3 == 0) {
    iVar3 = uVar18 - uVar16;
  }
  uVar16 = puVar11[2];
  uVar17 = puVar15[2];
  puVar12 = puVar4;
  if (iVar3 < 0) {
    puVar12 = puVar11;
  }
  uVar18 = uVar16;
  if (uVar17 < uVar16) {
    uVar18 = uVar17;
  }
  iVar14 = FUN_016dd50a(puVar15[1],puVar11[1],uVar18);
  if (iVar14 == 0) {
    iVar14 = uVar17 - uVar16;
  }
  puVar5 = puVar11;
  puVar1 = puVar15;
  if (iVar14 < 0) {
    puVar5 = puVar4;
    puVar1 = puVar11;
    puVar12 = puVar15;
  }
  if (iVar3 < 0) {
    puVar5 = puVar10;
  }
  uVar17 = puVar12[2];
  uVar16 = puVar5[2];
  if (iVar3 < 0) {
    puVar10 = puVar4;
  }
  uVar18 = uVar16;
  if (uVar17 < uVar16) {
    uVar18 = uVar17;
  }
  iVar3 = FUN_016dd50a(puVar12[1],puVar5[1],uVar18);
  uVar7 = puVar10[1];
  uVar8 = puVar10[2];
  if (iVar3 == 0) {
    iVar3 = uVar17 - uVar16;
  }
  puVar4 = puVar5;
  if (-1 < iVar3) {
    puVar4 = puVar12;
  }
  *param_2 = *puVar10;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  if (-1 >= iVar3) {
    puVar5 = puVar12;
  }
  uVar7 = *puVar5;
  uVar8 = puVar5[1];
  param_2[5] = puVar5[2];
  param_2[4] = uVar8;
  param_2[3] = uVar7;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  param_2[6] = *puVar4;
  param_2[7] = uVar7;
  param_2[8] = uVar8;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  param_2[9] = *puVar1;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  return;
}

