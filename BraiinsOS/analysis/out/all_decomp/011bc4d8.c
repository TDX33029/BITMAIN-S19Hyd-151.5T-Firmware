// FUN_011bc4d8 @ 011bc4d8 size=960 calls_out=3 calls_in=1
// strings: 

void FUN_011bc4d8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  
  FUN_011bc898(param_1,param_3);
  puVar9 = param_3 + 0xc;
  FUN_011bc898(param_1 + 0x30,puVar9);
  uVar8 = param_3[2];
  uVar10 = param_3[0xe];
  uVar1 = uVar8;
  if (uVar10 < uVar8) {
    uVar1 = uVar10;
  }
  uVar1 = FUN_016dd50a(param_3[0xd],param_3[1],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar10 - uVar8;
  }
  puVar3 = puVar9;
  if (uVar1 < 0x80000000) {
    puVar3 = param_3;
  }
  uVar7 = puVar3[1];
  uVar2 = puVar3[2];
  *param_2 = *puVar3;
  param_2[1] = uVar7;
  param_2[2] = uVar2;
  uVar12 = param_3[0xb];
  uVar10 = param_3[0x17];
  uVar8 = uVar12;
  if (uVar10 < uVar12) {
    uVar8 = uVar10;
  }
  uVar8 = FUN_016dd50a(param_3[0x16],param_3[10],uVar8);
  if (uVar8 == 0) {
    uVar8 = uVar10 - uVar12;
  }
  puVar3 = param_3 + 9;
  if (uVar8 < 0x80000000) {
    puVar3 = param_3 + 0x15;
  }
  uVar2 = *puVar3;
  uVar7 = puVar3[1];
  param_2[0x17] = puVar3[2];
  param_2[0x15] = uVar2;
  param_2[0x16] = uVar7;
  puVar9 = puVar9 + (uVar1 >> 0x1f | (uVar1 >> 0x1f) << 1);
  uVar1 = uVar1 >> 0x1f ^ 1;
  puVar3 = param_3 + (uVar1 | uVar1 << 1);
  uVar10 = puVar9[2];
  uVar12 = puVar3[2];
  uVar1 = uVar12;
  if (uVar10 < uVar12) {
    uVar1 = uVar10;
  }
  uVar1 = FUN_016dd50a(puVar9[1],puVar3[1],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar10 - uVar12;
  }
  puVar4 = puVar9;
  if (uVar1 < 0x80000000) {
    puVar4 = puVar3;
  }
  uVar2 = *puVar4;
  uVar7 = puVar4[1];
  param_2[5] = puVar4[2];
  param_2[3] = uVar2;
  param_2[4] = uVar7;
  puVar4 = param_3 + 0x15 + ~((int)uVar8 >> 0x1f) * 3;
  uVar10 = puVar4[2];
  puVar11 = param_3 + 9 + ((int)uVar8 >> 0x1f) * 3;
  uVar12 = puVar11[2];
  uVar8 = uVar12;
  if (uVar10 < uVar12) {
    uVar8 = uVar10;
  }
  uVar8 = FUN_016dd50a(puVar4[1],puVar11[1],uVar8);
  if (uVar8 == 0) {
    uVar8 = uVar10 - uVar12;
  }
  puVar5 = puVar11;
  if (uVar8 < 0x80000000) {
    puVar5 = puVar4;
  }
  uVar2 = *puVar5;
  uVar7 = puVar5[1];
  param_2[0x14] = puVar5[2];
  param_2[0x12] = uVar2;
  param_2[0x13] = uVar7;
  puVar9 = puVar9 + (uVar1 >> 0x1f | (uVar1 >> 0x1f) << 1);
  uVar1 = uVar1 >> 0x1f ^ 1;
  uVar10 = puVar9[2];
  puVar3 = puVar3 + (uVar1 | uVar1 << 1);
  uVar12 = puVar3[2];
  uVar1 = uVar12;
  if (uVar10 < uVar12) {
    uVar1 = uVar10;
  }
  uVar1 = FUN_016dd50a(puVar9[1],puVar3[1],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar10 - uVar12;
  }
  puVar5 = puVar9;
  if (uVar1 < 0x80000000) {
    puVar5 = puVar3;
  }
  uVar2 = *puVar5;
  uVar7 = puVar5[1];
  param_2[8] = puVar5[2];
  param_2[6] = uVar2;
  param_2[7] = uVar7;
  puVar4 = puVar4 + ~((int)uVar8 >> 0x1f) * 3;
  uVar10 = puVar4[2];
  puVar11 = puVar11 + ((int)uVar8 >> 0x1f) * 3;
  uVar12 = puVar11[2];
  uVar8 = uVar12;
  if (uVar10 < uVar12) {
    uVar8 = uVar10;
  }
  uVar8 = FUN_016dd50a(puVar4[1],puVar11[1],uVar8);
  if (uVar8 == 0) {
    uVar8 = uVar10 - uVar12;
  }
  puVar5 = puVar11;
  if (uVar8 < 0x80000000) {
    puVar5 = puVar4;
  }
  uVar2 = *puVar5;
  uVar7 = puVar5[1];
  param_2[0x11] = puVar5[2];
  param_2[0xf] = uVar2;
  puVar9 = puVar9 + (uVar1 >> 0x1f | (uVar1 >> 0x1f) << 1);
  uVar1 = uVar1 >> 0x1f ^ 1;
  param_2[0x10] = uVar7;
  uVar12 = puVar9[2];
  puVar3 = puVar3 + (uVar1 | uVar1 << 1);
  uVar10 = puVar3[2];
  uVar1 = uVar10;
  if (uVar12 < uVar10) {
    uVar1 = uVar12;
  }
  uVar1 = FUN_016dd50a(puVar9[1],puVar3[1],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar12 - uVar10;
  }
  puVar5 = puVar9;
  if (uVar1 < 0x80000000) {
    puVar5 = puVar3;
  }
  uVar2 = *puVar5;
  uVar7 = puVar5[1];
  param_2[0xb] = puVar5[2];
  param_2[9] = uVar2;
  param_2[10] = uVar7;
  puVar4 = puVar4 + ~((int)uVar8 >> 0x1f) * 3;
  uVar12 = puVar4[2];
  puVar11 = puVar11 + ((int)uVar8 >> 0x1f) * 3;
  uVar10 = puVar11[2];
  uVar8 = uVar10;
  if (uVar12 < uVar10) {
    uVar8 = uVar12;
  }
  puVar5 = (undefined4 *)FUN_016dd50a(puVar4[1],puVar11[1],uVar8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(uVar12 - uVar10);
  }
  puVar6 = puVar11;
  if (puVar5 < &DAT_80000000) {
    puVar6 = puVar4;
  }
  uVar2 = *puVar6;
  uVar7 = puVar6[1];
  param_2[0xe] = puVar6[2];
  uVar8 = uVar1 >> 0x1f ^ 1;
  param_2[0xc] = uVar2;
  param_2[0xd] = uVar7;
  puVar3 = puVar3 + (uVar8 | uVar8 << 1);
  bVar13 = puVar3 == puVar11 + ((int)puVar5 >> 0x1f) * 3 + 3;
  if (bVar13) {
    puVar3 = puVar9 + (uVar1 >> 0x1f | (uVar1 >> 0x1f) << 1);
    puVar5 = puVar4 + ~((int)puVar5 >> 0x1f) * 3 + 3;
  }
  if (!bVar13 || puVar3 != puVar5) {
    FUN_00fb7254();
  }
  return;
}

