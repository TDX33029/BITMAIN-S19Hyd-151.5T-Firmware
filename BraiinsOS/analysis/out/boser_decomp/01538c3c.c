// FUN_01538c3c @ 01538c3c size=284 calls_out=2 calls_in=2
// strings: 

void FUN_01538c3c(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  puVar6 = param_1 + param_2 * 4 + -4;
  puVar12 = param_3 + param_2 * 4 + -4;
  uVar5 = param_2 >> 1;
  puVar13 = param_1 + uVar5 * 4;
  puVar11 = puVar13 + -4;
  do {
    puVar8 = param_3;
    uVar1 = FUN_01538a34(*puVar13,*(undefined1 *)(puVar13 + 1),*param_1,*(undefined1 *)(param_1 + 1)
                        );
    puVar2 = param_1;
    if (uVar1 != 0) {
      puVar2 = puVar13;
    }
    uVar7 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    *puVar8 = *puVar2;
    puVar8[1] = uVar7;
    puVar8[2] = uVar9;
    puVar8[3] = uVar10;
    iVar3 = FUN_01538a34(*puVar6,*(undefined1 *)(puVar6 + 1),*puVar11,*(undefined1 *)(puVar11 + 1));
    puVar2 = puVar6;
    if (iVar3 != 0) {
      puVar2 = puVar11;
    }
    uVar7 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar11 = puVar11 + iVar3 * -4;
    puVar4 = puVar6 + iVar3 * 4;
    *puVar12 = *puVar2;
    puVar12[1] = uVar7;
    puVar12[2] = uVar9;
    puVar12[3] = uVar10;
    puVar6 = puVar4 + -4;
    puVar13 = puVar13 + uVar1 * 4;
    param_1 = param_1 + (uVar1 ^ 1) * 4;
    puVar12 = puVar12 + -4;
    uVar5 = uVar5 - 1;
    param_3 = puVar8 + 4;
  } while (uVar5 != 0);
  puVar11 = puVar11 + 4;
  if ((param_2 & 1) != 0) {
    bVar14 = param_1 < puVar11;
    puVar6 = puVar13;
    if (bVar14) {
      puVar6 = param_1;
    }
    uVar7 = puVar6[1];
    uVar9 = puVar6[2];
    uVar10 = puVar6[3];
    param_1 = param_1 + (uint)bVar14 * 4;
    puVar8[4] = *puVar6;
    puVar8[5] = uVar7;
    puVar8[6] = uVar9;
    puVar8[7] = uVar10;
    puVar13 = puVar13 + (uint)!bVar14 * 4;
  }
  puVar6 = puVar11;
  if (param_1 == puVar11) {
    puVar6 = puVar4;
  }
  if (param_1 != puVar11 || puVar13 != puVar6) {
    FUN_01307140();
  }
  return;
}

