// FUN_009cf354 @ 009cf354 size=1724 calls_out=1 calls_in=1
// strings: 

void FUN_009cf354(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  
  uVar11 = *param_1;
  iVar13 = param_1[1];
  uVar1 = (**(code **)(param_1[3] + 0x28))(param_1[2]);
  uVar2 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar11 = param_1[4];
  iVar13 = param_1[5];
  uVar3 = (**(code **)(param_1[7] + 0x28))(param_1[6]);
  uVar7 = (uint)(uVar2 <= uVar1);
  uVar1 = (uint)(uVar2 > uVar1);
  uVar2 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar24 = 2;
  if (uVar3 < uVar2) {
    uVar24 = 3;
  }
  puVar8 = param_1 + uVar24 * 2;
  puVar23 = param_1 + uVar1 * 2;
  uVar11 = *puVar23;
  uVar14 = 3;
  if (uVar3 < uVar2) {
    uVar14 = 2;
  }
  iVar13 = puVar23[1];
  uVar3 = (**(code **)(puVar8[1] + 0x28))(*puVar8);
  uVar4 = (**(code **)(iVar13 + 0x28))(uVar11);
  puVar17 = param_1 + uVar14 * 2;
  puVar12 = param_1 + uVar7 * 2;
  uVar11 = *puVar12;
  iVar13 = puVar12[1];
  uVar5 = (**(code **)(puVar17[1] + 0x28))(*puVar17);
  uVar2 = uVar24;
  if (uVar3 < uVar4) {
    uVar2 = uVar7;
  }
  puVar20 = puVar8;
  if (uVar3 < uVar4) {
    puVar20 = puVar12;
  }
  uVar6 = (**(code **)(iVar13 + 0x28))(uVar11);
  if (uVar5 < uVar6) {
    uVar7 = uVar24;
    uVar2 = uVar14;
    puVar15 = puVar8;
    puVar20 = puVar17;
  }
  else {
    puVar15 = puVar12;
    puVar12 = puVar17;
  }
  if (uVar3 < uVar4) {
    puVar15 = puVar23;
    uVar7 = uVar1;
  }
  if (uVar3 < uVar4) {
    puVar23 = puVar8;
  }
  uVar11 = param_1[uVar7 * 2];
  iVar13 = puVar15[1];
  uVar7 = (**(code **)(puVar20[1] + 0x28))(param_1[uVar2 * 2]);
  uVar1 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar11 = puVar23[1];
  if (uVar7 < uVar1) {
    puVar8 = puVar15;
    puVar15 = puVar20;
  }
  else {
    puVar8 = puVar20;
  }
  *param_3 = *puVar23;
  param_3[1] = uVar11;
  uVar11 = puVar15[1];
  param_3[2] = *puVar15;
  param_3[3] = uVar11;
  uVar11 = puVar8[1];
  param_3[4] = *puVar8;
  param_3[5] = uVar11;
  uVar11 = *puVar12;
  param_3[7] = puVar12[1];
  puVar23 = param_3 + 6;
  *puVar23 = uVar11;
  puVar8 = param_1 + 8;
  uVar11 = *puVar8;
  iVar13 = param_1[9];
  uVar1 = (**(code **)(param_1[0xb] + 0x28))(param_1[10]);
  uVar2 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar11 = param_1[0xc];
  iVar13 = param_1[0xd];
  uVar3 = (**(code **)(param_1[0xf] + 0x28))(param_1[0xe]);
  uVar7 = (uint)(uVar2 <= uVar1);
  uVar1 = (uint)(uVar2 > uVar1);
  uVar2 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar24 = 2;
  if (uVar3 < uVar2) {
    uVar24 = 3;
  }
  puVar17 = puVar8 + uVar24 * 2;
  puVar12 = puVar8 + uVar1 * 2;
  uVar11 = *puVar12;
  uVar14 = 3;
  if (uVar3 < uVar2) {
    uVar14 = 2;
  }
  iVar13 = puVar12[1];
  uVar3 = (**(code **)(puVar17[1] + 0x28))(*puVar17);
  uVar4 = (**(code **)(iVar13 + 0x28))(uVar11);
  puVar21 = puVar8 + uVar14 * 2;
  puVar20 = puVar8 + uVar7 * 2;
  uVar11 = *puVar20;
  iVar13 = puVar20[1];
  uVar5 = (**(code **)(puVar21[1] + 0x28))(*puVar21);
  puVar15 = puVar17;
  uVar2 = uVar24;
  if (uVar3 < uVar4) {
    puVar15 = puVar20;
    uVar2 = uVar7;
  }
  uVar6 = (**(code **)(iVar13 + 0x28))(uVar11);
  if (uVar5 < uVar6) {
    uVar7 = uVar24;
    uVar2 = uVar14;
    puVar18 = puVar17;
    puVar15 = puVar21;
  }
  else {
    puVar18 = puVar20;
    puVar20 = puVar21;
  }
  if (uVar3 < uVar4) {
    puVar18 = puVar12;
    uVar7 = uVar1;
  }
  if (uVar3 < uVar4) {
    puVar12 = puVar17;
  }
  uVar11 = puVar8[uVar7 * 2];
  iVar13 = puVar18[1];
  uVar7 = (**(code **)(puVar15[1] + 0x28))(puVar8[uVar2 * 2]);
  uVar1 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar11 = *puVar12;
  iVar13 = puVar12[1];
  if (uVar7 < uVar1) {
    puVar8 = puVar18;
    puVar18 = puVar15;
  }
  else {
    puVar8 = puVar15;
  }
  param_3[9] = iVar13;
  puVar17 = param_3 + 8;
  *puVar17 = uVar11;
  uVar9 = puVar18[1];
  param_3[10] = *puVar18;
  param_3[0xb] = uVar9;
  uVar9 = puVar8[1];
  param_3[0xc] = *puVar8;
  param_3[0xd] = uVar9;
  uVar9 = *puVar20;
  iVar22 = puVar20[1];
  pcVar10 = *(code **)(iVar13 + 0x28);
  puVar12 = param_3 + 0xe;
  *puVar12 = uVar9;
  uVar19 = *param_3;
  iVar13 = param_3[1];
  param_3[0xf] = iVar22;
  uVar7 = (*pcVar10)(uVar11);
  uVar1 = (**(code **)(iVar13 + 0x28))(uVar19);
  bVar26 = uVar1 <= uVar7;
  puVar8 = param_3;
  if (!bVar26) {
    puVar8 = puVar17;
  }
  uVar19 = puVar8[1];
  uVar11 = *puVar23;
  pcVar10 = *(code **)(iVar22 + 0x28);
  *param_2 = *puVar8;
  param_2[1] = uVar19;
  iVar13 = param_3[7];
  uVar7 = (*pcVar10)(uVar9);
  uVar1 = (**(code **)(iVar13 + 0x28))(uVar11);
  param_3 = param_3 + (uint)bVar26 * 2;
  uVar9 = *param_3;
  puVar17 = puVar17 + (uint)!bVar26 * 2;
  uVar11 = *puVar17;
  iVar13 = 0;
  puVar8 = puVar12;
  if (uVar7 < uVar1) {
    puVar8 = puVar23;
  }
  iVar22 = puVar17[1];
  uVar19 = puVar8[1];
  iVar16 = 0;
  param_2[0xe] = *puVar8;
  param_2[0xf] = uVar19;
  iVar25 = param_3[1];
  if (uVar7 < uVar1) {
    iVar13 = -1;
  }
  else {
    iVar16 = -1;
  }
  uVar7 = (**(code **)(iVar22 + 0x28))(uVar11);
  uVar1 = (**(code **)(iVar25 + 0x28))(uVar9);
  puVar12 = puVar12 + iVar16 * 2;
  uVar11 = *puVar12;
  puVar23 = puVar23 + iVar13 * 2;
  uVar9 = *puVar23;
  bVar26 = uVar1 <= uVar7;
  puVar8 = param_3;
  if (!bVar26) {
    puVar8 = puVar17;
  }
  iVar13 = puVar12[1];
  uVar19 = puVar8[1];
  param_2[2] = *puVar8;
  param_2[3] = uVar19;
  iVar22 = puVar23[1];
  uVar7 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar1 = (**(code **)(iVar22 + 0x28))(uVar9);
  param_3 = param_3 + (uint)bVar26 * 2;
  uVar9 = *param_3;
  bVar27 = uVar7 < uVar1;
  puVar17 = puVar17 + (uint)!bVar26 * 2;
  uVar11 = *puVar17;
  iVar13 = 0;
  puVar8 = puVar12;
  if (bVar27) {
    puVar8 = puVar23;
  }
  iVar22 = puVar17[1];
  uVar19 = puVar8[1];
  iVar16 = 0;
  param_2[0xc] = *puVar8;
  param_2[0xd] = uVar19;
  if (bVar27) {
    iVar13 = -1;
  }
  iVar25 = param_3[1];
  if (!bVar27) {
    iVar16 = -1;
  }
  uVar7 = (**(code **)(iVar22 + 0x28))(uVar11);
  uVar1 = (**(code **)(iVar25 + 0x28))(uVar9);
  puVar12 = puVar12 + iVar16 * 2;
  uVar11 = *puVar12;
  bVar26 = uVar1 <= uVar7;
  iVar22 = puVar12[1];
  puVar23 = puVar23 + iVar13 * 2;
  uVar9 = *puVar23;
  puVar8 = param_3;
  if (!bVar26) {
    puVar8 = puVar17;
  }
  iVar13 = puVar23[1];
  uVar19 = puVar8[1];
  param_2[4] = *puVar8;
  param_2[5] = uVar19;
  uVar7 = (**(code **)(iVar22 + 0x28))(uVar11);
  uVar1 = (**(code **)(iVar13 + 0x28))(uVar9);
  param_3 = param_3 + (uint)bVar26 * 2;
  uVar9 = *param_3;
  bVar27 = uVar7 < uVar1;
  puVar17 = puVar17 + (uint)!bVar26 * 2;
  uVar11 = *puVar17;
  iVar13 = 0;
  puVar8 = puVar12;
  if (bVar27) {
    puVar8 = puVar23;
  }
  iVar22 = puVar17[1];
  uVar19 = puVar8[1];
  iVar16 = 0;
  param_2[10] = *puVar8;
  param_2[0xb] = uVar19;
  if (bVar27) {
    iVar13 = -1;
  }
  iVar25 = param_3[1];
  if (!bVar27) {
    iVar16 = -1;
  }
  uVar7 = (**(code **)(iVar22 + 0x28))(uVar11);
  uVar1 = (**(code **)(iVar25 + 0x28))(uVar9);
  bVar26 = uVar1 <= uVar7;
  puVar12 = puVar12 + iVar16 * 2;
  uVar11 = *puVar12;
  puVar23 = puVar23 + iVar13 * 2;
  uVar9 = *puVar23;
  puVar8 = param_3;
  if (!bVar26) {
    puVar8 = puVar17;
  }
  iVar13 = puVar12[1];
  uVar19 = puVar8[1];
  param_2[6] = *puVar8;
  param_2[7] = uVar19;
  iVar22 = puVar23[1];
  uVar7 = (**(code **)(iVar13 + 0x28))(uVar11);
  uVar1 = (**(code **)(iVar22 + 0x28))(uVar9);
  iVar13 = 0;
  puVar8 = puVar12;
  if (uVar7 < uVar1) {
    iVar13 = -1;
    puVar8 = puVar23;
  }
  uVar11 = puVar8[1];
  param_2[8] = *puVar8;
  param_2[9] = uVar11;
  puVar8 = (undefined4 *)0x0;
  param_3 = param_3 + (uint)bVar26 * 2;
  if (uVar7 >= uVar1) {
    puVar8 = (undefined4 *)0xffffffff;
  }
  bVar27 = param_3 == puVar23 + iVar13 * 2 + 2;
  if (bVar27) {
    param_3 = puVar17 + (uint)!bVar26 * 2;
    puVar8 = puVar12 + (int)puVar8 * 2 + 2;
  }
  if (!bVar27 || param_3 != puVar8) {
    FUN_00fb7254();
  }
  return;
}

