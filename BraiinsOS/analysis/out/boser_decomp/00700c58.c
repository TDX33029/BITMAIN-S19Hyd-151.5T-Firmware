// FUN_00700c58 @ 00700c58 size=188 calls_out=1 calls_in=2
// strings: 

void FUN_00700c58(byte *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  
  pbVar10 = param_1 + (param_2 >> 1);
  pbVar9 = param_1 + (param_2 - 1);
  pbVar8 = pbVar10 + -1;
  uVar7 = param_2 >> 1;
  pbVar3 = param_3 + (param_2 - 1);
  do {
    bVar5 = *pbVar8;
    bVar11 = *pbVar10 < *param_1;
    bVar6 = *param_1;
    if (bVar11) {
      bVar6 = *pbVar10;
    }
    bVar1 = *pbVar9;
    pbVar4 = pbVar10 + 1;
    if (!bVar11) {
      pbVar4 = pbVar10;
    }
    pbVar10 = pbVar4;
    bVar12 = bVar1 < bVar5;
    if (bVar12) {
      pbVar8 = pbVar8 + -1;
    }
    if (!bVar12 && bVar1 != bVar5) {
      bVar5 = bVar1;
    }
    pbVar4 = param_3 + 1;
    *param_3 = bVar6;
    pbVar9 = pbVar9 + -(uint)!bVar12;
    param_1 = param_1 + !bVar11;
    *pbVar3 = bVar5;
    uVar7 = uVar7 - 1;
    param_3 = pbVar4;
    pbVar3 = pbVar3 + -1;
  } while (uVar7 != 0);
  pbVar8 = pbVar8 + 1;
  pbVar3 = param_1;
  if ((param_2 & 1) != 0) {
    pbVar2 = pbVar10;
    if (param_1 < pbVar8) {
      pbVar3 = param_1 + 1;
      pbVar2 = param_1;
    }
    *pbVar4 = *pbVar2;
    pbVar10 = pbVar10 + (param_1 >= pbVar8);
  }
  bVar11 = pbVar3 == pbVar8;
  if (bVar11) {
    pbVar3 = pbVar9 + 1;
  }
  if (!bVar11 || pbVar10 != pbVar3) {
    FUN_01307140();
  }
  return;
}

