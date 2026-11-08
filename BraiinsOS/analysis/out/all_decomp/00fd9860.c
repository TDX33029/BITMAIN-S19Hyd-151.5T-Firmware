// FUN_00fd9860 @ 00fd9860 size=428 calls_out=1 calls_in=1
// strings: 

void FUN_00fd9860(uint *param_1,int param_2,int param_3,uint param_4,byte *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = param_4 >> 2;
  if (uVar7 != 0) {
    uVar10 = 0;
    uVar5 = 0;
    pbVar6 = param_5;
    do {
      bVar4 = *(byte *)(param_2 + (uint)*(byte *)(param_3 + uVar5));
      if (3 < bVar4) {
LAB_00fd99d0:
        uVar10 = uVar10 | uVar5;
        goto LAB_00fd99d4;
      }
      iVar8 = param_3 + uVar5;
      bVar1 = *(byte *)(param_2 + (uint)*(byte *)(iVar8 + 1));
      if (3 < bVar1) {
        uVar10 = 1;
        goto LAB_00fd99d0;
      }
      bVar2 = *(byte *)(param_2 + (uint)*(byte *)(iVar8 + 2));
      if (3 < bVar2) {
        uVar10 = 2;
        goto LAB_00fd99d0;
      }
      bVar3 = *(byte *)(param_2 + (uint)*(byte *)(iVar8 + 3));
      if (3 < bVar3) {
        uVar10 = 3;
        goto LAB_00fd99d0;
      }
      uVar5 = uVar5 + 4;
      *pbVar6 = bVar1 << 2 | bVar2 << 4 | bVar3 << 6 | bVar4;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 * 4 != uVar5);
  }
  if (param_6 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar7,param_6,param_6,&DAT_018814ec);
  }
  uVar5 = param_4 & 3;
  if (uVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    pbVar6 = (byte *)(param_3 + (param_4 & 0x7ffffffc));
    uVar9 = (uint)*(byte *)(param_2 + (uint)*pbVar6);
    if (3 < uVar9) {
LAB_00fd995c:
      uVar10 = uVar10 | param_4 & 0x7ffffffc;
LAB_00fd99d4:
      param_1[2] = uVar10;
      *param_1 = uVar10 & 0xfffffffc;
      param_1[1] = uVar10 >> 2;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    if (uVar5 != 1) {
      uVar10 = 1;
      if (3 < *(byte *)(param_2 + (uint)pbVar6[1])) goto LAB_00fd995c;
      uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar6[1]) << 2;
      if (uVar5 != 2) {
        uVar10 = 2;
        if (3 < *(byte *)(param_2 + (uint)pbVar6[2])) goto LAB_00fd995c;
        uVar9 = uVar9 | (uint)*(byte *)(param_2 + (uint)pbVar6[2]) << 4;
      }
    }
  }
  if (param_6 != uVar7) {
    iVar8 = param_6 - uVar7;
    uVar10 = 0;
    pbVar6 = param_5 + uVar7;
    do {
      uVar7 = uVar10 & 0x38;
      uVar10 = uVar10 + 8;
      bVar4 = (byte)(uVar9 >> uVar7) | (byte)(0 << (0x20 - uVar7 & 0xff));
      if (-1 < (int)(uVar7 - 0x20)) {
        bVar4 = (byte)(0 >> (uVar7 - 0x20 & 0xff));
      }
      iVar8 = iVar8 + -1;
      *pbVar6 = bVar4;
      pbVar6 = pbVar6 + 1;
    } while (iVar8 != 0);
  }
  *param_1 = param_6;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

