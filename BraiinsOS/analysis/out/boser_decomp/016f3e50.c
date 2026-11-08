// FUN_016f3e50 @ 016f3e50 size=276 calls_out=1 calls_in=2
// strings: 

void FUN_016f3e50(byte *param_1,uint param_2,undefined2 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  bool bVar13;
  
  uVar10 = param_2 >> 1;
  pbVar11 = param_1 + param_2 * 2 + -2;
  pbVar4 = param_1 + (param_2 & 0xfffffffe);
  pbVar5 = pbVar4 + -2;
  puVar12 = param_3 + (param_2 - 1);
  do {
    uVar7 = (uint)(*pbVar4 < *param_1);
    if ((*pbVar4 == *param_1) && (uVar7 = 0, pbVar4[1] < param_1[1])) {
      uVar7 = 1;
    }
    pbVar6 = param_1;
    if (uVar7 != 0) {
      pbVar6 = pbVar4;
    }
    bVar1 = *pbVar5;
    bVar2 = *pbVar11;
    puVar3 = param_3 + 1;
    *param_3 = *(undefined2 *)pbVar6;
    uVar8 = (uint)(bVar2 < bVar1);
    if ((bVar2 == bVar1) && (uVar8 = 0, pbVar11[1] < pbVar5[1])) {
      uVar8 = 1;
    }
    pbVar4 = pbVar4 + uVar7 * 2;
    param_1 = param_1 + (uVar7 ^ 1) * 2;
    pbVar6 = pbVar11;
    if (uVar8 != 0) {
      pbVar6 = pbVar5;
    }
    pbVar5 = pbVar5 + uVar8 * -2;
    pbVar9 = pbVar11 + uVar8 * 2;
    *puVar12 = *(undefined2 *)pbVar6;
    pbVar11 = pbVar9 + -2;
    uVar10 = uVar10 - 1;
    param_3 = puVar3;
    puVar12 = puVar12 + -1;
  } while (uVar10 != 0);
  pbVar5 = pbVar5 + 2;
  if ((param_2 & 1) != 0) {
    bVar13 = param_1 < pbVar5;
    pbVar11 = pbVar4;
    if (bVar13) {
      pbVar11 = param_1;
    }
    *puVar3 = *(undefined2 *)pbVar11;
    param_1 = param_1 + (uint)bVar13 * 2;
    pbVar4 = pbVar4 + (uint)!bVar13 * 2;
  }
  pbVar11 = param_1;
  if (param_1 == pbVar5) {
    pbVar11 = pbVar9;
  }
  if (param_1 != pbVar5 || pbVar4 != pbVar11) {
    FUN_01307140();
  }
  return;
}

