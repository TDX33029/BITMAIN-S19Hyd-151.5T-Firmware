// FUN_01449740 @ 01449740 size=216 calls_out=1 calls_in=2
// strings: 

void FUN_01449740(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  bool bVar12;
  
  uVar7 = param_2 >> 1;
  puVar10 = param_1 + uVar7;
  puVar9 = param_1 + (param_2 - 1);
  puVar5 = puVar10 + -1;
  puVar1 = param_3 + (param_2 - 1);
  do {
    uVar3 = *puVar9;
    uVar8 = *puVar5;
    bVar11 = *puVar10 >> 0x18 < *param_1 >> 0x18;
    uVar6 = *param_1;
    if (bVar11) {
      uVar6 = *puVar10;
    }
    puVar2 = param_3 + 1;
    *param_3 = uVar6;
    bVar12 = uVar3 >> 0x18 < uVar8 >> 0x18;
    if (bVar12) {
      uVar3 = uVar8;
    }
    param_1 = param_1 + !bVar11;
    *puVar1 = uVar3;
    iVar4 = 0;
    if (bVar12) {
      iVar4 = -1;
    }
    puVar10 = puVar10 + bVar11;
    puVar5 = puVar5 + iVar4;
    iVar4 = 0;
    if (!bVar12) {
      iVar4 = -1;
    }
    uVar7 = uVar7 - 1;
    puVar9 = puVar9 + iVar4;
    param_3 = puVar2;
    puVar1 = puVar1 + -1;
  } while (uVar7 != 0);
  puVar5 = puVar5 + 1;
  if ((param_2 & 1) != 0) {
    bVar11 = param_1 < puVar5;
    puVar1 = puVar10;
    if (bVar11) {
      puVar1 = param_1;
    }
    *puVar2 = *puVar1;
    param_1 = param_1 + bVar11;
    puVar10 = puVar10 + !bVar11;
  }
  bVar11 = param_1 == puVar5;
  if (bVar11) {
    param_1 = puVar9 + 1;
  }
  if (!bVar11 || puVar10 != param_1) {
    FUN_01307140();
  }
  return;
}

