// FUN_00fd9a10 @ 00fd9a10 size=432 calls_out=1 calls_in=1
// strings: 

void FUN_00fd9a10(uint *param_1,int param_2,int param_3,uint param_4,byte *param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = param_4 >> 2;
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar9 = 0;
    pbVar5 = param_5;
    do {
      bVar4 = *(byte *)(param_2 + (uint)*(byte *)(param_3 + uVar9));
      if (3 < bVar4) {
LAB_00fd9b84:
        uVar10 = uVar10 | uVar9;
        goto LAB_00fd9b88;
      }
      iVar7 = param_3 + uVar9;
      bVar1 = *(byte *)(param_2 + (uint)*(byte *)(iVar7 + 1));
      if (3 < bVar1) {
        uVar10 = 1;
        goto LAB_00fd9b84;
      }
      bVar2 = *(byte *)(param_2 + (uint)*(byte *)(iVar7 + 2));
      if (3 < bVar2) {
        uVar10 = 2;
        goto LAB_00fd9b84;
      }
      bVar3 = *(byte *)(param_2 + (uint)*(byte *)(iVar7 + 3));
      if (3 < bVar3) {
        uVar10 = 3;
        goto LAB_00fd9b84;
      }
      uVar9 = uVar9 + 4;
      *pbVar5 = bVar1 << 4 | bVar4 << 6 | bVar2 << 2 | bVar3;
      pbVar5 = pbVar5 + 1;
    } while (uVar6 * 4 != uVar9);
  }
  if (param_6 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar6,param_6,param_6,&DAT_018814ec);
  }
  uVar9 = param_4 & 3;
  if (uVar9 == 0) {
    uVar8 = 0;
  }
  else {
    uVar10 = 0;
    pbVar5 = (byte *)(param_3 + (param_4 & 0x7ffffffc));
    if (3 < *(byte *)(param_2 + (uint)*pbVar5)) {
LAB_00fd9b10:
      uVar10 = uVar10 | param_4 & 0x7ffffffc;
LAB_00fd9b88:
      param_1[2] = uVar10;
      *param_1 = uVar10 & 0xfffffffc;
      param_1[1] = uVar10 >> 2;
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
    uVar8 = (uint)*(byte *)(param_2 + (uint)*pbVar5) << 6;
    if (uVar9 != 1) {
      uVar10 = 1;
      if (3 < *(byte *)(param_2 + (uint)pbVar5[1])) goto LAB_00fd9b10;
      uVar8 = uVar8 | (uint)*(byte *)(param_2 + (uint)pbVar5[1]) << 4;
      if (uVar9 != 2) {
        uVar10 = 2;
        if (3 < *(byte *)(param_2 + (uint)pbVar5[2])) goto LAB_00fd9b10;
        uVar8 = uVar8 | (uint)*(byte *)(param_2 + (uint)pbVar5[2]) << 2;
      }
    }
  }
  if (param_6 != uVar6) {
    iVar7 = param_6 - uVar6;
    uVar10 = 0;
    pbVar5 = param_5 + uVar6;
    do {
      uVar6 = uVar10 & 0x38;
      uVar10 = uVar10 + 0x38;
      bVar4 = (byte)(uVar8 >> uVar6) | (byte)(0 << (0x20 - uVar6 & 0xff));
      if (-1 < (int)(uVar6 - 0x20)) {
        bVar4 = (byte)(0 >> (uVar6 - 0x20 & 0xff));
      }
      iVar7 = iVar7 + -1;
      *pbVar5 = bVar4;
      pbVar5 = pbVar5 + 1;
    } while (iVar7 != 0);
  }
  *param_1 = param_6;
  *(undefined1 *)(param_1 + 3) = 4;
  return;
}

