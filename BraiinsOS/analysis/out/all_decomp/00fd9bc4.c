// FUN_00fd9bc4 @ 00fd9bc4 size=932 calls_out=2 calls_in=1
// strings: 

void FUN_00fd9bc4(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r7;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar9 = param_5 >> 3;
  if (uVar9 != 0) {
    uVar12 = 0;
    pbVar6 = (byte *)(param_6 + 2);
    do {
      bVar1 = *(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar12));
      if (7 < bVar1) goto LAB_00fd9f14;
      iVar10 = param_4 + uVar12;
      bVar2 = *(byte *)(param_3 + (uint)*(byte *)(iVar10 + 1));
      if (7 < bVar2) {
        uVar12 = uVar12 | 1;
        goto LAB_00fd9f14;
      }
      bVar3 = *(byte *)(param_3 + (uint)*(byte *)(iVar10 + 2));
      if (7 < bVar3) {
        uVar12 = uVar12 | 2;
        goto LAB_00fd9f14;
      }
      uVar11 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar10 + 3));
      if (7 < uVar11) {
        uVar12 = uVar12 | 3;
        goto LAB_00fd9f14;
      }
      uVar13 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar10 + 4));
      if (7 < uVar13) {
        uVar12 = uVar12 | 4;
        goto LAB_00fd9f14;
      }
      uVar5 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar10 + 5));
      if (7 < uVar5) {
        uVar12 = uVar12 | 5;
        goto LAB_00fd9f14;
      }
      uVar4 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar10 + 6));
      if (7 < uVar4) {
        uVar12 = uVar12 | 6;
        goto LAB_00fd9f14;
      }
      uVar8 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar10 + 7));
      if (7 < uVar8) {
        uVar12 = uVar12 | 7;
        goto LAB_00fd9f14;
      }
      pbVar6[-2] = bVar2 << 3 | bVar3 << 6 | bVar1;
      uVar12 = uVar12 + 8;
      unaff_r7 = uVar11 << 9 | uVar13 << 0xc;
      uVar11 = unaff_r7 | uVar5 << 0xf;
      *pbVar6 = (byte)((uVar4 << 0x12) >> 0x10) | (byte)((uVar8 << 0x15) >> 0x10) |
                (byte)(uVar11 >> 0x10);
      pbVar6[-1] = (byte)(uVar11 >> 8) | (byte)(((uint)bVar3 << 6) >> 8);
      pbVar6 = pbVar6 + 3;
    } while (uVar9 * 8 != uVar12);
  }
  uVar11 = uVar9 * 3;
  if (param_7 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,param_7,param_7,&DAT_018814ec);
  }
  uVar13 = param_5 & 7;
  if (uVar13 == 0) {
    uVar5 = 0;
  }
  else {
    uVar12 = 0;
    pbVar6 = (byte *)(param_4 + (param_5 & 0x7ffffff8));
    uVar5 = (uint)*(byte *)(param_3 + (uint)*pbVar6);
    if (7 < uVar5) {
LAB_00fd9eec:
      uVar12 = uVar12 | param_5 & 0x7ffffff8;
LAB_00fd9f14:
      *param_1 = uVar12 & 0xfffffff8;
      param_1[1] = (uVar12 >> 3) * 3;
      param_1[2] = uVar12;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    if (uVar13 != 1) {
      uVar12 = 1;
      if (7 < *(byte *)(param_3 + (uint)pbVar6[1])) goto LAB_00fd9eec;
      uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar6[1]) << 3;
      if (uVar13 != 2) {
        uVar12 = 2;
        if (7 < *(byte *)(param_3 + (uint)pbVar6[2])) goto LAB_00fd9eec;
        uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar6[2]) << 6;
        if (uVar13 != 3) {
          uVar12 = 3;
          if (7 < *(byte *)(param_3 + (uint)pbVar6[3])) goto LAB_00fd9eec;
          uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar6[3]) << 9;
          if (uVar13 != 4) {
            uVar12 = 4;
            if (7 < *(byte *)(param_3 + (uint)pbVar6[4])) goto LAB_00fd9eec;
            uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar6[4]) << 0xc;
            if (uVar13 != 5) {
              uVar12 = 5;
              if (7 < *(byte *)(param_3 + (uint)pbVar6[5])) goto LAB_00fd9eec;
              uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar6[5]) << 0xf;
              if (uVar13 != 6) {
                uVar12 = 6;
                if (7 < *(byte *)(param_3 + (uint)pbVar6[6])) goto LAB_00fd9eec;
                uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar6[6]) << 0x12;
              }
            }
          }
        }
      }
    }
  }
  if (param_7 != uVar11) {
    iVar10 = param_7 + uVar9 * -3;
    uVar9 = 0;
    puVar7 = (undefined1 *)(param_6 + uVar11);
    do {
      uVar12 = uVar9 & 0x38;
      uVar9 = uVar9 + 8;
      unaff_r7 = uVar5 >> uVar12 | 0 << (0x20 - uVar12 & 0xff);
      if (-1 < (int)(uVar12 - 0x20)) {
        unaff_r7 = 0 >> (uVar12 - 0x20 & 0xff);
      }
      iVar10 = iVar10 + -1;
      *puVar7 = (char)unaff_r7;
      puVar7 = puVar7 + 1;
    } while (iVar10 != 0);
  }
  bVar14 = param_2 == 0;
  uVar9 = 0;
  if (!bVar14) {
    uVar9 = param_5 * 3;
    unaff_r7 = uVar9 & 7;
    bVar14 = unaff_r7 == 0;
  }
  if (!bVar14) {
    uVar12 = param_5 - 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0xffffffff,0,&DAT_0188153c);
    }
    if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar12)) &
        ~(-1 << (unaff_r7 & 0xff)) << (3 - uVar9 & 7)) != 0) {
      *param_1 = uVar12 & 0xfffffff8;
      param_1[1] = (uVar12 >> 3) * 3;
      param_1[2] = uVar12;
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
  }
  *param_1 = param_7;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

