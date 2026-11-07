// FUN_016d6ef6 @ 016d6ef6 size=196 calls_out=0 calls_in=1
// strings: 

byte * FUN_016d6ef6(int param_1,byte *param_2,byte *param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  bVar10 = param_3 == param_2;
  iVar6 = (int)param_3 - (int)param_2;
  if (!bVar10) {
    iVar6 = param_5;
  }
  if ((!bVar10 && param_5 != 0) && iVar6 < 0 == (bVar10 && SBORROW4((int)param_3,(int)param_2))) {
    iVar6 = 0;
    if (param_5 < 0xff) {
      pbVar7 = param_4 + param_5;
    }
    else {
      pbVar7 = param_4 + 0xfe;
    }
    pbVar3 = (byte *)0xffffffff;
    pbVar5 = param_4;
    pbVar9 = param_3;
    for (; iVar6 < (int)param_2 - param_1; iVar6 = iVar6 + 2) {
      bVar1 = *pbVar9;
      uVar4 = (uint)bVar1;
      if ((bVar1 & 0xc0) == 0) {
        if (uVar4 == 0) {
          *pbVar5 = bVar1;
          if ((int)pbVar3 < 0) {
            return pbVar9 + (1 - (int)param_3);
          }
          return pbVar3;
        }
        pbVar8 = pbVar9 + 1;
        pbVar2 = param_4;
        if (pbVar5 != param_4) {
          *pbVar5 = 0x2e;
          uVar4 = (uint)*pbVar9;
          pbVar2 = pbVar5 + 1;
        }
        if ((int)param_2 - (int)pbVar8 <= (int)uVar4) {
          return (byte *)0xffffffff;
        }
        if ((int)pbVar7 - (int)pbVar2 <= (int)uVar4) {
          return (byte *)0xffffffff;
        }
        pbVar9 = pbVar9 + uVar4 + 1;
        pbVar5 = pbVar2 + -1;
        for (; pbVar8 != pbVar9; pbVar8 = pbVar8 + 1) {
          pbVar5 = pbVar5 + 1;
          *pbVar5 = *pbVar8;
        }
        pbVar5 = pbVar2 + uVar4;
      }
      else {
        if (param_2 == pbVar9 + 1) {
          return (byte *)0xffffffff;
        }
        bVar10 = (int)pbVar3 < 0;
        if (bVar10) {
          pbVar3 = pbVar9 + 2;
        }
        uVar4 = (uVar4 & 0x3f) << 8 | (uint)pbVar9[1];
        if (bVar10) {
          pbVar3 = pbVar3 + -(int)param_3;
        }
        if ((int)param_2 - param_1 <= (int)uVar4) {
          return (byte *)0xffffffff;
        }
        pbVar9 = (byte *)(param_1 + uVar4);
      }
    }
  }
  return (byte *)0xffffffff;
}

