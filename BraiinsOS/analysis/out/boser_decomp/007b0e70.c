// FUN_007b0e70 @ 007b0e70 size=316 calls_out=2 calls_in=2
// strings: 

void FUN_007b0e70(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  puVar12 = param_1 + param_2 * 2 + -2;
  puVar5 = param_3 + param_2 * 2 + -2;
  uVar3 = param_2 >> 1;
  puVar13 = param_1 + uVar3 * 2;
  puVar9 = puVar13 + -2;
  do {
    puVar7 = param_3;
    uVar10 = param_1[1];
    uVar8 = puVar13[1];
    uVar1 = uVar10;
    if (uVar8 < uVar10) {
      uVar1 = uVar8;
    }
    uVar1 = FUN_01bed842(*puVar13,*param_1,uVar1);
    if (uVar1 == 0) {
      uVar1 = uVar8 - uVar10;
    }
    uVar6 = *puVar9;
    uVar8 = puVar9[1];
    puVar2 = puVar13;
    if (uVar1 < 0x80000000) {
      puVar2 = param_1;
    }
    uVar4 = puVar2[1];
    *puVar7 = *puVar2;
    puVar7[1] = uVar4;
    uVar11 = puVar12[1];
    uVar10 = uVar8;
    if (uVar11 < uVar8) {
      uVar10 = uVar11;
    }
    uVar10 = FUN_01bed842(*puVar12,uVar6,uVar10);
    if (uVar10 == 0) {
      uVar10 = uVar11 - uVar8;
    }
    puVar2 = puVar9;
    if (uVar10 < 0x80000000) {
      puVar2 = puVar12;
    }
    uVar6 = puVar2[1];
    *puVar5 = *puVar2;
    puVar5[1] = uVar6;
    puVar13 = puVar13 + ((int)uVar1 >> 0x1f) * -2;
    param_1 = param_1 + (uVar1 >> 0x1f ^ 1) * 2;
    puVar9 = puVar9 + ((int)uVar10 >> 0x1f) * 2;
    puVar12 = puVar12 + ~((int)uVar10 >> 0x1f) * 2;
    puVar5 = puVar5 + -2;
    uVar3 = uVar3 - 1;
    param_3 = puVar7 + 2;
  } while (uVar3 != 0);
  puVar9 = puVar9 + 2;
  if ((param_2 & 1) != 0) {
    bVar14 = puVar9 <= param_1;
    puVar5 = puVar13;
    if (!bVar14) {
      puVar5 = param_1;
    }
    uVar6 = puVar5[1];
    puVar7[2] = *puVar5;
    puVar7[3] = uVar6;
    puVar13 = puVar13 + (uint)bVar14 * 2;
    param_1 = param_1 + (uint)!bVar14 * 2;
  }
  bVar14 = param_1 == puVar9;
  if (bVar14) {
    puVar9 = puVar12 + 2;
  }
  if (!bVar14 || puVar13 != puVar9) {
    FUN_01307140();
  }
  return;
}

