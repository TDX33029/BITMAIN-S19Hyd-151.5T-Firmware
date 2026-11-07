// FUN_016947a8 @ 016947a8 size=444 calls_out=2 calls_in=2
// strings: 

void FUN_016947a8(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte bVar17;
  char cVar18;
  bool bVar19;
  undefined4 *local_28;
  
  uVar15 = param_2 >> 1;
  puVar10 = param_1 + uVar15 * 4;
  puVar13 = param_1 + param_2 * 4 + -4;
  puVar16 = puVar10 + -4;
  puVar6 = param_3 + param_2 * 4 + -4;
  puVar5 = param_3;
  do {
    local_28 = puVar5;
    uVar14 = param_1[2];
    uVar11 = puVar10[2];
    uVar7 = uVar14;
    if (uVar11 < uVar14) {
      uVar7 = uVar11;
    }
    iVar4 = FUN_01bed842(puVar10[1],param_1[1],uVar7);
    if (iVar4 == 0) {
      iVar4 = uVar11 - uVar14;
    }
    bVar17 = iVar4 < 0;
    bVar1 = 0 < iVar4;
    if (iVar4 == 0) {
      bVar17 = *(byte *)(param_1 + 3);
    }
    if (iVar4 == 0) {
      bVar1 = *(byte *)(puVar10 + 3);
    }
    puVar5 = puVar10;
    if ((uint)(int)(char)((uint)bVar1 - (uint)bVar17) < 0x80000000) {
      puVar5 = param_1;
    }
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar12 = puVar5[3];
    *local_28 = *puVar5;
    local_28[1] = uVar8;
    local_28[2] = uVar9;
    local_28[3] = uVar12;
    uVar11 = puVar16[2];
    uVar14 = puVar13[2];
    uVar7 = uVar11;
    if (uVar14 < uVar11) {
      uVar7 = uVar14;
    }
    iVar4 = FUN_01bed842(puVar13[1],puVar16[1],uVar7);
    if (iVar4 == 0) {
      iVar4 = uVar14 - uVar11;
    }
    cVar18 = iVar4 < 0;
    iVar3 = (int)(((uint)bVar1 - (uint)bVar17) * 0x1000000) >> 0x1f;
    cVar2 = 0 < iVar4;
    if (iVar4 == 0) {
      cVar18 = *(char *)(puVar16 + 3);
    }
    puVar10 = puVar10 + iVar3 * -4;
    if (iVar4 == 0) {
      cVar2 = *(char *)(puVar13 + 3);
    }
    param_1 = param_1 + (-iVar3 ^ 1U) * 4;
    puVar5 = puVar16;
    if ((uint)(int)(char)(cVar2 - cVar18) < 0x80000000) {
      puVar5 = puVar13;
    }
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar12 = puVar5[3];
    uVar7 = (int)(char)(cVar2 - cVar18) >> 7;
    puVar16 = puVar16 + uVar7 * 4;
    *puVar6 = *puVar5;
    puVar6[1] = uVar8;
    puVar6[2] = uVar9;
    puVar6[3] = uVar12;
    puVar13 = puVar13 + ~uVar7 * 4;
    uVar15 = uVar15 - 1;
    puVar6 = puVar6 + -4;
    puVar5 = local_28 + 4;
  } while (uVar15 != 0);
  puVar16 = puVar16 + 4;
  if ((param_2 & 1) != 0) {
    bVar19 = param_1 < puVar16;
    puVar6 = puVar10;
    if (bVar19) {
      puVar6 = param_1;
    }
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    uVar12 = puVar6[3];
    param_1 = param_1 + (uint)bVar19 * 4;
    local_28[4] = *puVar6;
    local_28[5] = uVar8;
    local_28[6] = uVar9;
    local_28[7] = uVar12;
    puVar10 = puVar10 + (uint)!bVar19 * 4;
  }
  bVar19 = param_1 == puVar16;
  if (bVar19) {
    puVar16 = puVar13 + 4;
  }
  if (!bVar19 || puVar10 != puVar16) {
    FUN_01307140();
  }
  return;
}

