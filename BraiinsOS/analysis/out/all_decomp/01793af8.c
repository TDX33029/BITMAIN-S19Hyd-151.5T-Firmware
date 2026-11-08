// FUN_01793af8 @ 01793af8 size=1080 calls_out=0 calls_in=1
// strings: 

int FUN_01793af8(uint *param_1,uint param_2,byte *param_3,uint param_4,ushort *param_5,int param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  
  if (param_4 < 3) {
    return 0;
  }
  if (param_2 < 5) {
    return 0;
  }
  puVar6 = (uint *)((int)param_1 + (param_2 - 4));
  uVar7 = (uint)param_3[param_4 - 1];
  uVar9 = param_4 & 1;
  uVar15 = (uint)*param_5;
  if (uVar9 == 0) {
    if (uVar15 != 0) {
      iVar17 = 4 << (uVar15 - 1 & 0xff);
    }
    else {
      iVar17 = 8;
    }
    pbVar14 = param_3 + (param_4 - 2);
    if (uVar15 != 0) {
      iVar17 = iVar17 + 4;
    }
    iVar17 = (int)param_5 + iVar17;
    iVar11 = *(int *)(iVar17 + uVar7 * 8 + 4);
    uVar9 = iVar11 + 0x8000;
    iVar13 = *(int *)(iVar17 + (uint)*pbVar14 * 8 + 4);
    uVar12 = (uint)param_5[*(int *)(iVar17 + uVar7 * 8) +
                           ((int)((uVar9 & 0xffff0000) - iVar11) >> (uVar9 >> 0x10 & 0xff)) + 2];
    uVar9 = iVar13 + 0x8000;
    uVar10 = (uint)param_5[*(int *)(iVar17 + (uint)*pbVar14 * 8) +
                           ((int)((uVar9 & 0xffff0000) - iVar13) >> (uVar9 >> 0x10 & 0xff)) + 2];
    puVar4 = param_1;
    if (pbVar14 <= param_3) {
      uVar8 = 0;
      uVar7 = 0;
      goto LAB_01793c9c;
    }
    if (param_6 == 0) {
      uVar8 = 0;
      uVar7 = 0;
      goto LAB_01793e60;
    }
    uVar8 = 0;
    uVar7 = 0;
LAB_01793bf8:
    do {
      pbVar1 = pbVar14 + -1;
      pbVar14 = pbVar14 + -2;
      uVar9 = uVar12 + *(int *)(iVar17 + (uint)*pbVar1 * 8 + 4) >> 0x10;
      uVar16 = *(uint *)(&DAT_0045031c + uVar9 * 4) & uVar12;
      uVar12 = (uint)param_5[*(int *)(iVar17 + (uint)*pbVar1 * 8) + ((int)uVar12 >> (uVar9 & 0xff))
                             + 2];
      uVar3 = uVar10 + *(int *)(iVar17 + (uint)*pbVar14 * 8 + 4) >> 0x10;
      uVar2 = uVar3 + uVar9 + uVar8;
      uVar7 = uVar16 << uVar8 |
              (*(uint *)(&DAT_0045031c + uVar3 * 4) & uVar10) << (uVar9 + uVar8 & 0xff) | uVar7;
      uVar8 = uVar2 & 7;
      uVar10 = (uint)param_5[*(int *)(iVar17 + (uint)*pbVar14 * 8) + ((int)uVar10 >> (uVar3 & 0xff))
                             + 2];
      uVar2 = uVar2 >> 3;
      *puVar4 = uVar7;
      puVar4 = (uint *)((int)puVar4 + uVar2);
      uVar7 = uVar7 >> ((uVar2 & 0x1f) << 3);
    } while (param_3 < pbVar14);
  }
  else {
    if (uVar15 != 0) {
      iVar17 = 4;
      uVar9 = uVar15 - 1;
    }
    else {
      iVar17 = 8;
    }
    if (uVar15 != 0) {
      iVar17 = (iVar17 << (uVar9 & 0xff)) + 4;
    }
    pbVar14 = param_3 + (param_4 - 3);
    iVar17 = (int)param_5 + iVar17;
    iVar11 = *(int *)(iVar17 + uVar7 * 8 + 4);
    uVar9 = iVar11 + 0x8000;
    iVar13 = *(int *)(iVar17 + (uint)param_3[param_4 - 2] * 8 + 4);
    uVar3 = (uint)param_5[*(int *)(iVar17 + uVar7 * 8) +
                          ((int)((uVar9 & 0xffff0000) - iVar11) >> (uVar9 >> 0x10 & 0xff)) + 2];
    uVar10 = iVar13 + 0x8000;
    uVar7 = uVar3 + *(int *)(iVar17 + (uint)*pbVar14 * 8 + 4);
    uVar9 = uVar7 >> 0x10;
    uVar7 = uVar7 >> 0x13;
    uVar8 = uVar9 & 7;
    uVar12 = (uint)param_5[*(int *)(iVar17 + (uint)param_3[param_4 - 2] * 8) +
                           ((int)((uVar10 & 0xffff0000) - iVar13) >> (uVar10 >> 0x10 & 0xff)) + 2];
    puVar4 = (uint *)((int)param_1 + uVar7);
    uVar10 = (uint)param_5[*(int *)(iVar17 + (uint)*pbVar14 * 8) + ((int)uVar3 >> (uVar9 & 0xff)) +
                           2];
    uVar7 = (*(uint *)(&DAT_0045031c + uVar9 * 4) & uVar3) >> ((uVar7 & 0x1f) << 3);
    *param_1 = *(uint *)(&DAT_0045031c + uVar9 * 4) & uVar3;
    if (param_6 != 0) {
      if (pbVar14 <= param_3) goto LAB_01793c9c;
      goto LAB_01793bf8;
    }
    if (puVar6 <= puVar4) {
      puVar4 = puVar6;
    }
    if (pbVar14 <= param_3) goto LAB_01793c9c;
LAB_01793e60:
    do {
      pbVar1 = pbVar14 + -1;
      pbVar14 = pbVar14 + -2;
      uVar9 = uVar12 + *(int *)(iVar17 + (uint)*pbVar1 * 8 + 4) >> 0x10;
      uVar16 = *(uint *)(&DAT_0045031c + uVar9 * 4) & uVar12;
      uVar12 = (uint)param_5[*(int *)(iVar17 + (uint)*pbVar1 * 8) + ((int)uVar12 >> (uVar9 & 0xff))
                             + 2];
      uVar3 = uVar10 + *(int *)(iVar17 + (uint)*pbVar14 * 8 + 4) >> 0x10;
      uVar2 = uVar3 + uVar8 + uVar9;
      uVar7 = uVar16 << uVar8 |
              (*(uint *)(&DAT_0045031c + uVar3 * 4) & uVar10) << (uVar8 + uVar9 & 0xff) | uVar7;
      uVar10 = (uint)param_5[*(int *)(iVar17 + (uint)*pbVar14 * 8) + ((int)uVar10 >> (uVar3 & 0xff))
                             + 2];
      *puVar4 = uVar7;
      puVar4 = (uint *)((int)puVar4 + (uVar2 >> 3));
      if (puVar6 < puVar4) {
        puVar4 = puVar6;
      }
      uVar7 = uVar7 >> (uVar2 & 0xf8);
      uVar8 = uVar2 & 7;
    } while (param_3 < pbVar14);
  }
LAB_01793c9c:
  uVar3 = *(uint *)(&DAT_0045031c + uVar15 * 4);
  uVar7 = uVar7 | (uVar12 & uVar3) << uVar8;
  uVar12 = uVar8 + uVar15 & 7;
  uVar9 = uVar8 + uVar15 >> 3;
  uVar15 = uVar12 + uVar15;
  puVar5 = (uint *)((int)puVar4 + uVar9);
  *puVar4 = uVar7;
  if (puVar6 < puVar5) {
    puVar5 = puVar6;
  }
  uVar7 = uVar7 >> ((uVar9 & 0x1f) << 3) | (uVar3 & uVar10) << uVar12;
  uVar9 = uVar15 >> 3;
  uVar15 = uVar15 & 7;
  uVar8 = uVar15 + 1;
  puVar4 = (uint *)((int)puVar5 + uVar9);
  *puVar5 = uVar7;
  if (puVar6 < puVar4) {
    puVar4 = puVar6;
  }
  puVar5 = (uint *)((int)puVar4 + (uVar8 >> 3));
  *puVar4 = 1 << uVar15 | uVar7 >> ((uVar9 & 0x1f) << 3);
  if ((puVar6 < puVar5) || (puVar6 == puVar5)) {
    return 0;
  }
  iVar17 = (int)puVar5 - (int)param_1;
  if ((uVar8 & 7) != 0) {
    iVar17 = iVar17 + 1;
  }
  return iVar17;
}

