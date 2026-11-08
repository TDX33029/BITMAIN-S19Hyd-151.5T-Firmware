// FUN_006c69dc @ 006c69dc size=360 calls_out=2 calls_in=3
// strings: 

void FUN_006c69dc(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  uVar4 = param_2 >> 1;
  puVar11 = param_1 + param_2 * 3 + -3;
  puVar9 = param_1 + uVar4 * 3;
  puVar10 = puVar9 + -3;
  puVar5 = param_3 + param_2 * 3 + -3;
  do {
    puVar7 = param_3;
    uVar1 = FUN_006c61fc(*param_4,puVar9[1],puVar9[2],param_1[1],param_1[2]);
    puVar2 = param_1;
    if (uVar1 != 0) {
      puVar2 = puVar9;
    }
    uVar6 = puVar2[1];
    uVar8 = puVar2[2];
    *puVar7 = *puVar2;
    puVar7[1] = uVar6;
    puVar7[2] = uVar8;
    uVar3 = FUN_006c61fc(*param_4,puVar11[1],puVar11[2],puVar10[1],puVar10[2]);
    puVar2 = puVar11;
    if (uVar3 != 0) {
      puVar2 = puVar10;
    }
    uVar6 = puVar2[1];
    uVar8 = puVar2[2];
    *puVar5 = *puVar2;
    puVar5[1] = uVar6;
    puVar5[2] = uVar8;
    puVar10 = puVar10 + uVar3 * -3;
    puVar2 = puVar11 + (uVar3 | uVar3 << 1);
    puVar9 = puVar9 + (uVar1 | uVar1 << 1);
    puVar11 = puVar2 + -3;
    param_1 = param_1 + (uVar1 ^ 1 | (uVar1 ^ 1) << 1);
    uVar4 = uVar4 - 1;
    param_3 = puVar7 + 3;
    puVar5 = puVar5 + -3;
  } while (uVar4 != 0);
  puVar10 = puVar10 + 3;
  if ((param_2 & 1) != 0) {
    bVar12 = param_1 < puVar10;
    puVar5 = puVar9;
    if (bVar12) {
      puVar5 = param_1;
    }
    uVar6 = puVar5[1];
    uVar8 = puVar5[2];
    puVar7[3] = *puVar5;
    puVar7[4] = uVar6;
    puVar7[5] = uVar8;
    param_1 = param_1 + ((uint)bVar12 | (uint)bVar12 << 1);
    puVar9 = puVar9 + ((uint)!bVar12 | (uint)!bVar12 << 1);
  }
  puVar5 = puVar10;
  if (param_1 == puVar10) {
    puVar5 = puVar2;
  }
  if (param_1 != puVar10 || puVar9 != puVar5) {
    FUN_01307140();
  }
  return;
}

