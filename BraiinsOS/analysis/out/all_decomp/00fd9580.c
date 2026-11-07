// FUN_00fd9580 @ 00fd9580 size=732 calls_out=1 calls_in=1
// strings: 

void FUN_00fd9580(uint *param_1,int param_2,int param_3,uint param_4,byte *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar8 = param_4 >> 3;
  if (uVar8 != 0) {
    uVar14 = 0;
    pbVar11 = param_5;
    do {
      bVar10 = *(byte *)(param_2 + (uint)*(byte *)(param_3 + uVar14));
      if (1 < bVar10) {
        uVar12 = 0;
LAB_00fd981c:
        uVar12 = uVar12 | uVar14;
        goto LAB_00fd9824;
      }
      iVar13 = param_3 + uVar14;
      bVar1 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 1));
      if (1 < bVar1) {
        uVar12 = 1;
        goto LAB_00fd981c;
      }
      bVar2 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 2));
      if (1 < bVar2) {
        uVar12 = 2;
        goto LAB_00fd981c;
      }
      bVar3 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 3));
      if (1 < bVar3) {
        uVar12 = 3;
        goto LAB_00fd981c;
      }
      bVar4 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 4));
      if (1 < bVar4) {
        uVar12 = 4;
        goto LAB_00fd981c;
      }
      bVar5 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 5));
      if (1 < bVar5) {
        uVar12 = 5;
        goto LAB_00fd981c;
      }
      bVar6 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 6));
      if (1 < bVar6) {
        uVar12 = 6;
        goto LAB_00fd981c;
      }
      bVar7 = *(byte *)(param_2 + (uint)*(byte *)(iVar13 + 7));
      if (1 < bVar7) {
        uVar12 = 7;
        goto LAB_00fd981c;
      }
      uVar14 = uVar14 + 8;
      *pbVar11 = bVar1 << 6 | bVar10 << 7 | bVar2 << 5 | bVar3 << 4 | bVar4 << 3 | bVar5 << 2 |
                 bVar6 << 1 | bVar7;
      pbVar11 = pbVar11 + 1;
    } while (uVar8 * 8 != uVar14);
  }
  if (param_6 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar8,param_6,param_6,&DAT_018814ec);
  }
  uVar14 = param_4 & 7;
  if (uVar14 == 0) {
    uVar9 = 0;
  }
  else {
    pbVar11 = (byte *)(param_3 + (param_4 & 0x7ffffff8));
    uVar12 = 0;
    if (1 < *(byte *)(param_2 + (uint)*pbVar11)) {
LAB_00fd9800:
      uVar12 = uVar12 | param_4 & 0x7ffffff8;
LAB_00fd9824:
      param_1[2] = uVar12;
      *param_1 = uVar12 & 0xfffffff8;
      param_1[1] = uVar12 >> 3;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    uVar9 = (uint)*(byte *)(param_2 + (uint)*pbVar11) << 7;
    if (uVar14 != 1) {
      uVar12 = 1;
      if (1 < *(byte *)(param_2 + (uint)pbVar11[1])) goto LAB_00fd9800;
      uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar11[1]) << 6;
      if (uVar14 != 2) {
        uVar12 = 2;
        if (1 < *(byte *)(param_2 + (uint)pbVar11[2])) goto LAB_00fd9800;
        uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar11[2]) << 5;
        if (uVar14 != 3) {
          uVar12 = 3;
          if (1 < *(byte *)(param_2 + (uint)pbVar11[3])) goto LAB_00fd9800;
          uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar11[3]) << 4;
          if (uVar14 != 4) {
            uVar12 = 4;
            if (1 < *(byte *)(param_2 + (uint)pbVar11[4])) goto LAB_00fd9800;
            uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar11[4]) << 3;
            if (uVar14 != 5) {
              uVar12 = 5;
              if (1 < *(byte *)(param_2 + (uint)pbVar11[5])) goto LAB_00fd9800;
              uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar11[5]) << 2;
              if (uVar14 != 6) {
                uVar12 = 6;
                if (1 < *(byte *)(param_2 + (uint)pbVar11[6])) goto LAB_00fd9800;
                uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar11[6]) << 1;
              }
            }
          }
        }
      }
    }
  }
  if (param_6 != uVar8) {
    uVar14 = 0;
    iVar13 = param_6 - uVar8;
    pbVar11 = param_5 + uVar8;
    do {
      uVar8 = uVar14 & 0x38;
      uVar14 = uVar14 + 0x38;
      bVar10 = (byte)(uVar9 >> uVar8) | (byte)(0 << (0x20 - uVar8 & 0xff));
      if (-1 < (int)(uVar8 - 0x20)) {
        bVar10 = (byte)(0 >> (uVar8 - 0x20 & 0xff));
      }
      iVar13 = iVar13 + -1;
      *pbVar11 = bVar10;
      pbVar11 = pbVar11 + 1;
    } while (iVar13 != 0);
  }
  *param_1 = param_6;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

