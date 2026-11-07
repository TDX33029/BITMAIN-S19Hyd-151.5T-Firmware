// FUN_01013ac8 @ 01013ac8 size=392 calls_out=2 calls_in=2
// strings: 

void FUN_01013ac8(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  uVar3 = param_2 >> 1;
  puVar13 = param_1 + param_2 * 3 + -3;
  puVar7 = param_1 + uVar3 * 3;
  puVar10 = puVar7 + -3;
  puVar4 = param_3 + param_2 * 3 + -3;
  do {
    puVar5 = param_3;
    uVar11 = *(uint *)(param_1[2] + 0x54);
    uVar8 = *(uint *)(puVar7[2] + 0x54);
    uVar1 = uVar11;
    if (uVar8 < uVar11) {
      uVar1 = uVar8;
    }
    uVar1 = FUN_01bed842(*(undefined4 *)(puVar7[2] + 0x50),*(undefined4 *)(param_1[2] + 0x50),uVar1)
    ;
    if (uVar1 == 0) {
      uVar1 = uVar8 - uVar11;
    }
    puVar2 = puVar7;
    if (uVar1 < 0x80000000) {
      puVar2 = param_1;
    }
    uVar6 = puVar2[1];
    uVar9 = puVar2[2];
    *puVar5 = *puVar2;
    puVar5[1] = uVar6;
    puVar5[2] = uVar9;
    uVar11 = *(uint *)(puVar10[2] + 0x54);
    uVar12 = *(uint *)(puVar13[2] + 0x54);
    uVar8 = uVar11;
    if (uVar12 < uVar11) {
      uVar8 = uVar12;
    }
    uVar8 = FUN_01bed842(*(undefined4 *)(puVar13[2] + 0x50),*(undefined4 *)(puVar10[2] + 0x50),uVar8
                        );
    if (uVar8 == 0) {
      uVar8 = uVar12 - uVar11;
    }
    puVar2 = puVar10;
    if (uVar8 < 0x80000000) {
      puVar2 = puVar13;
    }
    uVar6 = puVar2[1];
    uVar9 = puVar2[2];
    *puVar4 = *puVar2;
    puVar4[1] = uVar6;
    puVar4[2] = uVar9;
    puVar7 = puVar7 + (uVar1 >> 0x1f | (uVar1 >> 0x1f) << 1);
    uVar1 = uVar1 >> 0x1f ^ 1;
    param_1 = param_1 + (uVar1 | uVar1 << 1);
    puVar10 = puVar10 + ((int)uVar8 >> 0x1f) * 3;
    puVar13 = puVar13 + ~((int)uVar8 >> 0x1f) * 3;
    uVar3 = uVar3 - 1;
    param_3 = puVar5 + 3;
    puVar4 = puVar4 + -3;
  } while (uVar3 != 0);
  puVar10 = puVar10 + 3;
  if ((param_2 & 1) != 0) {
    bVar14 = param_1 < puVar10;
    puVar4 = puVar7;
    if (bVar14) {
      puVar4 = param_1;
    }
    uVar6 = puVar4[1];
    uVar9 = puVar4[2];
    puVar5[3] = *puVar4;
    puVar5[4] = uVar6;
    puVar5[5] = uVar9;
    param_1 = param_1 + ((uint)bVar14 | (uint)bVar14 << 1);
    puVar7 = puVar7 + ((uint)!bVar14 | (uint)!bVar14 << 1);
  }
  bVar14 = param_1 == puVar10;
  if (bVar14) {
    puVar10 = puVar13 + 3;
  }
  if (!bVar14 || puVar7 != puVar10) {
    FUN_01307140();
  }
  return;
}

