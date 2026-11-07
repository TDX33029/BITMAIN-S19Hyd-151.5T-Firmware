// FUN_01b830e8 @ 01b830e8 size=1636 calls_out=1 calls_in=3
// strings: 

int FUN_01b830e8(uint *param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  
  if (param_2 < 8) {
    return 0;
  }
  puVar12 = (uint *)((int)param_1 + (param_2 - 4));
  uVar4 = *param_5 & 0xff;
  puVar11 = param_1;
  if (param_2 < (uVar4 * param_4 >> 3) + 8 || 0xb < uVar4) {
    uVar4 = param_4 & 1;
    if ((int)param_4 < 0) {
      uVar4 = -uVar4;
    }
    if (uVar4 == 1) {
      param_4 = param_4 - 1;
      uVar9 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar4 = uVar9 & 0xffffff00;
      uVar10 = uVar9 & 7;
      puVar11 = (uint *)((int)param_1 + ((uVar9 & 0xff) >> 3));
      if (puVar12 < puVar11) {
        puVar11 = puVar12;
      }
      *param_1 = uVar4 >> (0x20 - (uVar9 & 0xff) & 0xff);
    }
    else {
      uVar4 = 0;
      uVar10 = uVar4;
    }
    if ((param_4 & 3) != 0) {
      iVar5 = param_3 + param_4;
      param_4 = param_4 - 2;
      uVar6 = param_5[*(byte *)(iVar5 + -1) + 1];
      uVar9 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar7 = uVar6 + uVar9 + uVar10;
      uVar4 = uVar9 & 0xffffff00 | (uVar6 | uVar4 >> (uVar6 & 0xff)) >> (uVar9 & 0xff);
      uVar10 = uVar7 & 7;
      uVar7 = uVar7 & 0xff;
      *puVar11 = uVar4 >> (0x20 - uVar7 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar7 >> 3));
      if (puVar12 < puVar11) {
        puVar11 = puVar12;
      }
    }
    pbVar8 = (byte *)(param_3 + param_4);
    while (0 < (int)pbVar8 - param_3) {
      uVar9 = param_5[pbVar8[-1] + 1];
      uVar7 = param_5[pbVar8[-2] + 1];
      uVar10 = uVar9 + uVar7 + uVar10;
      uVar4 = uVar7 & 0xffffff00 | (uVar9 | uVar4 >> (uVar9 & 0xff)) >> (uVar7 & 0xff);
      uVar9 = uVar10 & 0xff;
      puVar3 = (uint *)((int)puVar11 + (uVar9 >> 3));
      *puVar11 = uVar4 >> (0x20 - uVar9 & 0xff);
      pbVar1 = pbVar8 + -3;
      if (puVar12 < puVar3) {
        puVar3 = puVar12;
      }
      pbVar8 = pbVar8 + -4;
      uVar7 = param_5[*pbVar8 + 1];
      uVar6 = param_5[*pbVar1 + 1] + uVar7;
      uVar9 = (uVar10 & 7) + uVar6;
      uVar10 = uVar9 & 7;
      uVar4 = uVar7 & 0xffffff00 | param_5[*pbVar1 + 1] >> (uVar7 & 0xff) | uVar4 >> (uVar6 & 0xff);
      uVar9 = uVar9 & 0xff;
      *puVar3 = uVar4 >> (0x20 - uVar9 & 0xff);
      puVar3 = (uint *)((int)puVar3 + (uVar9 >> 3));
      puVar11 = puVar12;
      if (puVar3 <= puVar12) {
        puVar11 = puVar3;
      }
    }
  }
  else if (uVar4 == 0xb) {
    uVar4 = param_4 & 1;
    if ((int)param_4 < 0) {
      uVar4 = -uVar4;
    }
    if (uVar4 == 1) {
      param_4 = param_4 - 1;
      uVar9 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar4 = uVar9 & 0xffffff00;
      uVar10 = uVar9 & 7;
      puVar11 = (uint *)((int)param_1 + ((uVar9 & 0xff) >> 3));
      *param_1 = uVar4 >> (0x20 - (uVar9 & 0xff) & 0xff);
    }
    else {
      uVar4 = 0;
      uVar10 = 0;
    }
    if ((param_4 & 3) != 0) {
      iVar5 = param_3 + param_4;
      param_4 = param_4 - 2;
      uVar6 = param_5[*(byte *)(iVar5 + -1) + 1];
      uVar9 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar7 = uVar6 + uVar9 + uVar10;
      uVar4 = uVar9 & 0xffffff00 | (uVar6 | uVar4 >> (uVar6 & 0xff)) >> (uVar9 & 0xff);
      uVar10 = uVar7 & 7;
      uVar7 = uVar7 & 0xff;
      *puVar11 = uVar4 >> (0x20 - uVar7 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar7 >> 3));
    }
    pbVar8 = (byte *)(param_3 + param_4);
    while (0 < (int)pbVar8 - param_3) {
      uVar9 = param_5[pbVar8[-1] + 1];
      uVar7 = param_5[pbVar8[-2] + 1];
      uVar10 = uVar9 + uVar7 + uVar10;
      uVar4 = uVar7 & 0xffffff00 | (uVar9 | uVar4 >> (uVar9 & 0xff)) >> (uVar7 & 0xff);
      uVar9 = uVar10 & 0xff;
      *puVar11 = uVar4 >> (0x20 - uVar9 & 0xff);
      pbVar1 = pbVar8 + -3;
      pbVar8 = pbVar8 + -4;
      uVar6 = param_5[*pbVar8 + 1];
      uVar13 = param_5[*pbVar1 + 1] + uVar6;
      uVar7 = (uVar10 & 7) + uVar13;
      uVar10 = uVar7 & 7;
      uVar4 = uVar6 & 0xffffff00 | param_5[*pbVar1 + 1] >> (uVar6 & 0xff) | uVar4 >> (uVar13 & 0xff)
      ;
      uVar7 = uVar7 & 0xff;
      *(uint *)((int)puVar11 + (uVar9 >> 3)) = uVar4 >> (0x20 - uVar7 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar7 >> 3) + (uVar9 >> 3));
    }
  }
  else if (uVar4 < 8) {
    FUN_01bf0f98(param_4,3);
    if (extraout_r1 < 1) {
      uVar4 = 0;
      uVar10 = 0;
    }
    else {
      uVar4 = 0;
      uVar9 = 0;
      iVar5 = extraout_r1;
      while( true ) {
        param_4 = param_4 - 1;
        uVar10 = param_5[*(byte *)(param_3 + param_4) + 1];
        uVar9 = uVar9 + uVar10;
        uVar4 = uVar10 & 0xffffff00 | uVar4 >> (uVar10 & 0xff);
        if (iVar5 == 1) break;
        iVar5 = 1;
      }
      uVar10 = uVar9 & 7;
      puVar11 = (uint *)((int)param_1 + ((uVar9 & 0xff) >> 3));
      *param_1 = uVar4 >> (0x20 - (uVar9 & 0xff) & 0xff);
    }
    FUN_01bf0f98(param_4,6);
    if (extraout_r1_00 != 0) {
      iVar5 = param_3 + param_4;
      param_4 = param_4 - 3;
      uVar6 = param_5[*(byte *)(iVar5 + -1) + 1];
      uVar9 = param_5[*(byte *)(iVar5 + -2) + 1];
      uVar7 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar4 = uVar7 | (uVar9 | (uVar6 | uVar4 >> (uVar6 & 0xff)) >> (uVar9 & 0xff)) >>
                      (uVar7 & 0xff);
      uVar9 = uVar10 + uVar7 + uVar6 + uVar9;
      uVar10 = uVar9 & 7;
      uVar9 = uVar9 & 0xff;
      *puVar11 = uVar4 >> (0x20 - uVar9 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar9 >> 3));
    }
    pbVar8 = (byte *)(param_3 + param_4);
    while (0 < (int)pbVar8 - param_3) {
      uVar6 = param_5[pbVar8[-1] + 1];
      uVar7 = param_5[pbVar8[-2] + 1];
      uVar9 = param_5[pbVar8[-3] + 1];
      uVar10 = uVar7 + uVar6 + uVar10 + uVar9;
      uVar9 = uVar9 | (uVar7 | (uVar6 | uVar4 >> (uVar6 & 0xff)) >> (uVar7 & 0xff)) >>
                      (uVar9 & 0xff);
      uVar13 = uVar10 & 0xff;
      *puVar11 = uVar9 >> (0x20 - uVar13 & 0xff);
      pbVar1 = pbVar8 + -4;
      pbVar2 = pbVar8 + -5;
      pbVar8 = pbVar8 + -6;
      uVar7 = param_5[*pbVar2 + 1];
      uVar6 = param_5[*pbVar8 + 1];
      uVar4 = uVar7 + param_5[*pbVar1 + 1] + uVar6;
      uVar10 = (uVar10 & 7) + uVar4;
      uVar4 = uVar6 | (uVar7 | param_5[*pbVar1 + 1] >> (uVar7 & 0xff)) >> (uVar6 & 0xff) |
              uVar9 >> (uVar4 & 0xff);
      uVar9 = uVar10 & 0xff;
      uVar10 = uVar10 & 7;
      *(uint *)((int)puVar11 + (uVar13 >> 3)) = uVar4 >> (0x20 - uVar9 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar9 >> 3) + (uVar13 >> 3));
    }
  }
  else {
    uVar4 = param_4 & 1;
    if ((int)param_4 < 0) {
      uVar4 = -uVar4;
    }
    if (uVar4 == 1) {
      param_4 = param_4 - 1;
      uVar9 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar4 = uVar9 & 0xffffff00;
      uVar10 = uVar9 & 7;
      puVar11 = (uint *)((int)param_1 + ((uVar9 & 0xff) >> 3));
      *param_1 = uVar4 >> (0x20 - (uVar9 & 0xff) & 0xff);
    }
    else {
      uVar4 = 0;
      uVar10 = 0;
    }
    if ((param_4 & 3) != 0) {
      iVar5 = param_3 + param_4;
      param_4 = param_4 - 2;
      uVar6 = param_5[*(byte *)(iVar5 + -1) + 1];
      uVar9 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar7 = uVar6 + uVar9 + uVar10;
      uVar10 = uVar7 & 7;
      uVar4 = uVar9 | (uVar6 | uVar4 >> (uVar6 & 0xff)) >> (uVar9 & 0xff);
      uVar7 = uVar7 & 0xff;
      *puVar11 = uVar4 >> (0x20 - uVar7 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar7 >> 3));
    }
    pbVar8 = (byte *)(param_3 + param_4);
    while (0 < (int)pbVar8 - param_3) {
      uVar7 = param_5[pbVar8[-1] + 1];
      uVar9 = param_5[pbVar8[-2] + 1];
      uVar10 = uVar7 + uVar9 + uVar10;
      uVar9 = uVar9 | (uVar7 | uVar4 >> (uVar7 & 0xff)) >> (uVar9 & 0xff);
      uVar7 = uVar10 & 0xff;
      *puVar11 = uVar9 >> (0x20 - uVar7 & 0xff);
      pbVar1 = pbVar8 + -3;
      pbVar8 = pbVar8 + -4;
      uVar4 = param_5[*pbVar8 + 1];
      uVar13 = param_5[*pbVar1 + 1] + uVar4;
      uVar6 = (uVar10 & 7) + uVar13;
      uVar10 = uVar6 & 7;
      uVar4 = uVar4 | param_5[*pbVar1 + 1] >> (uVar4 & 0xff) | uVar9 >> (uVar13 & 0xff);
      uVar6 = uVar6 & 0xff;
      *(uint *)((int)puVar11 + (uVar7 >> 3)) = uVar4 >> (0x20 - uVar6 & 0xff);
      puVar11 = (uint *)((int)puVar11 + (uVar6 >> 3) + (uVar7 >> 3));
    }
  }
  *puVar11 = (uVar4 >> 1 | 0x80000000) >> (0x1f - uVar10 & 0xff);
  puVar11 = (uint *)((int)puVar11 + (uVar10 + 1 >> 3));
  if (puVar12 < puVar11) {
    puVar11 = puVar12;
  }
  if (puVar11 < puVar12) {
    iVar5 = (int)puVar11 + ((uint)((uVar10 + 0x80000001 & 7) != 0) - (int)param_1);
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

