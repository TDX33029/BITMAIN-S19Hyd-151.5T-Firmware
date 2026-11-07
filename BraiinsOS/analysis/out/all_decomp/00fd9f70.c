// FUN_00fd9f70 @ 00fd9f70 size=928 calls_out=2 calls_in=1
// strings: 

void FUN_00fd9f70(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar4 = param_5 >> 3;
  if (uVar4 != 0) {
    uVar10 = 0;
    pbVar3 = (byte *)(param_6 + 2);
    do {
      uVar12 = (uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar10));
      if (7 < uVar12) goto LAB_00fda2bc;
      iVar9 = param_4 + uVar10;
      uVar7 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar9 + 1));
      if (7 < uVar7) {
        uVar10 = uVar10 | 1;
        goto LAB_00fda2bc;
      }
      uVar5 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar9 + 2));
      if (7 < uVar5) {
        uVar10 = uVar10 | 2;
        goto LAB_00fda2bc;
      }
      uVar8 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar9 + 3));
      if (7 < uVar8) {
        uVar10 = uVar10 | 3;
        goto LAB_00fda2bc;
      }
      uVar11 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar9 + 4));
      if (7 < uVar11) {
        uVar10 = uVar10 | 4;
        goto LAB_00fda2bc;
      }
      bVar6 = *(byte *)(param_3 + (uint)*(byte *)(iVar9 + 5));
      if (7 < bVar6) {
        uVar10 = uVar10 | 5;
        goto LAB_00fda2bc;
      }
      bVar1 = *(byte *)(param_3 + (uint)*(byte *)(iVar9 + 6));
      if (7 < bVar1) {
        uVar10 = uVar10 | 6;
        goto LAB_00fda2bc;
      }
      bVar2 = *(byte *)(param_3 + (uint)*(byte *)(iVar9 + 7));
      if (7 < bVar2) {
        uVar10 = uVar10 | 7;
        goto LAB_00fda2bc;
      }
      uVar10 = uVar10 + 8;
      *pbVar3 = bVar2 | bVar1 << 3 | bVar6 << 6;
      pbVar3[-2] = (byte)((uVar7 << 0x12) >> 0x10) | (byte)((uVar12 << 0x15) >> 0x10) |
                   (byte)((uVar5 << 0xf) >> 0x10);
      pbVar3[-1] = (byte)((uVar8 << 0xc) >> 8) | (byte)((uVar11 << 9) >> 8) |
                   (byte)((uVar5 << 0xf) >> 8) | (byte)(((uint)bVar6 << 6) >> 8);
      pbVar3 = pbVar3 + 3;
    } while (uVar4 * 8 != uVar10);
  }
  uVar12 = uVar4 * 3;
  if (param_7 < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar12,param_7,param_7,&DAT_018814ec);
  }
  uVar7 = param_5 & 7;
  if (uVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar10 = 0;
    pbVar3 = (byte *)(param_4 + (param_5 & 0x7ffffff8));
    if (7 < *(byte *)(param_3 + (uint)*pbVar3)) {
LAB_00fda294:
      uVar10 = uVar10 | param_5 & 0x7ffffff8;
LAB_00fda2bc:
      *param_1 = uVar10 & 0xfffffff8;
      param_1[1] = (uVar10 >> 3) * 3;
      param_1[2] = uVar10;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    uVar5 = (uint)*(byte *)(param_3 + (uint)*pbVar3) << 0x15;
    if (uVar7 != 1) {
      uVar10 = 1;
      if (7 < *(byte *)(param_3 + (uint)pbVar3[1])) goto LAB_00fda294;
      uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar3[1]) << 0x12;
      if (uVar7 != 2) {
        uVar10 = 2;
        if (7 < *(byte *)(param_3 + (uint)pbVar3[2])) goto LAB_00fda294;
        uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar3[2]) << 0xf;
        if (uVar7 != 3) {
          uVar10 = 3;
          if (7 < *(byte *)(param_3 + (uint)pbVar3[3])) goto LAB_00fda294;
          uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar3[3]) << 0xc;
          if (uVar7 != 4) {
            uVar10 = 4;
            if (7 < *(byte *)(param_3 + (uint)pbVar3[4])) goto LAB_00fda294;
            uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar3[4]) << 9;
            if (uVar7 != 5) {
              uVar10 = 5;
              if (7 < *(byte *)(param_3 + (uint)pbVar3[5])) goto LAB_00fda294;
              uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar3[5]) << 6;
              if (uVar7 != 6) {
                uVar10 = 6;
                if (7 < *(byte *)(param_3 + (uint)pbVar3[6])) goto LAB_00fda294;
                uVar5 = uVar5 | (uint)*(byte *)(param_3 + (uint)pbVar3[6]) << 3;
              }
            }
          }
        }
      }
    }
  }
  if (param_7 != uVar12) {
    uVar10 = 0x10;
    iVar9 = param_7 + uVar4 * -3;
    pbVar3 = (byte *)(param_6 + uVar12);
    do {
      uVar4 = uVar10 & 0x38;
      uVar10 = uVar10 - 8;
      bVar6 = (byte)(uVar5 >> uVar4) | (byte)(0 << (0x20 - uVar4 & 0xff));
      if (-1 < (int)(uVar4 - 0x20)) {
        bVar6 = (byte)(0 >> (uVar4 - 0x20 & 0xff));
      }
      iVar9 = iVar9 + -1;
      *pbVar3 = bVar6;
      pbVar3 = pbVar3 + 1;
    } while (iVar9 != 0);
  }
  bVar13 = param_2 == 0;
  uVar4 = 0;
  if (!bVar13) {
    uVar4 = param_5 * 3 & 7;
    bVar13 = uVar4 == 0;
  }
  if (!bVar13) {
    uVar10 = param_5 - 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0xffffffff,0,&DAT_0188153c);
    }
    if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar10)) & ~(-1 << uVar4)) != 0) {
      *param_1 = uVar10 & 0xfffffff8;
      param_1[1] = (uVar10 >> 3) * 3;
      param_1[2] = uVar10;
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
  }
  *param_1 = param_7;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

