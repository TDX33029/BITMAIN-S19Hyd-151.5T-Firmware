// FUN_00fda318 @ 00fda318 size=988 calls_out=2 calls_in=1
// strings: 

void FUN_00fda318(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r7;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  uVar8 = param_5 >> 3;
  if (uVar8 != 0) {
    uVar13 = 0;
    iVar7 = 0;
    pbVar12 = (byte *)(param_6 + 4);
    do {
      uVar9 = (uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar13));
      if (0x1f < uVar9) goto LAB_00fda6a0;
      iVar4 = param_4 + iVar7 * -8;
      uVar10 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar4 + 1));
      if (0x1f < uVar10) {
        uVar13 = uVar13 | 1;
        goto LAB_00fda6a0;
      }
      uVar11 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar4 + 2));
      if (0x1f < uVar11) {
        uVar13 = uVar13 | 2;
        goto LAB_00fda6a0;
      }
      uVar14 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar4 + 3));
      if (0x1f < uVar14) {
        uVar13 = uVar13 | 3;
        goto LAB_00fda6a0;
      }
      uVar6 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar4 + 4));
      if (0x1f < uVar6) {
        uVar13 = uVar13 | 4;
        goto LAB_00fda6a0;
      }
      bVar1 = *(byte *)(param_3 + (uint)*(byte *)(iVar4 + 5));
      if (0x1f < bVar1) {
        uVar13 = uVar13 | 5;
        goto LAB_00fda6a0;
      }
      bVar2 = *(byte *)(param_3 + (uint)*(byte *)(iVar4 + 6));
      if (0x1f < bVar2) {
        uVar13 = uVar13 | 6;
        goto LAB_00fda6a0;
      }
      bVar3 = *(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar13 + 7));
      if (0x1f < bVar3) {
        uVar13 = uVar13 | 7;
        goto LAB_00fda6a0;
      }
      uVar9 = uVar9 | uVar10 << 5;
      uVar14 = uVar11 << 10 | uVar14 << 0xf | uVar9;
      uVar10 = uVar6 << 0x14 | (uint)bVar1 << 0x19;
      uVar11 = uVar10 | uVar14;
      pbVar12[-4] = (byte)uVar9;
      unaff_r7 = uVar11 >> 0x10;
      iVar4 = param_6 + iVar7 * -5;
      *(char *)(iVar4 + 1) = (char)(uVar14 >> 8);
      uVar13 = uVar13 + 8;
      *(char *)(iVar4 + 2) = (char)(uVar11 >> 0x10);
      iVar7 = iVar7 + -1;
      *(byte *)(iVar4 + 3) = (byte)(uVar10 >> 0x18) | (byte)(((uint)bVar2 << 0x1e) >> 0x18);
      *pbVar12 = bVar2 >> 2 | bVar3 << 3 | bVar1 >> 7;
      pbVar12 = pbVar12 + 5;
    } while (-uVar8 != iVar7);
  }
  uVar9 = uVar8 * 5;
  if (param_7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar9,param_7,param_7,&DAT_018814ec);
  }
  uVar10 = param_5 & 7;
  if (uVar10 == 0) {
    uVar14 = 0;
    uVar11 = 0;
  }
  else {
    uVar13 = 0;
    pbVar12 = (byte *)(param_4 + (param_5 & 0x7ffffff8));
    uVar14 = (uint)*(byte *)(param_3 + (uint)*pbVar12);
    if (0x1f < uVar14) {
LAB_00fda678:
      uVar13 = uVar13 | param_5 & 0x7ffffff8;
LAB_00fda6a0:
      *param_1 = uVar13 & 0xfffffff8;
      param_1[1] = (uVar13 >> 3) * 5;
      param_1[2] = uVar13;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    uVar11 = 0;
    if (uVar10 != 1) {
      uVar13 = 1;
      if (0x1f < *(byte *)(param_3 + (uint)pbVar12[1])) goto LAB_00fda678;
      uVar14 = uVar14 | (uint)*(byte *)(param_3 + (uint)pbVar12[1]) << 5;
      if (uVar10 != 2) {
        uVar13 = 2;
        if (0x1f < *(byte *)(param_3 + (uint)pbVar12[2])) goto LAB_00fda678;
        uVar14 = uVar14 | (uint)*(byte *)(param_3 + (uint)pbVar12[2]) << 10;
        if (uVar10 != 3) {
          uVar13 = 3;
          if (0x1f < *(byte *)(param_3 + (uint)pbVar12[3])) goto LAB_00fda678;
          uVar14 = uVar14 | (uint)*(byte *)(param_3 + (uint)pbVar12[3]) << 0xf;
          if (uVar10 != 4) {
            uVar13 = 4;
            if (0x1f < *(byte *)(param_3 + (uint)pbVar12[4])) goto LAB_00fda678;
            uVar14 = uVar14 | (uint)*(byte *)(param_3 + (uint)pbVar12[4]) << 0x14;
            if (uVar10 != 5) {
              uVar13 = 5;
              bVar1 = *(byte *)(param_3 + (uint)pbVar12[5]);
              if (0x1f < bVar1) goto LAB_00fda678;
              uVar14 = uVar14 | (uint)bVar1 << 0x19;
              uVar11 = (uint)(bVar1 >> 7);
              if (uVar10 != 6) {
                uVar13 = 6;
                bVar2 = *(byte *)(param_3 + (uint)pbVar12[6]);
                if (0x1f < bVar2) goto LAB_00fda678;
                uVar14 = uVar14 | (uint)bVar2 << 0x1e;
                uVar11 = (uint)(byte)(bVar1 >> 7 | bVar2 >> 2);
              }
            }
          }
        }
      }
    }
  }
  if (param_7 != uVar9) {
    iVar7 = param_7 + uVar8 * -5;
    uVar8 = 0;
    puVar5 = (undefined1 *)(param_6 + uVar9);
    do {
      uVar13 = uVar8 & 0x38;
      uVar8 = uVar8 + 8;
      unaff_r7 = uVar14 >> uVar13 | uVar11 << (0x20 - uVar13 & 0xff);
      if (-1 < (int)(uVar13 - 0x20)) {
        unaff_r7 = uVar11 >> (uVar13 - 0x20 & 0xff);
      }
      iVar7 = iVar7 + -1;
      *puVar5 = (char)unaff_r7;
      puVar5 = puVar5 + 1;
    } while (iVar7 != 0);
  }
  bVar15 = param_2 == 0;
  uVar8 = 0;
  if (!bVar15) {
    uVar8 = param_5 * 5;
    unaff_r7 = uVar8 & 7;
    bVar15 = unaff_r7 == 0;
  }
  if (!bVar15) {
    uVar13 = param_5 - 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0xffffffff,0,&DAT_0188153c);
    }
    if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar13)) &
        ~(-1 << (unaff_r7 & 0xff)) << (5 - uVar8 & 7)) != 0) {
      *param_1 = uVar13 & 0xfffffff8;
      param_1[1] = (uVar13 >> 3) * 5;
      param_1[2] = uVar13;
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
  }
  *param_1 = param_7;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

