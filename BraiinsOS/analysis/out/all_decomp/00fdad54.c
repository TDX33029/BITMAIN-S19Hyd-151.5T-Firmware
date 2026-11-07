// FUN_00fdad54 @ 00fdad54 size=600 calls_out=2 calls_in=1
// strings: 

void FUN_00fdad54(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint unaff_r7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar7 = param_5 >> 2;
  if (uVar7 != 0) {
    uVar10 = 0;
    uVar8 = 0;
    pbVar3 = (byte *)(param_6 + 2);
    do {
      uVar9 = (uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar8));
      if (0x3f < uVar9) {
LAB_00fdaf10:
        uVar10 = uVar10 | uVar8;
        goto LAB_00fdaf14;
      }
      iVar5 = param_4 + uVar8;
      uVar6 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar5 + 1));
      if (0x3f < uVar6) {
        uVar10 = 1;
        goto LAB_00fdaf10;
      }
      unaff_r7 = (uint)*(byte *)(iVar5 + 2);
      bVar1 = *(byte *)(param_3 + unaff_r7);
      if (0x3f < bVar1) {
        uVar10 = 2;
        goto LAB_00fdaf10;
      }
      bVar2 = *(byte *)(param_3 + (uint)*(byte *)(iVar5 + 3));
      if (0x3f < bVar2) {
        uVar10 = 3;
        goto LAB_00fdaf10;
      }
      *pbVar3 = bVar2 | bVar1 << 6;
      uVar8 = uVar8 + 4;
      pbVar3[-1] = (byte)(((uint)bVar1 << 6) >> 8) | (byte)((uVar6 << 0xc) >> 8);
      pbVar3[-2] = (byte)((uVar6 << 0xc) >> 0x10) | (byte)((uVar9 << 0x12) >> 0x10);
      pbVar3 = pbVar3 + 3;
    } while (uVar7 * 4 != uVar8);
  }
  uVar8 = uVar7 * 3;
  if (param_7 < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar8,param_7,param_7,&DAT_018814ec);
  }
  uVar9 = param_5 & 3;
  if (uVar9 == 0) {
    uVar6 = 0;
  }
  else {
    pbVar3 = (byte *)(param_4 + (param_5 & 0x7ffffffc));
    unaff_r7 = (uint)*(byte *)(param_3 + (uint)*pbVar3);
    uVar10 = 0;
    if (0x3f < unaff_r7) {
LAB_00fdae7c:
      uVar10 = uVar10 | param_5 & 0x7ffffffc;
LAB_00fdaf14:
      param_1[2] = uVar10;
      *param_1 = uVar10 & 0xfffffffc;
      param_1[1] = (uVar10 >> 2) * 3;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    uVar6 = unaff_r7 << 0x12;
    if (uVar9 != 1) {
      uVar10 = 1;
      if (0x3f < *(byte *)(param_3 + (uint)pbVar3[1])) goto LAB_00fdae7c;
      uVar6 = uVar6 | (uint)*(byte *)(param_3 + (uint)pbVar3[1]) << 0xc;
      if (uVar9 != 2) {
        uVar10 = 2;
        if (0x3f < *(byte *)(param_3 + (uint)pbVar3[2])) goto LAB_00fdae7c;
        uVar6 = uVar6 | (uint)*(byte *)(param_3 + (uint)pbVar3[2]) << 6;
      }
    }
  }
  if (param_7 != uVar8) {
    iVar5 = param_7 + uVar7 * -3;
    uVar7 = 0x10;
    puVar4 = (undefined1 *)(param_6 + uVar8);
    do {
      uVar10 = uVar7 & 0x38;
      uVar7 = uVar7 - 8;
      unaff_r7 = uVar6 >> uVar10 | 0 << (0x20 - uVar10 & 0xff);
      if (-1 < (int)(uVar10 - 0x20)) {
        unaff_r7 = 0 >> (uVar10 - 0x20 & 0xff);
      }
      iVar5 = iVar5 + -1;
      *puVar4 = (char)unaff_r7;
      puVar4 = puVar4 + 1;
    } while (iVar5 != 0);
  }
  bVar11 = param_2 == 0;
  if (!bVar11) {
    unaff_r7 = param_5 * 6 & 6;
    bVar11 = unaff_r7 == 0;
  }
  if (!bVar11) {
    uVar7 = param_5 - 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0xffffffff,0,&DAT_0188153c);
    }
    if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar7)) & ~(-1 << (unaff_r7 & 0xff)))
        != 0) {
      *param_1 = uVar7 & 0xfffffffc;
      param_1[1] = (uVar7 >> 2) * 3;
      param_1[2] = uVar7;
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
  }
  *param_1 = param_7;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

