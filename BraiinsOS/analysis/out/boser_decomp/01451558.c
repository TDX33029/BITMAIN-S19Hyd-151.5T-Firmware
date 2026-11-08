// FUN_01451558 @ 01451558 size=232 calls_out=1 calls_in=5
// strings: 

void FUN_01451558(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  bool bVar13;
  
  uVar9 = param_2 >> 1;
  puVar11 = param_1 + uVar9 * 2;
  puVar10 = param_1 + param_2 * 2 + -2;
  puVar1 = param_3 + param_2 * 2 + -2;
  puVar5 = puVar11 + -2;
  do {
    puVar2 = param_3;
    uVar7 = *puVar5;
    bVar12 = *puVar11 < *param_1;
    puVar3 = param_1;
    if (bVar12) {
      puVar3 = puVar11;
    }
    uVar8 = *puVar10;
    uVar6 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar6;
    bVar13 = uVar8 < uVar7;
    puVar3 = puVar10;
    if (bVar13) {
      puVar3 = puVar5;
    }
    param_1 = param_1 + (uint)!bVar12 * 2;
    uVar7 = puVar3[1];
    puVar11 = puVar11 + (uint)bVar12 * 2;
    *puVar1 = *puVar3;
    puVar1[1] = uVar7;
    iVar4 = 0;
    if (bVar13) {
      iVar4 = -1;
    }
    puVar5 = puVar5 + iVar4 * 2;
    iVar4 = 0;
    if (!bVar13) {
      iVar4 = -1;
    }
    puVar1 = puVar1 + -2;
    puVar10 = puVar10 + iVar4 * 2;
    uVar9 = uVar9 - 1;
    param_3 = puVar2 + 2;
  } while (uVar9 != 0);
  puVar5 = puVar5 + 2;
  if ((param_2 & 1) != 0) {
    bVar12 = puVar5 <= param_1;
    puVar1 = puVar11;
    if (!bVar12) {
      puVar1 = param_1;
    }
    uVar9 = puVar1[1];
    puVar2[2] = *puVar1;
    puVar2[3] = uVar9;
    puVar11 = puVar11 + (uint)bVar12 * 2;
    param_1 = param_1 + (uint)!bVar12 * 2;
  }
  bVar12 = param_1 == puVar5;
  if (bVar12) {
    param_1 = puVar10 + 2;
  }
  if (!bVar12 || puVar11 != param_1) {
    FUN_01307140();
  }
  return;
}

