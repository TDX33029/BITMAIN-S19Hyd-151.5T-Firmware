// FUN_00fda6fc @ 00fda6fc size=1000 calls_out=2 calls_in=1
// strings: 

void FUN_00fda6fc(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  uVar4 = param_5 >> 3;
  if (uVar4 != 0) {
    uVar8 = 0;
    iVar7 = 0;
    pbVar9 = (byte *)(param_6 + 4);
    do {
      bVar6 = *(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar8));
      if (0x1f < bVar6) {
        uVar11 = 0;
LAB_00fdaa8c:
        uVar11 = uVar11 | uVar8;
        goto LAB_00fdaa94;
      }
      iVar5 = param_4 + iVar7 * -8;
      bVar1 = *(byte *)(param_3 + (uint)*(byte *)(iVar5 + 1));
      if (0x1f < bVar1) {
        uVar11 = 1;
        goto LAB_00fdaa8c;
      }
      uVar11 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar5 + 2));
      if (0x1f < uVar11) {
        uVar11 = 2;
        goto LAB_00fdaa8c;
      }
      uVar10 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar5 + 3));
      if (0x1f < uVar10) {
        uVar11 = 3;
        goto LAB_00fdaa8c;
      }
      uVar12 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar5 + 4));
      if (0x1f < uVar12) {
        uVar11 = 4;
        goto LAB_00fdaa8c;
      }
      uVar13 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar5 + 5));
      if (0x1f < uVar13) {
        uVar11 = 5;
        goto LAB_00fdaa8c;
      }
      bVar2 = *(byte *)(param_3 + (uint)*(byte *)(iVar5 + 6));
      if (0x1f < bVar2) {
        uVar11 = 6;
        goto LAB_00fdaa8c;
      }
      bVar3 = *(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar8 + 7));
      if (0x1f < bVar3) {
        uVar11 = 7;
        goto LAB_00fdaa8c;
      }
      pbVar9[-4] = bVar1 >> 2 | bVar6 << 3;
      iVar5 = param_6 + iVar7 * -5;
      uVar12 = uVar12 << 0xf | uVar13 << 10;
      iVar7 = iVar7 + -1;
      *(byte *)(iVar5 + 3) = (byte)(uVar12 >> 8) | (byte)(((uint)bVar2 << 5) >> 8);
      *(byte *)(iVar5 + 2) = (byte)(uVar12 >> 0x10) | (byte)((uVar10 << 0x14) >> 0x10);
      *(byte *)(iVar5 + 1) =
           (byte)((uVar11 << 0x19) >> 0x18) | (byte)((uVar10 << 0x14) >> 0x18) |
           (byte)(((uint)bVar1 << 0x1e) >> 0x18);
      *pbVar9 = bVar3 | bVar2 << 5;
      pbVar9 = pbVar9 + 5;
      uVar8 = uVar8 + 8;
    } while (-uVar4 != iVar7);
  }
  uVar8 = uVar4 * 5;
  if (param_7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar8,param_7,param_7,&DAT_018814ec);
  }
  uVar10 = param_5 & 7;
  if (uVar10 == 0) {
    uVar13 = 0;
    uVar12 = 0;
  }
  else {
    pbVar9 = (byte *)(param_4 + (param_5 & 0x7ffffff8));
    uVar11 = 0;
    if (0x1f < *(byte *)(param_3 + (uint)*pbVar9)) {
LAB_00fdaa70:
      uVar11 = uVar11 | param_5 & 0x7ffffff8;
LAB_00fdaa94:
      param_1[2] = uVar11;
      *param_1 = uVar11 & 0xfffffff8;
      param_1[1] = (uVar11 >> 3) * 5;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    uVar12 = (uint)*(byte *)(param_3 + (uint)*pbVar9) << 3;
    uVar13 = 0;
    if (uVar10 != 1) {
      uVar11 = 1;
      bVar6 = *(byte *)(param_3 + (uint)pbVar9[1]);
      if (0x1f < bVar6) goto LAB_00fdaa70;
      uVar12 = uVar12 | bVar6 >> 2;
      uVar13 = (uint)bVar6 << 0x1e;
      if (uVar10 != 2) {
        uVar11 = 2;
        bVar6 = *(byte *)(param_3 + (uint)pbVar9[2]);
        if (0x1f < bVar6) goto LAB_00fdaa70;
        uVar13 = uVar13 | (uint)bVar6 << 0x19;
        uVar12 = uVar12 | bVar6 >> 7;
        if (uVar10 != 3) {
          uVar11 = 3;
          if (0x1f < *(byte *)(param_3 + (uint)pbVar9[3])) goto LAB_00fdaa70;
          uVar13 = uVar13 | (uint)*(byte *)(param_3 + (uint)pbVar9[3]) << 0x14;
          if (uVar10 != 4) {
            uVar11 = 4;
            if (0x1f < *(byte *)(param_3 + (uint)pbVar9[4])) goto LAB_00fdaa70;
            uVar13 = uVar13 | (uint)*(byte *)(param_3 + (uint)pbVar9[4]) << 0xf;
            if (uVar10 != 5) {
              uVar11 = 5;
              if (0x1f < *(byte *)(param_3 + (uint)pbVar9[5])) goto LAB_00fdaa70;
              uVar13 = uVar13 | (uint)*(byte *)(param_3 + (uint)pbVar9[5]) << 10;
              if (uVar10 != 6) {
                uVar11 = 6;
                if (0x1f < *(byte *)(param_3 + (uint)pbVar9[6])) goto LAB_00fdaa70;
                uVar13 = uVar13 | (uint)*(byte *)(param_3 + (uint)pbVar9[6]) << 5;
              }
            }
          }
        }
      }
    }
  }
  if (param_7 != uVar8) {
    iVar7 = param_7 + uVar4 * -5;
    uVar4 = 0x20;
    pbVar9 = (byte *)(param_6 + uVar8);
    do {
      uVar8 = uVar4 & 0x38;
      uVar4 = uVar4 - 8;
      bVar6 = (byte)(uVar13 >> uVar8) | (byte)(uVar12 << (0x20 - uVar8 & 0xff));
      if (-1 < (int)(uVar8 - 0x20)) {
        bVar6 = (byte)(uVar12 >> (uVar8 - 0x20 & 0xff));
      }
      iVar7 = iVar7 + -1;
      *pbVar9 = bVar6;
      pbVar9 = pbVar9 + 1;
    } while (iVar7 != 0);
  }
  bVar14 = param_2 == 0;
  uVar4 = 0;
  if (!bVar14) {
    uVar4 = param_5 * 5 & 7;
    bVar14 = uVar4 == 0;
  }
  if (!bVar14) {
    uVar8 = param_5 - 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0xffffffff,0,&DAT_0188153c);
    }
    if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar8)) & ~(-1 << uVar4)) != 0) {
      *param_1 = uVar8 & 0xfffffff8;
      param_1[1] = (uVar8 >> 3) * 5;
      param_1[2] = uVar8;
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
  }
  *param_1 = param_7;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

