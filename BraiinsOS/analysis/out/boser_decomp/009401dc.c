// FUN_009401dc @ 009401dc size=268 calls_out=1 calls_in=2
// strings: 

void FUN_009401dc(uint *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  
  uVar2 = param_2 >> 1;
  puVar9 = param_1 + uVar2 * 4;
  puVar11 = param_1 + param_2 * 4 + -4;
  puVar10 = puVar9 + -4;
  puVar3 = param_3 + param_2 * 4 + -4;
  do {
    puVar4 = param_3;
    bVar12 = *puVar9 < *param_1;
    puVar5 = param_1;
    if (bVar12) {
      puVar5 = puVar9;
    }
    uVar6 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    puVar9 = puVar9 + (uint)bVar12 * 4;
    *puVar4 = *puVar5;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    param_1 = param_1 + (uint)!bVar12 * 4;
    bVar12 = *puVar11 < *puVar10;
    puVar5 = puVar11;
    if (bVar12) {
      puVar5 = puVar10;
    }
    uVar6 = puVar5[1];
    uVar7 = puVar5[2];
    uVar8 = puVar5[3];
    *puVar3 = *puVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    iVar1 = 0;
    if (bVar12) {
      iVar1 = -1;
    }
    puVar10 = puVar10 + iVar1 * 4;
    iVar1 = 0;
    if (!bVar12) {
      iVar1 = -1;
    }
    puVar11 = puVar11 + iVar1 * 4;
    uVar2 = uVar2 - 1;
    param_3 = puVar4 + 4;
    puVar3 = puVar3 + -4;
  } while (uVar2 != 0);
  puVar10 = puVar10 + 4;
  if ((param_2 & 1) != 0) {
    bVar12 = param_1 < puVar10;
    puVar3 = puVar9;
    if (bVar12) {
      puVar3 = param_1;
    }
    uVar2 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    param_1 = param_1 + (uint)bVar12 * 4;
    puVar4[4] = *puVar3;
    puVar4[5] = uVar2;
    puVar4[6] = uVar6;
    puVar4[7] = uVar7;
    puVar9 = puVar9 + (uint)!bVar12 * 4;
  }
  bVar12 = param_1 == puVar10;
  if (bVar12) {
    param_1 = puVar11 + 4;
  }
  if (!bVar12 || puVar9 != param_1) {
    FUN_01307140();
  }
  return;
}

