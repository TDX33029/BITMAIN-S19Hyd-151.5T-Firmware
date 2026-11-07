// FUN_0131da54 @ 0131da54 size=416 calls_out=1 calls_in=2
// strings: 

void FUN_0131da54(int param_1,byte *param_2,uint param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  
  uVar3 = param_3 / 3;
  if (2 < param_3) {
    uVar13 = 0;
    pbVar9 = param_2;
    puVar14 = param_4;
    do {
      uVar5 = 0;
      uVar11 = 0;
      uVar12 = 0;
      pbVar6 = pbVar9;
      do {
        bVar1 = *pbVar6;
        uVar8 = uVar5 - 0x20;
        uVar4 = (uint)bVar1 << (uVar5 & 0xff);
        if (-1 < (int)uVar8) {
          uVar4 = 0;
        }
        uVar11 = uVar4 | uVar11;
        uVar4 = 0x20 - uVar5;
        uVar5 = uVar5 + 8;
        uVar4 = (uint)(bVar1 >> (uVar4 & 0xff));
        if (-1 < (int)uVar8) {
          uVar4 = (uint)bVar1 << (uVar8 & 0xff);
        }
        uVar12 = uVar4 | uVar12;
        pbVar6 = pbVar6 + 1;
      } while (uVar5 != 0x18);
      uVar5 = 0;
      puVar7 = puVar14;
      do {
        uVar4 = uVar11 >> (uVar5 & 0xff) | uVar12 << (0x20 - uVar5 & 0xff);
        uVar8 = uVar5 - 0x20;
        uVar5 = uVar5 + 3;
        if (-1 < (int)uVar8) {
          uVar4 = uVar12 >> (uVar8 & 0xff);
        }
        *puVar7 = *(undefined1 *)(param_1 + (uVar4 & 0xff));
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0x18);
      uVar13 = uVar13 + 1;
      puVar14 = puVar14 + 8;
      pbVar9 = pbVar9 + 3;
    } while (uVar13 != uVar3);
  }
  uVar13 = uVar3 * 3;
  if (param_3 < uVar13) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar13,param_3,param_3,&DAT_01ce4da0);
  }
  uVar5 = uVar3 * 8;
  if (param_5 < uVar3 << 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar5,param_5,param_5,&DAT_01ce4db0);
  }
  uVar12 = 0;
  uVar11 = 0;
  if (param_3 != uVar13) {
    param_3 = param_3 % 3;
    uVar4 = 0;
    pbVar9 = param_2 + uVar13;
    do {
      bVar1 = *pbVar9;
      uVar8 = uVar4 & 0x38;
      uVar10 = uVar8 - 0x20;
      uVar4 = uVar4 + 8;
      uVar13 = (uint)bVar1 << uVar8;
      if (-1 < (int)uVar10) {
        uVar13 = 0;
      }
      uVar12 = uVar13 | uVar12;
      uVar13 = (uint)(bVar1 >> (0x20 - uVar8 & 0xff));
      if (-1 < (int)uVar10) {
        uVar13 = (uint)bVar1 << (uVar10 & 0xff);
      }
      uVar11 = uVar13 | uVar11;
      param_3 = param_3 - 1;
      pbVar9 = pbVar9 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != uVar5) {
    iVar2 = param_5 + uVar3 * -8;
    uVar3 = 0;
    puVar14 = param_4 + uVar5;
    do {
      uVar5 = uVar3 & 0x3f;
      uVar3 = uVar3 + 3;
      uVar13 = uVar12 >> uVar5 | uVar11 << (0x20 - uVar5 & 0xff);
      if (-1 < (int)(uVar5 - 0x20)) {
        uVar13 = uVar11 >> (uVar5 - 0x20 & 0xff);
      }
      iVar2 = iVar2 + -1;
      *puVar14 = *(undefined1 *)(param_1 + (uVar13 & 0xff));
      puVar14 = puVar14 + 1;
    } while (iVar2 != 0);
  }
  return;
}

