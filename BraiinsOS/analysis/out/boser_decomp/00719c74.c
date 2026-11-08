// FUN_00719c74 @ 00719c74 size=232 calls_out=0 calls_in=4
// strings: 

void FUN_00719c74(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort uVar6;
  
  iVar3 = param_2[1];
  pbVar5 = (byte *)*param_2;
  if (iVar3 == 0) {
    *(byte **)(param_1 + 4) = pbVar5;
    *(byte **)(param_1 + 8) = pbVar5;
  }
  else {
    pbVar4 = pbVar5 + 1;
    bVar1 = *pbVar5;
    *param_2 = pbVar4;
    param_2[1] = iVar3 + -1;
    uVar6 = bVar1 & 0x7f;
    if (-1 < (char)bVar1) {
LAB_00719ca8:
      uVar2 = 0x4f;
      *(ushort *)(param_1 + 2) = uVar6;
      goto LAB_00719cc8;
    }
    if (iVar3 + -1 == 0) {
      *(byte **)(param_1 + 4) = pbVar4;
      *(byte **)(param_1 + 8) = pbVar4;
    }
    else {
      bVar1 = pbVar5[1];
      pbVar4 = pbVar5 + 2;
      *param_2 = pbVar4;
      param_2[1] = iVar3 + -2;
      uVar6 = uVar6 | (bVar1 & 0x7f) << 7;
      if (-1 < (char)bVar1) goto LAB_00719ca8;
      if (iVar3 + -2 != 0) {
        bVar1 = pbVar5[2];
        *param_2 = pbVar5 + 3;
        param_2[1] = iVar3 + -3;
        if (bVar1 < 4) {
          *param_1 = 0x4f;
          *(ushort *)(param_1 + 2) = uVar6 | (ushort)bVar1 << 0xe;
          return;
        }
        uVar2 = 6;
        goto LAB_00719cc8;
      }
      *(byte **)(param_1 + 4) = pbVar4;
      *(byte **)(param_1 + 8) = pbVar4;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = 0x13;
LAB_00719cc8:
  *param_1 = uVar2;
  return;
}

