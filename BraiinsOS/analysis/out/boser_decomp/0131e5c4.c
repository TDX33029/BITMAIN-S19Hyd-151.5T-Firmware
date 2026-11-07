// FUN_0131e5c4 @ 0131e5c4 size=668 calls_out=1 calls_in=2
// strings: 

void FUN_0131e5c4(int param_1,byte *param_2,uint param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  uVar5 = param_3 / 0xc;
  uVar10 = param_3 / 3;
  if (0xb < param_3) {
    uVar15 = 0;
    iVar16 = 4;
    puVar7 = param_4;
    pbVar9 = param_2;
    do {
      iVar14 = uVar15 << 2;
      puVar6 = puVar7;
      pbVar8 = pbVar9;
      do {
        uVar4 = 0;
        uVar11 = 0;
        uVar13 = 0;
        pbVar2 = pbVar8;
        do {
          bVar1 = *pbVar2;
          uVar17 = (uint)bVar1 << (uVar4 & 0xff);
          uVar12 = (uint)(bVar1 >> (0x20 - uVar4 & 0xff));
          if (-1 < (int)(uVar4 - 0x20)) {
            uVar17 = 0;
            uVar12 = (uint)bVar1 << (uVar4 - 0x20 & 0xff);
          }
          uVar4 = uVar4 + 8;
          uVar11 = uVar17 | uVar11;
          uVar13 = uVar12 | uVar13;
          pbVar2 = pbVar2 + 1;
        } while (uVar4 != 0x18);
        uVar4 = 0;
        puVar3 = puVar6;
        do {
          uVar17 = uVar11 >> (uVar4 & 0xff) | uVar13 << (0x20 - uVar4 & 0xff);
          uVar12 = uVar4 - 0x20;
          uVar4 = uVar4 + 6;
          if (-1 < (int)uVar12) {
            uVar17 = uVar13 >> (uVar12 & 0xff);
          }
          *puVar3 = *(undefined1 *)(param_1 + (uVar17 & 0xff));
          puVar3 = puVar3 + 1;
        } while (uVar4 != 0x18);
        iVar14 = iVar14 + 1;
        puVar6 = puVar6 + 4;
        pbVar8 = pbVar8 + 3;
      } while (iVar14 != iVar16);
      iVar16 = iVar16 + 4;
      uVar15 = uVar15 + 1;
      puVar7 = puVar7 + 0x10;
      pbVar9 = pbVar9 + 0xc;
    } while (uVar15 != uVar5);
  }
  uVar15 = uVar10 & 0x3ffffffc;
  if (uVar15 != uVar10) {
    puVar7 = param_4 + uVar5 * 0x10;
    pbVar9 = param_2 + uVar5 * 0xc;
    do {
      uVar5 = 0;
      uVar4 = 0;
      uVar11 = 0;
      pbVar8 = pbVar9;
      do {
        bVar1 = *pbVar8;
        uVar17 = uVar5 - 0x20;
        uVar13 = (uint)bVar1 << (uVar5 & 0xff);
        if (-1 < (int)uVar17) {
          uVar13 = 0;
        }
        uVar4 = uVar13 | uVar4;
        uVar13 = 0x20 - uVar5;
        uVar5 = uVar5 + 8;
        uVar13 = (uint)(bVar1 >> (uVar13 & 0xff));
        if (-1 < (int)uVar17) {
          uVar13 = (uint)bVar1 << (uVar17 & 0xff);
        }
        uVar11 = uVar13 | uVar11;
        pbVar8 = pbVar8 + 1;
      } while (uVar5 != 0x18);
      uVar5 = 0;
      puVar6 = puVar7;
      do {
        uVar13 = uVar4 >> (uVar5 & 0xff) | uVar11 << (0x20 - uVar5 & 0xff);
        uVar17 = uVar5 - 0x20;
        uVar5 = uVar5 + 6;
        if (-1 < (int)uVar17) {
          uVar13 = uVar11 >> (uVar17 & 0xff);
        }
        *puVar6 = *(undefined1 *)(param_1 + (uVar13 & 0xff));
        puVar6 = puVar6 + 1;
      } while (uVar5 != 0x18);
      uVar15 = uVar15 + 1;
      puVar7 = puVar7 + 4;
      pbVar9 = pbVar9 + 3;
    } while (uVar15 < uVar10);
  }
  uVar5 = uVar10 * 3;
  if (param_3 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar5,param_3,param_3,&DAT_01ce4da0);
  }
  uVar15 = uVar10 * 4;
  if (param_5 < uVar10 << 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar15,param_5,param_5,&DAT_01ce4db0);
  }
  uVar11 = 0;
  uVar4 = 0;
  if (param_3 != uVar5) {
    param_3 = param_3 % 3;
    uVar13 = 0;
    pbVar9 = param_2 + uVar5;
    do {
      bVar1 = *pbVar9;
      uVar17 = uVar13 & 0x38;
      uVar12 = uVar17 - 0x20;
      uVar13 = uVar13 + 8;
      uVar5 = (uint)bVar1 << uVar17;
      if (-1 < (int)uVar12) {
        uVar5 = 0;
      }
      uVar11 = uVar5 | uVar11;
      uVar5 = (uint)(bVar1 >> (0x20 - uVar17 & 0xff));
      if (-1 < (int)uVar12) {
        uVar5 = (uint)bVar1 << (uVar12 & 0xff);
      }
      uVar4 = uVar5 | uVar4;
      param_3 = param_3 - 1;
      pbVar9 = pbVar9 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar15) {
    iVar16 = param_5 + uVar10 * -4;
    uVar5 = 0;
    puVar7 = param_4 + uVar15;
    do {
      uVar15 = uVar5 & 0x3e;
      uVar5 = uVar5 + 6;
      uVar10 = uVar11 >> uVar15 | uVar4 << (0x20 - uVar15 & 0xff);
      if (-1 < (int)(uVar15 - 0x20)) {
        uVar10 = uVar4 >> (uVar15 - 0x20 & 0xff);
      }
      iVar16 = iVar16 + -1;
      *puVar7 = *(undefined1 *)(param_1 + (uVar10 & 0xff));
      puVar7 = puVar7 + 1;
    } while (iVar16 != 0);
  }
  return;
}

