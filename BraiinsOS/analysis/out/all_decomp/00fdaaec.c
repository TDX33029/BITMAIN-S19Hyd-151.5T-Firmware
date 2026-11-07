// FUN_00fdaaec @ 00fdaaec size=608 calls_out=2 calls_in=1
// strings: 

void FUN_00fdaaec(uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                 uint param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint unaff_r6;
  uint unaff_r7;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar3 = param_5 >> 2;
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar7 = 0;
    pbVar4 = (byte *)(param_6 + 2);
    do {
      bVar1 = *(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar7));
      if (0x3f < bVar1) {
LAB_00fdaca8:
        uVar9 = uVar9 | uVar7;
        goto LAB_00fdacac;
      }
      iVar6 = param_4 + uVar7;
      bVar2 = *(byte *)(param_3 + (uint)*(byte *)(iVar6 + 1));
      if (0x3f < bVar2) {
        uVar9 = 1;
        goto LAB_00fdaca8;
      }
      unaff_r7 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar6 + 2));
      if (0x3f < unaff_r7) {
        uVar9 = 2;
        goto LAB_00fdaca8;
      }
      unaff_r6 = (uint)*(byte *)(param_3 + (uint)*(byte *)(iVar6 + 3));
      if (0x3f < unaff_r6) {
        uVar9 = 3;
        goto LAB_00fdaca8;
      }
      pbVar4[-2] = bVar1 | bVar2 << 6;
      uVar7 = uVar7 + 4;
      *pbVar4 = (byte)((unaff_r6 << 0x12) >> 0x10) | (byte)((unaff_r7 << 0xc) >> 0x10);
      pbVar4[-1] = (byte)((unaff_r7 << 0xc) >> 8) | (byte)(((uint)bVar2 << 6) >> 8);
      pbVar4 = pbVar4 + 3;
    } while (uVar3 * 4 != uVar7);
  }
  uVar9 = uVar3 * 3;
  if (param_7 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar9,param_7,param_7,&DAT_018814ec);
  }
  uVar7 = param_5 & 3;
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    unaff_r6 = 0;
    pbVar4 = (byte *)(param_4 + (param_5 & 0x7ffffffc));
    uVar8 = (uint)*(byte *)(param_3 + (uint)*pbVar4);
    if (0x3f < uVar8) {
LAB_00fdac14:
      uVar9 = unaff_r6 | param_5 & 0x7ffffffc;
LAB_00fdacac:
      param_1[2] = uVar9;
      *param_1 = uVar9 & 0xfffffffc;
      param_1[1] = (uVar9 >> 2) * 3;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    if (uVar7 != 1) {
      unaff_r6 = 1;
      if (0x3f < *(byte *)(param_3 + (uint)pbVar4[1])) goto LAB_00fdac14;
      uVar8 = uVar8 | (uint)*(byte *)(param_3 + (uint)pbVar4[1]) << 6;
      if (uVar7 != 2) {
        unaff_r6 = 2;
        if (0x3f < *(byte *)(param_3 + (uint)pbVar4[2])) goto LAB_00fdac14;
        uVar8 = uVar8 | (uint)*(byte *)(param_3 + (uint)pbVar4[2]) << 0xc;
      }
    }
  }
  if (param_7 != uVar9) {
    iVar6 = param_7 + uVar3 * -3;
    unaff_r6 = 0;
    puVar5 = (undefined1 *)(param_6 + uVar9);
    do {
      uVar3 = unaff_r6 & 0x38;
      unaff_r6 = unaff_r6 + 8;
      unaff_r7 = uVar8 >> uVar3 | 0 << (0x20 - uVar3 & 0xff);
      if (-1 < (int)(uVar3 - 0x20)) {
        unaff_r7 = 0 >> (uVar3 - 0x20 & 0xff);
      }
      iVar6 = iVar6 + -1;
      *puVar5 = (char)unaff_r7;
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  bVar10 = param_2 == 0;
  if (!bVar10) {
    unaff_r6 = param_5 * 3;
    unaff_r7 = param_5 * 6 & 6;
    bVar10 = unaff_r7 == 0;
  }
  if (!bVar10) {
    uVar3 = param_5 - 1;
    if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0xffffffff,0,&DAT_0188153c);
    }
    if (((uint)*(byte *)(param_3 + (uint)*(byte *)(param_4 + uVar3)) &
        ~(-1 << (unaff_r7 & 0xff)) << (unaff_r6 * -2 + 6 & 6)) != 0) {
      *param_1 = uVar3 & 0xfffffffc;
      param_1[1] = (uVar3 >> 2) * 3;
      param_1[2] = uVar3;
      *(undefined1 *)(param_1 + 3) = 2;
      return;
    }
  }
  *param_1 = param_7;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

