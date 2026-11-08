// FUN_01795314 @ 01795314 size=1748 calls_out=0 calls_in=3
// strings: 

int FUN_01795314(uint *param_1,uint param_2,int param_3,uint param_4,uint *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  
  if (param_2 < 8) {
    return 0;
  }
  puVar5 = (uint *)((int)param_1 + (param_2 - 4));
  uVar8 = *param_5 & 0xff;
  puVar13 = param_1;
  if (param_2 < (uVar8 * param_4 >> 3) + 8 || 0xb < uVar8) {
    uVar8 = param_4 & 1;
    if ((int)param_4 < 0) {
      uVar8 = -uVar8;
    }
    if (uVar8 == 1) {
      param_4 = param_4 - 1;
      uVar12 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar7 = uVar12 & 0xffffff00;
      uVar8 = uVar12 & 7;
      puVar13 = (uint *)((int)param_1 + ((uVar12 & 0xff) >> 3));
      if (puVar5 < puVar13) {
        puVar13 = puVar5;
      }
      *param_1 = uVar7 >> (0x20 - (uVar12 & 0xff) & 0xff);
    }
    else {
      uVar8 = 0;
      uVar7 = 0;
    }
    if ((param_4 & 3) != 0) {
      iVar4 = param_3 + param_4;
      param_4 = param_4 - 2;
      uVar12 = param_5[*(byte *)(iVar4 + -1) + 1];
      uVar10 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar8 = uVar12 + uVar10 + uVar8;
      uVar14 = uVar8 & 0xff;
      uVar7 = uVar10 & 0xffffff00 | (uVar12 | uVar7 >> (uVar12 & 0xff)) >> (uVar10 & 0xff);
      uVar8 = uVar8 & 7;
      puVar3 = (uint *)((int)puVar13 + (uVar14 >> 3));
      *puVar13 = uVar7 >> (0x20 - uVar14 & 0xff);
      puVar13 = puVar5;
      if (puVar3 <= puVar5) {
        puVar13 = puVar3;
      }
    }
    if (0 < (int)param_4) {
      pbVar2 = (byte *)(param_3 + param_4);
      do {
        uVar10 = param_5[pbVar2[-1] + 1];
        uVar12 = param_5[pbVar2[-2] + 1];
        uVar8 = uVar10 + uVar12 + uVar8;
        uVar12 = uVar12 & 0xffffff00 | (uVar10 | uVar7 >> (uVar10 & 0xff)) >> (uVar12 & 0xff);
        uVar7 = uVar8 & 0xff;
        puVar6 = (uint *)((int)puVar13 + (uVar7 >> 3));
        puVar3 = (uint *)(uVar12 >> (0x20 - uVar7 & 0xff));
        *puVar13 = (uint)puVar3;
        pbVar1 = pbVar2 + -3;
        if (puVar6 <= puVar5) {
          puVar3 = puVar6;
        }
        pbVar2 = pbVar2 + -4;
        if (puVar6 > puVar5) {
          puVar3 = puVar5;
        }
        uVar14 = param_5[*pbVar2 + 1];
        uVar7 = param_5[*pbVar1 + 1] + uVar14;
        uVar8 = (uVar8 & 7) + uVar7;
        uVar10 = uVar8 & 0xff;
        uVar7 = uVar14 & 0xffffff00 | param_5[*pbVar1 + 1] >> (uVar14 & 0xff) |
                uVar12 >> (uVar7 & 0xff);
        uVar8 = uVar8 & 7;
        puVar13 = (uint *)((int)puVar3 + (uVar10 >> 3));
        if (puVar5 < puVar13) {
          puVar13 = puVar5;
        }
        *puVar3 = uVar7 >> (0x20 - uVar10 & 0xff);
      } while (pbVar2 != (byte *)((param_3 + -4 + param_4) - (param_4 - 1 & 0xfffffffc)));
    }
  }
  else if (uVar8 == 0xb) {
    uVar8 = param_4 & 1;
    if ((int)param_4 < 0) {
      uVar8 = -uVar8;
    }
    if (uVar8 == 1) {
      param_4 = param_4 - 1;
      uVar12 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar7 = uVar12 & 0xffffff00;
      uVar8 = uVar12 & 7;
      puVar13 = (uint *)((int)param_1 + ((uVar12 & 0xff) >> 3));
      *param_1 = uVar7 >> (0x20 - (uVar12 & 0xff) & 0xff);
    }
    else {
      uVar8 = 0;
      uVar7 = 0;
    }
    if ((param_4 & 3) != 0) {
      iVar4 = param_3 + param_4;
      param_4 = param_4 - 2;
      uVar12 = param_5[*(byte *)(iVar4 + -1) + 1];
      uVar10 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar8 = uVar12 + uVar10 + uVar8;
      uVar7 = uVar10 & 0xffffff00 | (uVar12 | uVar7 >> (uVar12 & 0xff)) >> (uVar10 & 0xff);
      uVar12 = uVar8 & 0xff;
      uVar8 = uVar8 & 7;
      *puVar13 = uVar7 >> (0x20 - uVar12 & 0xff);
      puVar13 = (uint *)((int)puVar13 + (uVar12 >> 3));
    }
    if (0 < (int)param_4) {
      pbVar2 = (byte *)(param_3 + param_4);
      do {
        uVar12 = param_5[pbVar2[-1] + 1];
        uVar10 = param_5[pbVar2[-2] + 1];
        uVar8 = uVar12 + uVar10 + uVar8;
        uVar9 = uVar8 & 0xff;
        uVar10 = uVar10 & 0xffffff00 | (uVar12 | uVar7 >> (uVar12 & 0xff)) >> (uVar10 & 0xff);
        *puVar13 = uVar10 >> (0x20 - uVar9 & 0xff);
        pbVar1 = pbVar2 + -3;
        pbVar2 = pbVar2 + -4;
        uVar7 = param_5[*pbVar2 + 1];
        uVar14 = param_5[*pbVar1 + 1] + uVar7;
        uVar8 = (uVar8 & 7) + uVar14;
        uVar12 = uVar8 & 0xff;
        uVar7 = uVar7 & 0xffffff00 | param_5[*pbVar1 + 1] >> (uVar7 & 0xff) |
                uVar10 >> (uVar14 & 0xff);
        uVar8 = uVar8 & 7;
        *(uint *)((int)puVar13 + (uVar9 >> 3)) = uVar7 >> (0x20 - uVar12 & 0xff);
        puVar13 = (uint *)((int)puVar13 + (uVar12 >> 3) + (uVar9 >> 3));
      } while (pbVar2 != (byte *)((param_3 + -4 + param_4) - (param_4 - 1 & 0xfffffffc)));
    }
  }
  else if (uVar8 < 8) {
    if ((int)param_4 % 3 < 1) {
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      bVar15 = (int)param_4 % 3 != 1;
      uVar8 = param_4 - 1;
      if (bVar15) {
        param_4 = param_4 - 2;
      }
      else {
        param_4 = uVar8;
      }
      pbVar2 = (byte *)(param_3 + uVar8);
      if (bVar15) {
        uVar8 = (uint)*(byte *)(param_3 + param_4);
      }
      uVar12 = param_5[*pbVar2 + 1];
      if (bVar15) {
        uVar8 = param_5[uVar8 + 1];
      }
      uVar7 = uVar12 & 0xffffff00;
      if (bVar15) {
        uVar12 = uVar12 + uVar8;
        uVar7 = uVar8 & 0xffffff00 | uVar7 >> (uVar8 & 0xff);
      }
      uVar8 = uVar12 & 7;
      puVar13 = (uint *)((int)param_1 + ((uVar12 & 0xff) >> 3));
      *param_1 = uVar7 >> (0x20 - (uVar12 & 0xff) & 0xff);
    }
    if (0x2aaaaaaa < (param_4 * -0x55555555 + 0x2aaaaaaa >> 1 | param_4 * -0x80000000)) {
      iVar4 = param_3 + param_4;
      param_4 = param_4 - 3;
      uVar12 = param_5[*(byte *)(iVar4 + -1) + 1];
      uVar10 = param_5[*(byte *)(iVar4 + -2) + 1];
      uVar14 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar8 = uVar10 + uVar12 + uVar8 + uVar14;
      uVar7 = uVar14 | (uVar10 | (uVar12 | uVar7 >> (uVar12 & 0xff)) >> (uVar10 & 0xff)) >>
                       (uVar14 & 0xff);
      uVar12 = uVar8 & 0xff;
      uVar8 = uVar8 & 7;
      *puVar13 = uVar7 >> (0x20 - uVar12 & 0xff);
      puVar13 = (uint *)((int)puVar13 + (uVar12 >> 3));
    }
    if (0 < (int)param_4) {
      pbVar2 = (byte *)(param_3 + param_4);
      do {
        param_4 = param_4 - 6;
        uVar10 = param_5[pbVar2[-1] + 1];
        uVar12 = param_5[pbVar2[-2] + 1];
        uVar14 = param_5[pbVar2[-3] + 1];
        uVar8 = uVar10 + uVar12 + uVar14 + uVar8;
        uVar11 = uVar8 & 0xff;
        uVar14 = uVar14 | (uVar12 | (uVar10 | uVar7 >> (uVar10 & 0xff)) >> (uVar12 & 0xff)) >>
                          (uVar14 & 0xff);
        *puVar13 = uVar14 >> (0x20 - uVar11 & 0xff);
        pbVar1 = pbVar2 + -4;
        uVar9 = param_5[pbVar2[-5] + 1];
        pbVar2 = pbVar2 + -6;
        uVar7 = param_5[*pbVar2 + 1];
        uVar10 = param_5[*pbVar1 + 1] + uVar9 + uVar7;
        uVar8 = (uVar8 & 7) + uVar10;
        uVar12 = uVar8 & 0xff;
        uVar7 = uVar14 >> (uVar10 & 0xff) |
                (uVar9 | param_5[*pbVar1 + 1] >> (uVar9 & 0xff)) >> (uVar7 & 0xff) | uVar7;
        uVar8 = uVar8 & 7;
        *(uint *)((int)puVar13 + (uVar11 >> 3)) = uVar7 >> (0x20 - uVar12 & 0xff);
        puVar13 = (uint *)((int)puVar13 + (uVar12 >> 3) + (uVar11 >> 3));
      } while (0 < (int)param_4);
    }
  }
  else {
    uVar8 = param_4 & 1;
    if ((int)param_4 < 0) {
      uVar8 = -uVar8;
    }
    if (uVar8 == 1) {
      param_4 = param_4 - 1;
      uVar12 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar7 = uVar12 & 0xffffff00;
      uVar8 = uVar12 & 7;
      puVar13 = (uint *)((int)param_1 + ((uVar12 & 0xff) >> 3));
      *param_1 = uVar7 >> (0x20 - (uVar12 & 0xff) & 0xff);
    }
    else {
      uVar8 = 0;
      uVar7 = 0;
    }
    if ((param_4 & 3) != 0) {
      iVar4 = param_3 + param_4;
      param_4 = param_4 - 2;
      uVar12 = param_5[*(byte *)(iVar4 + -1) + 1];
      uVar10 = param_5[*(byte *)(param_3 + param_4) + 1];
      uVar8 = uVar12 + uVar10 + uVar8;
      uVar7 = uVar10 | (uVar12 | uVar7 >> (uVar12 & 0xff)) >> (uVar10 & 0xff);
      uVar12 = uVar8 & 0xff;
      uVar8 = uVar8 & 7;
      *puVar13 = uVar7 >> (0x20 - uVar12 & 0xff);
      puVar13 = (uint *)((int)puVar13 + (uVar12 >> 3));
    }
    if (0 < (int)param_4) {
      pbVar2 = (byte *)(param_3 + param_4);
      do {
        uVar12 = param_5[pbVar2[-1] + 1];
        uVar10 = param_5[pbVar2[-2] + 1];
        uVar8 = uVar12 + uVar10 + uVar8;
        uVar9 = uVar8 & 0xff;
        uVar10 = uVar10 | (uVar12 | uVar7 >> (uVar12 & 0xff)) >> (uVar10 & 0xff);
        *puVar13 = uVar10 >> (0x20 - uVar9 & 0xff);
        pbVar1 = pbVar2 + -3;
        pbVar2 = pbVar2 + -4;
        uVar7 = param_5[*pbVar2 + 1];
        uVar14 = param_5[*pbVar1 + 1] + uVar7;
        uVar8 = (uVar8 & 7) + uVar14;
        uVar12 = uVar8 & 0xff;
        uVar7 = uVar7 | param_5[*pbVar1 + 1] >> (uVar7 & 0xff) | uVar10 >> (uVar14 & 0xff);
        uVar8 = uVar8 & 7;
        *(uint *)((int)puVar13 + (uVar9 >> 3)) = uVar7 >> (0x20 - uVar12 & 0xff);
        puVar13 = (uint *)((int)puVar13 + (uVar12 >> 3) + (uVar9 >> 3));
      } while (pbVar2 != (byte *)((param_3 + -4 + param_4) - (param_4 - 1 & 0xfffffffc)));
    }
  }
  puVar3 = (uint *)((int)puVar13 + (uVar8 + 1 >> 3));
  *puVar13 = (uVar7 >> 1 | 0x80000000) >> (0x1f - uVar8 & 0xff);
  if ((puVar5 < puVar3) || (puVar5 == puVar3)) {
    return 0;
  }
  iVar4 = (int)puVar3 - (int)param_1;
  if ((uVar8 + 0x80000001 & 7) != 0) {
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

