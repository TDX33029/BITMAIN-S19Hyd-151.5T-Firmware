// FUN_0067c014 @ 0067c014 size=444 calls_out=1 calls_in=1
// strings: 

void FUN_0067c014(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  
  uVar8 = *(uint *)(param_1 + 8);
  uVar18 = *(uint *)(param_1 + 0x20);
  uVar19 = uVar8;
  if (uVar18 < uVar8) {
    uVar19 = uVar18;
  }
  uVar2 = FUN_01bed842(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 4),uVar19);
  uVar21 = *(uint *)(param_1 + 0x38);
  uVar14 = *(uint *)(param_1 + 0x50);
  uVar19 = uVar21;
  if (uVar14 < uVar21) {
    uVar19 = uVar14;
  }
  iVar3 = FUN_01bed842(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x34),uVar19);
  if (iVar3 == 0) {
    iVar3 = uVar14 - uVar21;
  }
  if (uVar2 == 0) {
    uVar2 = uVar18 - uVar8;
  }
  iVar9 = 0x48;
  if (iVar3 < 0) {
    iVar9 = 0x30;
  }
  puVar6 = (undefined4 *)(param_1 + ((int)uVar2 >> 0x1f) * -0x18);
  iVar5 = 0x30;
  if (iVar3 < 0) {
    iVar5 = 0x48;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5);
  uVar8 = puVar6[2];
  uVar18 = puVar4[2];
  uVar19 = uVar8;
  if (uVar18 < uVar8) {
    uVar19 = uVar18;
  }
  iVar3 = FUN_01bed842(puVar4[1],puVar6[1],uVar19);
  puVar10 = (undefined4 *)(param_1 + iVar9);
  uVar19 = puVar10[2];
  puVar16 = (undefined4 *)(param_1 + ((int)~uVar2 >> 0x1f) * -0x18);
  if (iVar3 == 0) {
    iVar3 = uVar18 - uVar8;
  }
  uVar8 = puVar16[2];
  puVar20 = puVar4;
  if (iVar3 < 0) {
    puVar20 = puVar16;
  }
  uVar18 = uVar8;
  if (uVar19 < uVar8) {
    uVar18 = uVar19;
  }
  iVar9 = FUN_01bed842(puVar10[1],puVar16[1],uVar18);
  if (iVar9 == 0) {
    iVar9 = uVar19 - uVar8;
  }
  puVar17 = puVar16;
  puVar1 = puVar10;
  if (iVar9 < 0) {
    puVar17 = puVar4;
    puVar1 = puVar16;
    puVar20 = puVar10;
  }
  if (iVar3 < 0) {
    puVar17 = puVar6;
  }
  uVar19 = puVar17[2];
  if (iVar3 < 0) {
    puVar6 = puVar4;
  }
  uVar18 = puVar20[2];
  uVar8 = uVar19;
  if (uVar18 < uVar19) {
    uVar8 = uVar18;
  }
  iVar3 = FUN_01bed842(puVar20[1],puVar17[1],uVar8);
  if (iVar3 == 0) {
    iVar3 = uVar18 - uVar19;
  }
  uVar7 = puVar6[1];
  uVar11 = puVar6[2];
  uVar12 = puVar6[3];
  uVar13 = puVar6[4];
  uVar15 = puVar6[5];
  if (iVar3 < 0) {
    puVar4 = puVar17;
    puVar17 = puVar20;
  }
  else {
    puVar4 = puVar20;
  }
  *param_2 = *puVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  param_2[4] = uVar13;
  param_2[5] = uVar15;
  uVar7 = puVar17[1];
  uVar11 = puVar17[2];
  uVar12 = puVar17[3];
  uVar13 = puVar17[4];
  uVar15 = puVar17[5];
  param_2[6] = *puVar17;
  param_2[7] = uVar7;
  param_2[8] = uVar11;
  param_2[9] = uVar12;
  param_2[10] = uVar13;
  param_2[0xb] = uVar15;
  uVar7 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  uVar13 = puVar4[4];
  uVar15 = puVar4[5];
  param_2[0xc] = *puVar4;
  param_2[0xd] = uVar7;
  param_2[0xe] = uVar11;
  param_2[0xf] = uVar12;
  param_2[0x10] = uVar13;
  param_2[0x11] = uVar15;
  uVar7 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  uVar13 = puVar1[4];
  uVar15 = puVar1[5];
  param_2[0x12] = *puVar1;
  param_2[0x13] = uVar7;
  param_2[0x14] = uVar11;
  param_2[0x15] = uVar12;
  param_2[0x16] = uVar13;
  param_2[0x17] = uVar15;
  return;
}

